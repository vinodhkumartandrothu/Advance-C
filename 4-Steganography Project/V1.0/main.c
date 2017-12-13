#include "main.h"

int main(int argc, char *argv[])
{
	system("clear");

	if(argc == 1)
	{
		display_help();
	}

	if(!(strcmp(argv[1],"-h") && strcmp(argv[1], "--help")))
	{
		help();
	}
	//checking whether decryption on encryption need to take place
	if(*(*(argv + 1)) == '-')
	{
		switch(*(*(argv + 1) + 1))
		{
			case 'e':
				//checking the coondition
				if(argc != 2 && argc < 4)
				{
					display_help();
				}

				//if destination file is not given
				if(argv[4] == NULL)
				{
					argv[4] = read_destination_filename();
				}
				if(argv[4] == NULL)
				{
					//setting default destination using strcpy
					strcpy(argv[4],"dest.bmp");
				}
				//calling the validate function
				validate(argv);

				//calling the encryption function
				encryption(argv);	
				break;

			case 'd':
				
				if(argc == 2 || argc > 4)
				{
					display_help();

				}
				//calling decryption function
				validate1(argv);
				
				decryption(argv);
				break;
			default:
					printf("invalid option\n");
		}	
	}
	else
	{
		display_help();
		exit(1);
	}
}


















