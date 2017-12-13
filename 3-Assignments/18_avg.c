/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To print the average of numbers
DATE       :
DESCRIPTION:To print the average of numbers using functions


************************************************************************/
#include<stdio.h>

void populate(int a[], size_t n);
float average(int a[], size_t n);
void print(int a[], size_t , float avg);

int main()
{
	int a[5];
	size_t n = sizeof(a) / sizeof(int);
	populate(a, n);
	float avg = average(a, n);
	print(a, n, avg);
}

//Populating the elements
void populate(int a[], size_t n)
{
	int i;

	//Prompt the user to enter the elements
	printf("Enter the %d  elements of array\n");

	for(i =0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

//Calculating the average
float average(int a[], size_t n)
{
	int avg = 0, i;

	for(i = 0; i < n; i++)
	{
		avg += a[i];
	}
    return (float)(avg / n);
}

// Print the average of numbers
void print(int a[], size_t n, float avg)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d]: %d\n", i, a[i]);
	}
		printf("The average is %f: \n", avg);
}

