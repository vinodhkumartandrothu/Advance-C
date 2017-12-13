/***********************************************************************
TITLE       :To Check whether the given number is odd or even within a given range (including positive and negative numbers)
AUTHOR      :T.VINODH KUMAR
DATE        :28/09/2017
DESCRIPTION :To Print whteher the number is even or odd within a given range from(100-999).To print the number whether it is positive even or positive odd or negative even or negative odd.If it is given the below range it should print Invalid number.

 ************************************************************************/


/*
   Code to check whether the given number is odd or even for a given range
 */


#include<stdio.h>

int main()
{

	//Declare the number
	int num, count;

	//Prompt the user to enter the number
	printf(" Enter the number: ");

	//Read the number
	scanf("%d", &num);


	if ((num >= 100 && num <= 1000) || (num <= -100 && num >= -1000))
	{


		if (num > 0 && num % 2 != 0)
		{	
			printf(" number is positive odd\n ");
		}
		else if (num > 0 && num % 2 == 0)
		{
			printf("%d: The number is positive even\n", num);
		}

		else if((num < 0 && num % 2 != 0))

		{	
			printf("%d: The number is negative odd\n", num);
		}

		else
		{
			printf(" %d: The number is negative even\n", num);
		}
	}

	else
	{
		printf(" %d: The number is invalid\n", num);
	}
	return 0;

}




