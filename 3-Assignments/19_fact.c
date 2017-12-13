/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To find Factorial for given number using recursive method
DATE       :
DESCRIPTION:To find factorial for given number using recursive method without using any other function than main function

************************************************************************/
#include<stdio.h>

int factorial(int n);

int main()
{
	int n;

    //Prompt the user to enter the number
	printf("Enter the number n: \n");
	scanf("%d", &n);

    //Validating the number n
	if(n <= 0)
	{

		printf("You entered invalid number\n");
		return 1;
	}


	int res = factorial(n);
	printf("The factorial is %d is %d\n", n ,res);
}

int factorial(int n)
{
	if(n == 0 | n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
