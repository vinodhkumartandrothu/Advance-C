/************************************************************************************************
Title      :To pritn sorted the array without changing the array
Author     :Kishore kumar.A
Date       :3/11/2017
Description:This program is used to sort the array without changing the array
************************************************************************************************/

#include<stdio.h>

void populate(float *array, int size);
void print(float *arrray, int size);
void sort(float *array, int size);

int main()
{
	int size;
	char choice;
	do
	{

		//prompt the user to enter the aray  size
		printf("Enter the size of the array\n");
		scanf( "%d" ,&size);

		//declare the float array
		float array[size];
	
		//calling the populate function
		populate(array ,size);

		//calling the sorting function
		sort(array ,size);

		//calling the printing function
		print(array ,size);
	
		//prompt the user whether need to continue
		printf("do you want to continue(y/n)\n");
		scanf("\n%c", &choice);
	}while (choice == 'y');
	return 0;
}

void populate(float *array, int size)
{
	//definition of populate function

	int i;
	printf("enter the array elements\n");

	for(i = 0; i < size; i++)
	{
		scanf("%f", (array + i));
	}
}

void print(float *array, int size)
{
	//prinitng the given array
	int i;
	printf("the array elements  are\n");

	for(i = 0; i < size; i++)
	{
		printf("%f \t", *array++);
	}
	printf("\n");
}
	
void sort(float *array, int size)
{
	int i, j, c = 0;
	float min, next ,max;
	//initializing min and max as the first element
	max = *array;
	min = *array;
	printf("the sorted array is:");

	//finding the min and max values
	for (i = 1; i < size; i++)
	{
		if (max < *(array + i))
		{
			max = *(array + i);
		}
		if (min  > *(array + i))
		{
			min = *(array + i);
		}
	}
	//printing the first minimum value
	printf(" %f   ", min);

	for (i = 1; i < size; i++)
	{
		c = 0;
		next = max;
		for(j = 0; j < size; j++)
		{
			if( *(array + j) == min )
			{
				c++;
			}
		}

	//this count is for printing if the same value repeated
	if ( c > 1)
		{
			
			for( j = 2; j <= c; j++)
			{
				printf("%f   ", min);
				i++;
			}
				
		}
		//if break is not given the value will again print one more time
		if (min == max)
		{
			break;
		}

		//actual finding of sorted array
		for(j = 0; j < size; j++)
		{
			if((*(array + j) > min ) && (*(array + j) < next))
				{
					next = *(array + j);
				}
		}
		
		//printing the next value
		printf("%f   ",next);
		min = next;

	}
	printf("\n");
}

