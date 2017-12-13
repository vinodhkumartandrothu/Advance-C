/***********************************************************************
TITLE      :Print the median by sorting the numbers in ascending order
AUTHOR     :T.VINODH KUMAR
DATE       :12/10/2017
DESCRIPTION:To print the average of median by sorting the numbers in ascendinf order


 ************************************************************************/
#include<stdio.h>
#define MAX_SIZE 100

int main()
{
	int  array[MAX_SIZE], array2[MAX_SIZE];
	int size, size1, n;
	int i, j, temp;
	float median, median1, med;
	char rep;

	do
	{
		/* Input size of array */
		printf("Enter size of array    : ");
		scanf("%d", &size);


		/* Input elements in array */
		printf("Enter elements in array: ");
		for(i = 0; i < size; i++)
		{
			scanf("%d", &array[i]);
		}

		

		for(i = 0; i < size; i++)
		{
			/* 
			 * Place the currently selected element array[i]
			 * to its correct place.
			 */
			for(j = i + 1; j < size; j++)
			{
				/* 
				 * Swap if currently selected array element
				 * is not at its correct position.
				 */
				if(array[i] > array[j])
				{
					temp     = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}

		/* Print the sorted array */
		printf("\nElements of array in sorted ascending order:\n ");

		for(i = 0; i < size; i++)
		{
			printf("%d\t", array[i]);
		}	

		//To print the median values for array
		if(size % 2 == 0)
		{
			median = (array[size / 2] + array[(size / 2) - 1]) / 2.0;
		}
		else
		{
			median = array[(size - 1) / 2];
		}

		printf("\n Median = %f\n " , median);



		//Input size of array2
		printf("\nEnter the size of array2: ");
    	scanf("%d", &size1);

		/* Input elements in array2 */
		printf("\tEnter elements in array2: ");
    	for(i = 0; i < size1; i++)
		{
			scanf("%d", &array2[i]);
		}


		//Sorted Elements for array2
		for(i = 0; i < size1; i++)
		{
			/* 
			 * Place the currently selected element array[i]
			 * to its correct place.
			 */
			for(j = i + 1; j < size1; j++)
			{
				/* 
				 * Swap if currently selected array element
				 * is not at its correct position.
				 */
				if(array2[i] > array2[j])
				{
					temp     = array2[i];
					array2[i] = array2[j];
					array2[j] = temp;
				}
			}
		}


		/* Print the sorted array2 */
		printf("\nElements of array2 in sorted ascending order:\n ");

		for(i = 0; i < size1; i++)
		{
			printf("%d\t", array2[i]);
		}



		//To print the median values for array1
		if(size1 % 2 == 0)
		{
			median1 = (array2[size1 / 2] + array2[(size1 / 2) - 1]) / 2.0;
		}
		else
		{
			median1 = array2[(size1 - 1) / 2];
		}

		printf("\nThe array2 median1 = %f\n", median1);

		//Averages of the median for 2 arrays
		med =(median + median1) / 2;

		printf("The average of the median is :%f\n", med);

        //Logic to continue the process
		printf("Do you want to continue press [Yy | Nn]: ");
		scanf("\n%c", &rep);

	}while(rep == 'Y' || rep == 'y');

	return 0;
}
