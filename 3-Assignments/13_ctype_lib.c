/************************************************************************************************************************************************************
TITLE:          C_TYPE LIBRARY
AUTHOR:         T VINODH KUMAR
DATE:
DESCRIPTION:    c-type library functions check whether c, which must have the value of an unsigned char or EOF, falls into a certain character class accordin
                to the current locale.
                    1) isalnum() – checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
                    2) isalpha() – checks for an alphabetic character; in the standard “C” locale, it is equivalent to (isupper(c) || islower(c)). In some lo
                       cales, there may be additional characters for which isalpha() is true—letters which are neither upper case nor lower case.
                    3) isascii() – checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
                    4) isblank() – checks for a blank character; that is, a space or a tab.
*************************************************************************************************************************************************************/

#include <stdio.h>
#include <ctype.h>
void is_alnum (char ch);
void is_alpha (char ch);
void is_ascii (char ch);
void is_blank (char ch);
int main()
{
	char option;
	do
	{
		char ch;
		int choice;

		//prompt the user to enter the character
		printf("Enter the character: ");
		scanf("%[^n]c", &ch);
        
        //display the menu to the user
		printf("1.IS_ALPHA-NUMERIC\n2.IS_ALPHABET\n3.IS_ASCII\n4.IS_BLANK\n");
		printf("ENTER WHAT YOU WANT TO PERFORM: ");
		scanf("%d", &choice);

		//implementing the case statement
		switch (choice)
		{
			case 1:
			       is_alnum (ch);

			      break;

		    case 2:
                  is_alpha (ch);
		          break;

		    case 3:
		          is_ascii (ch);
		          break;

		    case 4:
                  is_blank (ch);
		          break;

		    default: printf("SORRY USER THE OPTION ENTERED BY YOU IS INVALID.......\n......PLEASE TRY AGAIN......\n");
		}



      printf("DO YOU WANT TO CONTINUE? PRESS....[Y/y] OR IF YOU WANT OT EXIT PRESS....[N/n]\n");
      scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

void is_alnum (char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 0 || ch <= 9))
	{
     printf("THE ENETERED CHARACTER BY USER : [%c] IS ALPHANUMERIC\n", ch);   
	}
	else
	{
	 printf("THE ENTERED CHARACTER BY USER : [%c] IS NOT ALPHANUMERIC\n", ch);
	}
}

void is_alpha (char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
     printf("THE ENETERED CHARACTER BY USER : [%c] IS ALPHABET\n", ch);   
	}
	else
	{
	 printf("THE ENETERED CHARACTER BY USER : [%c] IS NOT AN ALPHABET\n", ch);   
	}
}

void is_ascii (char ch)
{
	if (ch >= '!' || ch <= '~')
	{
     printf("THE ASCII VALUE OF THE CHARACTER ENTERED BY THE USER : [%c] IS [%d]\n", ch, ch);
	}
	else
	{

     printf("THE ASCII VALUE OF THE CHARACTER ENTERED BY THE USER : [%c] IS  INVALID[%d]\n", ch, ch);
	}
}

void is_blank (char ch)
{
	if (ch == ' ')
	{
		printf("THE ENTERED CHARACTER IS BLANK CHARACTER\n");
	}
	else
	{
		printf("THE ENTERED CHARCTER IS NOT BLANK CHARARCTER\n");
	}
}
