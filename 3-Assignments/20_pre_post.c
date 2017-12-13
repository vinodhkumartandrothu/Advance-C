/************************************************************************************************************************************************************
TITLE:       FUNCTION TO IMPLEMENT PRE AND POST INCREMENT
AUTHOR:      T VINODH KUMAR
DATE:
DESCRIPTION: 1) Pass a number ‘N’ from command line.
             2) If no numbers are entered through command line, read from user.
             3) Read the type of increment from user like menu drive.
                a) post increment
                b) pre increment
             4) Call the corresponding functions
             5) Return values of the functions should exactly behave as ++num and num++ operations
             6) We should use ++ operator in this program.
             7) With the help of bitwise operator we increment the given value.
*************************************************************************************************************************************************************/

#include <stdio.h>

//function protype
int is_pre_increment (int *num);
int is_post_increment (int *num);
int main()
{
	char option;
	do
	{
		int num, choice, i;

		//prompt the user to enter the number
		printf("Enter the number: ");
		scanf("%d", &num);

		//display the menu card to the user
		printf("1.PRE-INCREMENT\n2.POST-INCREMENT\n");
		printf("Enter what you want to perform: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
			      //function calling for pre increment
                  i = is_pre_increment (&num);
                  printf("num: [%d] \n  i: [%d]\n", num, i);
			      break;

		    case 2:
		         //function calling for post increment
                  i =  is_post_increment (&num);
                  printf("num: [%d] \n  i: [%d]\n", num, i);
                  break;

		    default:
		           printf("THE OPTION ENETRED BY THE USER IS INVALID......\n.......PLEASE TRY AGAIN......\n");
		}


      printf("DO YOU WANT TO CONTINUE? PRESS....[Y/y] OR IF YOU WANT OT EXIT PRESS....[N/n]\n");
      scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//function definition for pre increment
int is_pre_increment (int *num)
{
	int pre;
	int m = 1;

	while (*num & m)
	{
		*num = *num ^ m;
		m <<= 1;
	}
//If the loop fails it will do xor operation
	*num = *num ^ m;
	pre = *num;

	return pre;



}

//function definition for post increment
int is_post_increment (int *num)
{
	int m = 1;
	int post = *num;

	while (*num & m)
	{
		*num = *num ^ m;
		m <<= 1;
	}
	
	*num = *num ^ m;

	return post;


}

