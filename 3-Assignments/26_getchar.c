/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :read_int
DATE       :
DESCRIPTION:read the interger


************************************************************************/
#include<stdio.h>
#include<ctype.h>

#define MAX 10
int read_int(char *a, int *flag);
int main()
{
	char option;
	int flag = 0;

	do
	{
		char arr[MAX] = {0};

		//Prompt the user to enter the number
		printf("Enter the num: ");

		//Function call
		read_int(arr, flag);

		if(flag)
		{
		printf("number = %s\n", arr * -1);
		}
		else
		{

		printf("number = %s\n", arr);
		}
		/* Prompt for Continue option */
		printf("Continue (y/n): ");

		scanf("\n%c", &option);

		if ( option == 'y' )
		{
			/* to remove the newline */
			getchar();
			continue;
		}
		else
		{
			break;
		}

	} while(1);
	return 0;
}


int read_int(char *a, int *flag)
{
	int ch, i;
	a[0] = '0';
#if 0
	for(i = 0; i < MAX; i++)
	{
		ch =	getchar();
		putchar(ch);

	}
#endif

	/* till new line is reached, collect the characters in s whose reference is passed       */

	for (i=0; ((ch = getchar()) != '\n'); i++)
	{
		/*check for negative value*/

		if(ch == '-')
		{
			//*flag = 1;
			/* If first digit is -, let arr = 1 and start i from next */
			//arr = -1
			a[0] = '-';
			i++;
			ch = getchar();
		}



		if(isdigit(ch))
		{
			a[i] = ch;
		}

	}
	return 0;
}
