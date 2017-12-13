/************************************************************************************************************************************************************
TITLE:      Read a string and print it in reverse without storing in an array using recursive method OR non-recursive method
AUTHOR:     T VINODH KUMAR
DATE:
DESCRIPTION:Read a string from user.
            Without modifying that string, print it in reverse order.
            Implement in both recursive and non-recursive methods.
*************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>

void reverse_recurssive(const char *s);
void reverse_non_recurssive(const char *s);
int main()
{
	char option;
	int choice;

	//declare the string
	char string[30];
	do
	{
		//prompt the user to eneter the string
		printf("Enter the string: ");
		fgets(string, 30, stdin);

		//prompt the user with menu page to choose one of the option
		printf("1.NON-RECURSSIVE METHOD\n2.RECURSSIVE METHOD\n");
		printf("Choose one from the above to perform: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
			       reverse_non_recurssive (string);

			      break;

		    case 2:
                   reverse_recurssive (string);
		          break;
		}


      printf("DO YOU WANT TO CONTINUE? PRESS....[Y/y] OR IF YOU WANT OT EXIT PRESS....[N/n]\n");
      scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

void reverse_non_recurssive(const char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 2; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	putchar('\n');
}

void reverse_recurssive(const char *s)
{
	if (*s)
	{
		if (*s != '\n')
		{
			reverse_recurssive(s + 1);
			printf("%c", *s);
		}
	}
}
