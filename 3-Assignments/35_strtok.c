/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :Implement strtok
DATE       :
DESCRIPTION:Implement strtok function


************************************************************************/
#include<stdio.h>
#include<string.h>

char * my_strtok(char *sep, char *str);
int main()
{
	char *token;
	char s1[30];
	char s2[10];
 
    //Prompt the user to enter the string
	printf("Enter the string1: ");
	fgets(s1, sizeof(s1), stdin);

    //Prompt the user to enter the 2 string
	printf("Enter the string2: ");
	fgets(s2, sizeof(s2), stdin);

	token =	my_strtok(s1, s2);

	while (token)
	{
		printf ("%s\n",token);
		token = my_strtok(NULL, s2);
		//    printf("%s", str1);

	}

}
	char * my_strtok(char * str, char * sep)
	{
		static int pos = 0;

		static char *s;
		int j , start;

		start = pos;

		/* Copy the string for further calls */
		if (str != NULL)
		{
			s = str;
		}

		/* till end of str */
		while (s[pos] != '\0')
		{

			/* check for sep match */
			for (j = 0; sep[j] != '\0'; j++)
			{
				/* get the pos for next str */
				if (s[pos] == sep[j])
				{
					/* replace with '\0' to break the str*/
					s[pos] = '\0';
					/* start with next str */
					pos = pos + 1;

					/* for next str */
					if (s[start] != '\0')
					{
						return (&s[start]);
					}
					else
					{
						/*check for next sep */
						start = pos;
						pos--;
						break;
					}
				}
			}
			pos++;
		}
	}
