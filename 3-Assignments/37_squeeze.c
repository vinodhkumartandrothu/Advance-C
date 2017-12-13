/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2
DATE       :
DESCRIPTION:squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2


************************************************************************/



#include<stdio.h>
#include<string.h>

void is_squeeze(char *s1, char *s2);
int main()
{
	char str1[10]; 
	char str2[10];
    
    //Prompt the user to enter the string1
	printf("Enter the String1: ");
	fgets(str1, 10, stdin);
    
    //Prompt the user to enter the string2
	printf("Enter the  String2: ");
	fgets(str2, 10, stdin);
    
    //Calling function
	is_squeeze(str1, str2);
	


}


void is_squeeze(char *s1, char *s2)
{
	int i, j ,k;


	for(i = 0; *(s1 + i) != '\0'; i++)
	{

		for(j = 0; *(s2 + j) != '\0'; j++)
		{
            //Checking if the character matches it will be shifted 
			if(*(s1 + i) == *(s2 + j))
			{

				for(k = i + 1; *(s1 + k)  != '\0'; k++)
				{
					*(s1 + (k - 1)) =  *(s1 + (k));
				}


			}
		}
	}
	//Displaying the string
	printf("%s\n",s1);

	
}

