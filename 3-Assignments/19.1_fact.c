/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To print the Factorial of number
DATE       :
DESCRIPTION:


************************************************************************/
#include <stdio.h>


#define MAXVAl 200000000
#define MINVAL -200000000

int main()
{
     static int flag = 1, num, n, factorial = 1;

	if(flag)
	{   
		//Prompt the user the enter the number
		printf("Enter the number: ");
		scanf("%d", &num);

		/* Error Check for limit */
		if ((num < 0) || (num > MAXVAl))
		{
			printf("Error: num is Invalid Number. Retry\n");
			return 1;	
		}		
		flag = 1;
	}	

//if(num == 0)
	if(num == 0)
	{
		printf("Factorial: %d \n", factorial);
		return 1;
	}

	factorial = factorial * num--;

	/* check for initial valid number */
	if (num < 1)
	{
		printf("Factorial: %d \n", factorial);
		return 0;
	}
	
	else
	{
		main();
	}

}


