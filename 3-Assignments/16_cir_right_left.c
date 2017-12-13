/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :Implement Circular Right Shift and Circular Left Shift
DATE       :17/10/2017
DESCRIPTION:To Implement Circular right shift and Circular Left shift Operation 


 ************************************************************************/
#include<stdio.h>


void is_circular_right_shift(unsigned int num, unsigned int n);
void is_circular_left_shift(unsigned int num, unsigned int n);

int main()
{
	unsigned int num;
	unsigned int mask;
	unsigned int n;
	int ch;
	char rep;
	do
	{
		//Prompt the user to enter the number
		printf("Enter the number: \n");

		//Read the number
		scanf("%d", &num);

		//Logic to convert decimal to binary
		for(mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
		{
			num & mask? putchar('1'): putchar('0');
		}

		putchar('\n');


		//Prompt the user to enter the value of n
		printf("Enter the value of n:");

		//Read the number n
		scanf("%d", &n);

		//Prompt the user to enter the choice
		printf("Please select your choice: \n1.Circular right shift  \n2.Circular left shift\n");

		scanf("%d", &ch);

		if(ch == 1)
		{
			is_circular_right_shift(num, n);
		}
		else
		{
			is_circular_left_shift(num, n);
		}

		//Logic to whether to continue or not
		printf("Do youy want to continue press [Yy | Nn]: ");
		scanf("\n%c", &rep);

	}while(rep == 'Y' || rep == 'y');

	return 0;
}

void is_circular_right_shift(unsigned int num, unsigned int n)
{
	unsigned int mask;
	char rep;

	//Circular Right shift
	printf("After circular Right Shift: ");
	num = (num >> n) | (num << (sizeof(int) << 3) - n);


	//Logic to convert decimal to binary
	for(mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
	{
		num & mask? putchar('1'): putchar('0');

	}
	putchar('\n');
}

//Logic for Circular Left shift
void is_circular_left_shift(unsigned int num, unsigned int n)
{
	unsigned int mask;

	//Circular Left Shift

	printf("After Circular left shift: ");
	num = (num << n) | (num >> (sizeof(int) << 1) - n);


	//Logic to convert decimal to binary
	for(mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
	{
		num & mask? putchar('1'): putchar('0');
	}
	putchar('\n');
}
