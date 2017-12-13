/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To print the bits of signed and unsigned types	
DATE       :17/10/2017
DESCRIPTION:To Print the bits of signed and unsigned types


************************************************************************/
#include<stdio.h>

int main()
{
	//Declare the variables here
	int num;
	unsigned int mask;

	//prompt the user to enter the number
	printf("enter the number: ");

	//read the number
	scanf("%d", &num);

	//Logic to convert decimal to binary
	for(mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
	{
		num & mask? putchar('1'): putchar('0');
	}
	putchar('\n');
	return 0;
}

