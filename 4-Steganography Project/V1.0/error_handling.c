#include "main.h"

void help()
{
	//for displaying the complete information of the usage of the program

	printf("./stenography <option> <source_filename> <secret_filename> <destination_filename(optional)>\n");
	printf("./stenography\t:command to run the program\n");
	printf("option\n\t:-e\t:Encryption\n\t:-d\t:Decryption\n");
	printf("source_file name: file name should be in .bmp extension\n");
	printf("secret_filename: file name should be in .bmp extension\n");
	printf("destination_filename: file name should be in .bmp extension\n");
	exit(0);


}

void display_help()
{
	//if argument count is less than the required

	printf("Insufficient arguments\n");
	printf("Type -h or --help for more information\n");
	printf("Usage:\n\t./stenography -h\n");
	exit(1);
}

char *read_destination_filename(void)
{
	char option;
	static char dest_name[20];

	printf("Destination file is not supplied\n");
	printf("Default function is (dest.bmp)");

	//asking the user for the choice
	printf("Do you want to give the file name ((yY/Nn)):");
	scanf("\n%c", &option);
	
	//checking the option is y or Y
	if(option == 'y' || option == 'Y')
	{
		printf("enter the filename\n");
		scanf("%s", dest_name);
		//returning the file base adress
		return dest_name;
	}
	// if user entered option is n return NULL
	return "dest.bmp";
}

void validate(char **file_names)
{
	size_t length = strlen(*(file_names + 2)) - 4;
	FILE *file;

	//checking the file extension is .bmp or not
	
	if(strcmp((*(file_names + 2) + length),".bmp"))
	{

		printf("the source file should be in .bmp format\n");
		exit(2);
	}
	
	//opening the file

	if(!(file = fopen(*(file_names + 2) ,"r")))
	{
		
		perror(*(file_names + 2));
		exit(3);
	}
	char ch,ch1;
	ch = fgetc(file);
	ch1 = fgetc(file);
	//checking the file format is 424D
	if(!(ch == 0x42 && ch1 == 0x4D ))
	{
		printf("the format is not matching\n");
		exit(4);
	}
	//checking  the secret code and dest file

	length = strlen(*(file_names + 3)) - 4;

	if(strcmp((*(file_names + 3) + length),".txt"))
	{
		//validating the txt file format
		printf("the secret file should be in .txt format\n");
		exit(5);
	}
	length = strlen(*(file_names + 4)) - 4;
	if(strcmp((*(file_names + 4) + length),".bmp"))
	{

		printf("the dest file should be in .bmp format\n");
		exit(6);
	}
	fcloseall();
}
void validate1(char **file_names)
{
	
	int length = strlen(*(file_names + 2)) - 4;
	if(strcmp((*(file_names + 2) + length),".bmp"))
	{
		printf("the source file should be in .bmp format\n");
		exit(2);
	}
	
	length = strlen(*(file_names + 3)) - 4; 
	if(strcmp((*(file_names + 3) + length),".txt"))
	{
		//validating the txt file format
		printf("the secret file should be in .txt format\n");
		exit(3);
	}
}

















