/**********************************************************************
Title      : To print the ascending or descending order of the array
Author     : T VINODH KUMAR
Date       : 16/11/2017
DESCRIPTION: This program is for printing the ascending or descending order of the array elemnts 
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>

//prototype of the funtion
void memory_allocation(float **array, int n, int *size);
void populate(float **array, int n, int *size);
void  print_array(float **array, int n,int *size);
void find_D_value(float **array, int n, int *size, float result);
void find_Dsq_value(float **array, int n, int *size, float result);
float avrage(float **array, int n, int *size);
float variance(float **array, int n, int *size);

//main function
int main()
{

	//declaration of the array
	system("clear\n");
	float *p[3];
	int size[3];

	//call the function 
	memory_allocation(p, sizeof(size) / sizeof(int), size);
	populate(p, sizeof(size) / sizeof(int), size);
	float result = avrage(p, sizeof(size) / sizeof(int), size);

	//printg the varage of the array elements
	printf("avrage of the array numbers%g\n",result);
	find_D_value(p, sizeof(size) / sizeof(int), size, result);
	find_Dsq_value(p, sizeof(size) / sizeof(int), size, result);
	float var = variance(p, sizeof(size) / sizeof(int), size); 
	print_array(p, sizeof(size) / sizeof(int), size);

	//after swaping prining the all elements
	printf("average of the array numbers %g\n", var);
}

//defining the function 
void memory_allocation(float **array, int n, int *size)
{
	//varibl diclaration
	int index;

	//propmt the user to enter the each array size
	for (index = 0; index < n; index++)
	{
		printf("Enter 'n' value for %d array\n", index);
		scanf("%d", size + index);
		*(array + index) = malloc ((*(size + index) + index) * sizeof(int));
	}
}


//defining the funtion
void populate(float **array, int n, int *size)
{
	//local varibles dicaration
	int i_index, j_index;

	//reading the each array elemts
	i_index = 0;
	printf("Enter the %d intems \n", *(size+ i_index));

	for (j_index = 0; j_index < *(size + i_index); j_index++)
	{
		scanf("%f", *(array + i_index) + j_index);
	}
}

//defining the funtion
void print_array(float **array, int n, int *size)
{
	//local varibles dicaration
	int i_index, j_index;

	//print the array elemts with average values
	for (i_index = 0; i_index < n; i_index++)
	{
		printf("Enter the %d intems \n", *(size + i_index));

		for (j_index = 0; j_index < *(size + i_index ); j_index++)
		{
			printf("%g\t", *(*(array + i_index) + j_index));
		}
		printf("\n");
	}
}

//defining the function
float avrage(float **array, int n, int *size)
{
	int i_index, j_index;
	float sum, avr;
	//reading the each array elemts
	i_index = 0;
	printf("Enter the %d intems \n", *(size+ i_index));

	//finding the avrage of the elements
	for (j_index = 0; j_index < *(size + i_index); j_index++)
	{
		sum = sum + *(*(array + i_index) + j_index);
	}
	avr = sum / *(size + i_index);
	return avr;

}


//defining of the function
void find_D_value(float **array, int n, int *size, float result)
{
	//declaration of the varible
	int i_index, j_index, iter, d;
	i_index = 1; iter = 0;
	//to find the Dvalue	
	for (j_index = 0; j_index < *(size + i_index); j_index++)
	{
		*(*(array + i_index) + j_index) = (*(*(array + iter) + j_index) - result);
	}
}


//defining of the function
void find_Dsq_value(float **array, int n, int *size, float result)
{

	//declaration of the varible
	int i_index, j_index, iter;
	i_index = 1;
	iter = 2;
	//to find the D squear value	
	for (j_index = 0; j_index < *(size + i_index); j_index++)
	{
		*(*(array + iter) + j_index) = *(*(array + i_index) + j_index) * *(*(array + i_index) + j_index); 
	}
}

//defining the function
float variance(float **array, int n, int *size)
{

	//declaration of the varible
	int i_index, j_index, sum = 0, avr;
	i_index= 2;
	//to find the variance 
	for (j_index = 0; j_index < *(size + i_index); j_index++)
	{
		sum = sum + *(*(array + i_index) + j_index); 
	}
	avr = sum / *(size + i_index);
	return avr;

}
