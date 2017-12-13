/***********************************************************************
TITLE      :To print the perfect upto given range
AUTHOR     :T.VINODH KUMAR
DATE       :05/10/2017
DESCRIPTION:print the perfect number upto a given value if it is a more than that value it should display invalid number


 ************************************************************************/
#include<stdio.h>

int main()
{
	int num, sum=0, i;

	//Prompt the user to enter the number
	printf("Enter the number:");
	scanf("%d", &num);

	//user has to enter the value upto a give range
	if(num > 0 && num < 8129)
	{
		for( i = 1; i <= (num/2); i++)
		{
			if(num%i == 0)
			{

				sum=sum+i;
			}
		}

		if(sum == num)
		{
			printf("The number is perfect number\n");
		}
		else
		{
			printf("The number is not a perfect number\n");
		}
    
	}		

	else
	{
		printf("Invalid number\n");
	}
	return 0;

}



