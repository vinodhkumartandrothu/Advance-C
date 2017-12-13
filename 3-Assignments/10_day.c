/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To find which day of the year
DATE       :12/10/2017
DESCRIPTION:To find which day of the year


 ************************************************************************/
#include <stdio.h>

int main()
{

	int num, num2, temp, temp1;

	//Prompt the user to enter the first day
	printf("Enter first day:");
	scanf("%d", &num);
	temp = num;

	do
	{

		/* Print the day accordingly */
		switch (temp)
		{    
			case 1: 
				printf("Sunday\n");
				break;

			case 2: 
				printf("Monday\n");
				break;
			case 3: 
				printf("Tuesday\n");
				break;
			case 4: 
				printf("Wednesday\n");
				break;
			case 5: 
				printf("Thursday\n");
				break;
			case 6:  
				printf("Friday\n");
				break;
			case 7: 
				printf("Saturday\n");
				break;
			default: printf("Invalid Option \n");
					 break;
		}

		//Prompt the user to enter the which day he wants
		printf("Enter which day you want: ");

		scanf("%d", &num2);

		temp1 = num2 % 7;

		temp = num + (temp1 - 1);

		if(temp > 7)
		{
			temp = temp - 7;
		}
		else
		{
			temp;
		}
	}while(num2 <= 365);

	return 0;
}	
