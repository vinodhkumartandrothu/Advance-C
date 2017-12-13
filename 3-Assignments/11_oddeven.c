/***********************************************************************
TITLE      :Print even or odd
AUTHOR     :T.VINODH KUMAR
DATE       :12/10/17
DESCRIPTION:to find out whether the given number is even or odd


************************************************************************/
#include<stdio.h>

int main()
{
	unsigned int num;
	char rep;

	do
	{

		//prompt the user to enter a number
		printf("enter the number:");
		scanf("%d", &num);

		//Left shift operation to shift lsb to msb position
		num = num << ((sizeof(int)*8)-1);

		//right shift operation to shift msb to lsb position
		num = num >> ((sizeof(int)*8)-1);

		if(num == 0)
		{
			printf("the number is even\n");
		}
		else
		{
			printf("the number is odd\n");
		}

		printf("do you want to continue press [Yy | Nn]: ");
		scanf("\n%c", &rep);


	}while (rep == 'Y' || rep == 'y');
	return 0;
}

