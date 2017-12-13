/*************************
Title       : to find the matching string in string one from string two
Author      : T VINODH KUMAR
Date        : 16/11/17
Descriptioin: to find the matching string in string one from string two.
*************************/

#include <stdio.h>
#include <string.h>

//declare the function prototype
char *my_strstr(char *str1, char *str2, int len2);

int main()
{
	//declare the variables
	char str1[20], str2[20]; 
	int len2;

	//prompt the user to enter the string
	__fpurge(stdin);
	printf("enter the first string\n");
	scanf("%[^\n]s", str1);

	__fpurge(stdin);
	printf("enter the second string\n");
	scanf("%[^\n]s", str2);
	
	//find th length of second string
	len2 = strlen(str2);
	
	//call the respective functioins
	char *p = my_strstr(str1, str2, len2);
	printf("%s\n", p);
}

//define the function 
char *my_strstr(char *str1, char *str2, int len2)
{
	//define the variables
	int count = 0;
	char *str3 = str1, *ptr = str1, *ptr1 = str2; 
	
	while (*ptr)
	{
		//if characters of two strings are equals enter the loop
		if (*ptr == *ptr1)
		{
			//move the base address into string3
			str3 = ptr;

			while (*ptr1)
			{
				//check for equal characters
				if (*ptr == *ptr1)
				{
					count++;
					ptr1++;
					ptr++;
				}

				else
				{
					count = 0;
					ptr--;
					break;
				}		
			}
			if (count == len2)
			{
				//if count and len2 are equal then return address 
				return str3;
			}
		}
		ptr++;
	}
}
