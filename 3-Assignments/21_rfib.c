/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :recursive_fibonacci
DATE       :24/10/2017
DESCRIPTION:To print the fibonacci series for poistive and negative numbers


************************************************************************/
#include<stdio.h>

int main()
{

	int n , i = 0;

	//PROMPT THE USER TO ENTER THE NUMBER
	printf("enter the number:");
	scanf("%d", &n);

	if ( n > 0 )
	{
		while ( i <= n )
		{     
			//FUNCTION CALLING FOR POSITIVE NUMBERS
			int fibonacci = fib(i);

			if ( fibonacci <= n )
			{
				printf("  %d", fibonacci);
			}
			i++;
		}
		printf("\n");

	}

	else
	{
		while( i >= n ) 
		{     
			//FUNCTION CALLING FOR NEGETIVE

			int nfibonacci = nfib(i);
			if( nfibonacci >= n && nfibonacci <= -(n) )
			{
				printf("  %d", nfibonacci);
			}
			i--;
		}
		printf("\n");
	}
}

//CALLED FUNCTION FOR POSITIVE FIBONACCI SERIES
int fib(int n)
{

	if ( n == 0 )
	{
		return 0;

	}
	else if ( n == 1 )
	{
		return 1;
	}

	return fib ( n - 1 ) + fib ( n - 2 );


}

//CALLED FUNCTION FOR NEGATIVE FIBONACCI SERIES
int nfib(int n)
{

	if ( n == 0 )
	{
		return 0;

	}
	else if ( n == -1 )
	{
		return 1;
	}

	return nfib ( n + 2 ) - nfib ( n + 1 );


}
