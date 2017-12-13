/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To Print all the prime numbers by marking the multiples of prime numbers
DATE       :12/10/2017
DESCRIPTION:To Print all the prime numbers by marking the multiples of prime numbers as 0


************************************************************************/


#include<stdio.h>

int main()
{
	int  n, i, j;
    //Prompt the user to enter the number
	printf("Enter n value: ");
	scanf("%d", &n);
    int prime[n];

	//Loading the array with numbers from 1 to n
	for( i =1; i <= n; i++)
	{
		prime[i] = i;
	}

	//Start with least prime number, which is 2.
	//No need to check for numbers greater than square root of n.
	//They will be already marked.
	for( i = 2; i*i <= n; i++)
	{
		if(prime[i] != 0)
		{
			//Mark all the multiples of i as 0.
			for( j = 2*i; j <=n ; j += i)
				prime[j] = 0;
		}
	}

	//Displays the prime numbers
	printf("Prime numbers are: \n");


	for( i=2; i <= n; i++)
	{
		if(prime[i] != 0)
		{
			printf("%d\n ", i);
		}
	}
}
