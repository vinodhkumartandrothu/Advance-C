#include"main.h"

void decryption(char **argv)
{
	FILE *fs, *ft;

	//opening the both file
	if(!(fs = fopen (*(argv + 2), "rb")))
	{
		perror(*(argv + 2));

		exit(1);
	}

	//opening the text file
	if(!(ft = fopen (*(argv + 3), "w")))
	{
		perror(*(argv + 3));
		exit(2);
	}

	//skiping the header file
	fseek(fs, +54, SEEK_SET);
	
	//matching the pass word
	password_check(fs);

	//decrypting the length of secret file
	int length = find_length(fs);

	//recovering the message file
	msg_recover(fs, ft, length);

	printf("The Decrypted message is stored in the respective file\n");

}


void password_check(FILE *fs)
{
	int password;
	char ch;
	//decrypting the password and matching the password
	int pass = 0;
	int n = 31;
	int bit;
	while(n >= 0)
	{
		ch = fgetc(fs);
		bit = ch & 1;
		pass = (pass | (bit << n));
		n--;
	}
	printf("enter the password\n");
	scanf("%d",&password);
	if(!(pass == password))
	{
		printf("the passwords are not matched\n");
		exit(1);
	}

	printf("password is matched Successfully\n\n");
}
int find_length(FILE *fs)
{

	int pass = 0;
	char ch;
	int n = 31;
	int bit;
	while(n >= 0)
	{
		ch = fgetc(fs);
		bit = ch & 1;
		pass = (pass | (bit << n));
		n--;
	}
//	printf("length = %d\n",pass);
	//find the length and returning the length
	return pass;
}
void msg_recover(FILE *fs,FILE *ft,int length)
{
	//function for recover the message

	char pass, ch, bit;
	int n;
	
	printf("the decrypted message is:");
	//only the length we need to recover

while(length--)
	{
		pass = 0x00;
		n = 7;
		while(n >= 0)
		{
			ch = fgetc(fs);
			//taking the last bit
			bit = ch & 0x01;
			pass = (pass | (bit << n));
			n--;
		}
		putchar(pass);
		fputc(pass, ft);

	}
	printf("\n");
	
}

























