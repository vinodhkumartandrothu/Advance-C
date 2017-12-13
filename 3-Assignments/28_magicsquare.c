/***********************************************************************
Title       : To print the magic square
Author      : T VINODH KUMAR
Date        : 13/11/2017
Description : This program is for printing of the output magic square 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define ODD   1
#define EVEN  0

//prototype of the program
int even_or_odd( int num);
void magic_square(int **array, int size, int square);

// main function
int main()
{
	//declaration of the varibles
	int size, square, *p, index;
	char yes;
	do
	{

		// array declaration
		int **array;

		//prompt the user to red the size
		printf("Enter the size of the array\n");

		//read the the num
		scanf("%d", &size);
		square = size * size;

		//memory allocation
		for (index = 0; index < size; index++)
		{

			*(array + index) =  calloc(size, sizeof(int));
		}

		if (p == NULL)
		{
			printf("calloc fails\n");
			exit(1);
		}

		//call the function
		int status = even_or_odd(size);
		//checking given is odd ar even num
		
		if (ODD == status)
		{
			printf("given number is odd\n");
			magic_square(array, size, square);

		}
		else
		{
			printf("given num is even magic square is of odd numbers\n");
		}
		printf("Enter the Y|n for continue the program\n");
		scanf("\n%c", &yes);
	}while(yes == 'y' || yes == 'Y');
	return 0;
}

//define the function
int even_or_odd(int num)
{
	if (num % 2)
	{
		return ODD;
	}
	return EVEN;
}

//define the function 
void magic_square(int **array, int size, int square)
{
	//declaration of  the varibles
	int  index, index1;
	int i_iter, j_iter, iter;

	i_iter = 0;
	j_iter = size / 2;

	//loop for filling the squer of the given number
	for (iter = 1; iter <= square; ++iter)
	{
		(*(array + i_iter))[j_iter] = iter;
		i_iter--;
		j_iter++;
		//if the block is already filled with any num the we have to print the below of the precent number
		if (iter % size == 0)
		{
			i_iter = i_iter + 2;
			--j_iter;
		}
		//to fill the next number one step up and one step rigt
		else
		{
			if (j_iter == size)
			{
				j_iter = j_iter - size;
			}
			else if (i_iter < 0)
			{
				i_iter  = i_iter + size;
			}
		}
	}
	//printing the array elemts in the order		
	for (index = 0; index < size; index++)
	{
		for (index1 = 0; index1 < size; index1++)
		{

			printf("%d\t", (*(array + index))[index1]);
		}
		printf("\n");
	}
	printf("\n");

}





