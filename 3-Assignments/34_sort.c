/*****************************
Author :T VINODH KUMAR
Date   :19/11/2017
Description: This program is for printhing the given names in order by using the sorting
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototype of the function
char comparing_stings(char *str[100], int num);
int main()
{
	system("clear");
	char *str[100], yes;
	char *temp;
	int num, index , j ,len;
	do
	{
		//enter the name		
		printf("enter the num of names to enter\n");
		scanf("%d", &num);

		//allocate the dynamic memory for num
		*str = (char *) malloc(num * sizeof(char *));

		for (index = 0; index < num; index++)
		{
			//allocate the memory for names			
			str[index] = (char *) malloc(100 * sizeof(char *));
		}

		//prompthe user to enter the string
		printf("Enter the name\n");
		getchar();

		//read the string
		for (index = 0; index < num; index++)
		{
			fgets(str[index], 100, stdin);
		}

		//call the function
		comparing_stings(str, num);

		//after sorting the namers 
		printf("after the sorting: \n");
		for (index = 0; index < num; index++)
		{
			printf("%s",str[index]);
		}
		printf("Want to continue press y|y\n");
		scanf("%c",&yes);
	}while(yes == 'y' || yes == 'Y');
	return 0;
}

//defining the function
char comparing_stings(char *str[100], int num)
{
	//declaration of the varibles
	int index, j;
	char *temp;

	//taking the arrary of the numbers one by one
	for (index = 0; index < num; index++)
	{
		for (j = index + 1; j < num; j++)
		{
			//soring the names according to the lenth	
			if (strlen(*(str + index)) > strlen(*(str + j)))
			{
				strcpy(temp, *(str + index));
				strcpy(*(str + index), *(str + j));
				strcpy(*(str + j), temp);
			}

		}
	}


}


