/***********************************************************************
TITLE      :To print the Fibonacci Series for thr given range
AUTHOR     :T.VINODH KUMAR
DATE       :
DESCRIPTION:To print the fibonacci series upto a given range including positive and negative numbers

 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, fib, range;

	//prompt the user to enter the range
	printf("enter the range\n");
	scanf("%d", &range);


	if(range == 0 && range >= 15)
	{
		printf(" No numbers in the given range\n ");
	}


	else if (range > 0)
	{
		a=1,b=0;
		while (b <= range)
		{

			//It Display the positive Fibonacci series
			printf(" %d ", b);
			fib = a+b;
			a = b;
			b = fib;
		}
	}
	else if (range < 0)
	{
		a = -1,b = 0;
		while(b >= range && b <= -(range))
		{

			//It Displays the Negative fibonacci series
			printf(" %d  ", b);
			fib = a-b;

			a = b;
			b = fib;
		}
	}    
	else
	{
		printf(" The given numbers are out of range\n ");
	}
	return 0;
}






