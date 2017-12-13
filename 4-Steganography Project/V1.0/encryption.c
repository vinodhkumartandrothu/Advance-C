#include "main.h"

void encryption(char **argv)
{	

	char buffer[54];
	FILE *fsour, *fsecr, *fdest;
	
	//opening the source file
	if(!(fsour = fopen (*(argv + 2), "rb")))
	{
		perror(*(argv + 2));
		exit(1);
	}
	
	//opening the text file
	if(!(fsecr = fopen (*(argv + 3), "r")))
	{
		perror(*(argv + 3));
		exit(2);
	}
	
	//opening the destination file
	if(!(fdest = fopen (*(argv + 4), "wb")))
	{
		perror(*(argv + 4));
		exit(3);
	}
	
	//to copy the header files of source into destination
	fread(buffer, 54, 1, fsour);
	fwrite(buffer, 54, 1, fdest); 

	//creating a random passwd
	int passwd = GENERATE_PASSWORD;

	printf("password is :%d\n", passwd);
	char ch;
	//finding the length of secret file
	int len = get_data_length(fsecr);
//	printf("lenth is :%d\n",len);

	//encrypting the password
	encrypt_pwd_length(fsour, fdest, passwd);
	
	//encrypting the length
	encrypt_pwd_length(fsour, fdest, len);

	//return the file pointer to normal positon
	rewind(fsecr);

	//encrypting the secret code
	encrypt_msg(fsour, fdest, fsecr);

	//encrypt the remaining file
	while(fread(buffer, 54, 1, fsour))
	{
		fwrite(buffer, 54, 1, fdest); 
	}
	//closing all files
	fcloseall();

	printf("Encryption Successful\n");
}


int get_data_length(FILE *fsecr)
{
	//using fseek anf ftell find the length
	fseek(fsecr,-1,SEEK_END);

	return ftell(fsecr);
	
}
void encrypt_pwd_length(FILE *fs, FILE *fd, int info)
{

	unsigned mask = 1 << 31;
	int bit;
	int n = 31;
	char ch;
	//encypting the last bit
	while(mask)
	{

		bit = (mask & info) >> n;
		n--;
		//mask left shifting
		mask =mask >> 1;
		ch = fgetc(fs);

		ch = (ch & 0xFE) | bit;
		fputc(ch,fd);			
	}
}

void encrypt_msg(FILE *fs, FILE *fd, FILE *ft)
{
	//for encrypting the character in text file
	char ch, ch1, bit;
	int n;
	unsigned mask;
	while((ch = fgetc(ft)) != EOF)
	{
		n = 7;
		mask = 0x01 << 7;
		//for each character 8bit are there
		while(mask)
		{
			bit = (mask & ch) >> n;
			n--;
			mask = mask >> 1;

			//taking the character from the source file
			ch1 = fgetc(fs);
			
			ch1 = (ch1 & 0xFE) | bit;
			//storing the result in destinatopn
			fputc(ch1, fd);
		}
	}
}


		
	












