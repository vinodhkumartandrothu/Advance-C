
/***********************************************************************
TITLE      :To Print the value of replaced bits
AUTHOR     :T.VINODH KUMAR
DATE       :16/10/2017
DESCRIPTION:Print the value of replaced bits from the given number and value


 ************************************************************************/


#include<stdio.h>

int main()
{
	int ir1,ir2,res,num,value,pos1,pos2;

	//prompt the user to enter the number
	printf("Enter the number:");
	scanf("%d", &num);

	//Prompt the user to enter the value
	printf("Enter the value:");
	scanf("%d", &value);

	//prompt the user to enter the position1
	printf("Enter the pos1:");
	scanf("%d", &pos1);

	//Validate for position 1
	if( pos1 >= 0 && pos1 <= 31 )
	{

		//prompt the user to enter the pos2
		printf("Enter the pos2:");
		scanf("%d", &pos2);


		//Validate for position 2
		if(pos2 >= 0 && pos2 <= 31)
		{
			ir1 = num & (~(~(~0 << pos2 - pos1 + 1) << pos1));
			ir2 = value & (~(~0 << pos2 -pos1 + 1));
			res = ir1 | (ir2 << pos1);
			printf("result: %d\n", res);

		}
		else
		{
			printf("Invalid input");
		}

	}
	return 0;
}
