/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :Implement C type library
DATE       :
DESCRIPTION:Implement C type library


 ************************************************************************/
#include<stdio.h>
#include<ctype.h>

int it_isalnum(int c);
int is_alpha(int c);
int is_ascii(int c);
int is_blank(int c);




int main()
{
	char c, rep;
	int option;

	//Prompt the user to enter the character
	printf("Enter the character: ");

	//Read the character
	scanf("%c", &c);

	do
	{   //Prompt the user to select the option
		printf("Select any option\n 1.isalnum\n 2.isalpha\n 3.isascii\n 4.isblank\n");
		scanf("%d", &option);

		switch(option)
		{
             //Logic for alphnumeric
			case 1:
				if( it_isalnum (c) )
				{
					printf("It is  a alphanumeric character\n");
				}
				else
				{
					printf("It is not a alphanumeric character\n");
				}
				int res1 = it_isalnum(c);
				printf("%d\n", res1);
				break;
            
            //Logic for case of the character
			case 2:
				if( c >= 'a' && c <= 'z' )
				{
					printf("It ia a lower case \n");
				}
				else
				{
					printf("It is upper case\n");
				}

				int res2 = is_alpha(c);
				printf("%d\n", res2);
				break;
			case 3:
				if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
				{
					printf("It is ascii character\n");
				}
				else
				{
					printf("It is not a ascii character\n");
				}

				int res3 = is_ascii(c);
				printf("%d\n", res3);
				break;
			case 4:
				if(c ==	' ' )
				{
					printf("It is a blamk character\n");
				}
				else
				{
					printf("It is not a blank character\n");
				}

				int res4 = is_blank(c);
				printf("%d\n", res4);
				break;
			default:
				printf("You entered invalid number\n");

		}
		printf("Do youy want to continue press [Yy | Nn]: ");
		scanf("\n%c", &rep);

	}while(rep == 'Y' || rep == 'y');

}

int it_isalnum(int c)
{
	int res1;
	return res1;
}

int is_alpha(int c)
{
	int res2;
	return res2;
}

int is_ascii(int c)
{
	int res3;
	return res3;
}

int is_blank(int c)
{
	int res4;
	return res4;
}



