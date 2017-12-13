/************************************************************************************************************************************************************
TITLE      :Bitwise Library Functions
AUTHOR     : T VINODH KUMAR
DATE       :17/10/2017
DESCRIPTION:To print bitwise Library functions
               1) get_nbits:

                           If num is 10 and n is 2,
                           10 -> 0 0 0 0 1 0 1 0
                           Take 2 bits from LSB end of 10 (1 0) and return the corresponding decimal of that.
                           So get_nbits(10, 2) function should return 2

               2) replace_nbits:

                           Read number num from user.
                           Read number n from user.
                           Read number val from user
                           Fetch n number of bits from LSB end of val and replace in the last n bits of num.
                           Return new value of num.

                           If num is 10 and n is 3 and val is 12
                           10 -> 0 0 0 0 1 0 1 0
                           —–
                           12 -> 0 0 0 0 1 1 0 0
                           —–
                           The function should return 12 (1 1 0 0)

               3)  get_nbits_from_pos

                           Read number num from user.
                           Read number n from user.
                           Read number pos from user.
                           Fetch n number of bits from given position ‘pos’ (starting from LSB) of num and return the decimal value of it.

                           If num is 12, n is 3 and pos is 4
                           7 6 5 4 3 2 1 0
                           —————–
                           12 -> 0 0 0 0 1 1 0 0
                           —————–
                           The function should return 3 (0 1 1).

               4)  replace_nbits_from_pos

                          Read number num from user.
                          Read number n from user.
                          Read number pos from user.
                          Read number val from user.
                          Fetch n number of bits from LSB of val.
                          Place those fetched bits from pos positionth bit of num and return new value of num.

                          If num is 12, n is 3, pos is 4 and val is 20
                          7 6 5 4 3 2 1 0
                          20 -> 0 0 0 1 0 1 0 0
                          —————–
                          10 -> 0 0 0 0 1 1 0 0
                          —————–
                          return value-> 0 0 0 1 0 0 0 0
                          So function should return 16 (1 0 0 0 0).

              5)  toggle_bits_from_pos

                          Read number num from user
                          Read number n from user
                          Read number pos from user
                          Invert the n number of bits from pos positionth bit of num.
                          Return the new value of num

                          If num is 10, n is 3, and pos is
                          7 6 5 4 3 2 1 0
                          ——————-
                          10 -> 0 0 0 0 1 0 1 0
                          ——————
	                      return value -> 0 0 1 1 0 0 1 0
                          So the function should return 50 (0 0 1 1 0 0 1 0)

 	           6)  print_bits

	                      Read number num from user.
	                      Read number n from user.
	                      Do error checking

	                   -> If n is greater than integer size, assign n value as sizeof integer.
	                    d.Print n number of bits of num from LSB end.
	                      If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
	                      The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0



*************************************************************************************************************************************************************/

#include <stdio.h>
#define VALID      1
#define INVALID   -1

//function prototype
int get_nbits(int num, int n);
int replace_nbits(int num, int n, int value);
int is_valid(int n);
int get_n_bits_from_pos(int num, int n, int pos);
int replace_nbits_from_pos(int num, int n, int pos, int value);
int toggle_bits_from_pos(int num, int n, int pos);
void print_bits(unsigned int num, int n);
int main()
{
	int choice, num, n, value, pos;
	unsigned int mask;
	char option;
	do
	{
		//PROMPT THE USER TO ENTER THE CHOICE FROM THE MENU
		printf("1.get_nbits\n");
		printf("2.replace_nbits\n");
		printf("3.get_nbits_from_pos\n");
		printf("4.replace_nbits_from_pos\n");
		printf("5.toggle_bits_from_pos\n");
		printf("6.print_bits\n");

		printf("Enter your choice from above options: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				//prompt the user to enter the number
				printf("Enter the number: ");
				scanf("%d", &num);

				
				//CODE FOR CONVERTING DECIMAL TO BINARY
				printf("THE BINARY FORM THE NUMBER [%d] ENTERED BY USER IS:  ", num);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					num & mask? putchar('1'): putchar('0');
				}
				putchar('\n');


				//prompt the user to enter the value
				printf("Enter the value f the bits you want to return: ");
				scanf("%d", &n);

				int res1 = get_nbits(num, n);
				printf("THE RESULT OF THE OPERATION WILL BE: %d\n", res1);
                
				//CODE FOR CONVERTING DECIMAL TO BINARY
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					res1 & mask? putchar('1'): putchar('0');
				}
				putchar('\n');


				break;
			case 2:
				//prompt the user to enter the number
				printf("Enter the number: ");
				scanf("%d", &num);

               
				//CODE FOR CONVERTING DECIMAL TO BINARY
				printf("THE BINARY FORM OF THE NUMBER [%d] ENTERED BY THE USER IS: ", num);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					num & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the value
				printf("Enter the value: ");
				scanf("%d", &value);

                
				//CODE FOR CONVERTING DECIMAL TO BINARY
				printf("THE BINARY FORM OF THE VALUE [%d] IS : ", value);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					value & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the bits to replace
				printf("Enter the number of bits u want to replace: ");
				scanf("%d", &n);

				//validating the number of bits to replace
				//calling function
				int status = is_valid(n);
				if (status == VALID)
				{
					int res2 = replace_nbits(num, n, value);
					printf("%d\n", res2);

                    
				//CODE FOR CONVERTING DECIMAL TO BINARY
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					res2 & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				}

				else
				{
					printf("INVALID_INPUT......\nTRY AGAIN......\n");
				}

break;
			case 3:
				//prompt the user to enter the number
				printf("Enter the number: ");
				scanf("%d", &num);

                
				//CODE FOR CONVERTING DECIMAL TO BINARY
				printf("THE BINARY OF THE NUMBER [%d] IS: ", num);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					num & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the position
				printf("Enter the position: ");
				scanf("%d", &pos);

				//prompt the user to enter the no of bits
				printf("Enter the no of bits: ");
				scanf("%d", &n);

				int res3 = get_n_bits_from_pos(num, n, pos);
				printf("%d\n", res3);

	   			//CODE FOR CONVERTING DECIMAL TO BINARY
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					res3 & mask? putchar('1'): putchar('0');
				}
				putchar('\n');
				break;

			case 4:

				//prompt the user to enter the number
				printf("Enter the number: ");
				scanf("%d", &num);
                
                
	   			//CODE FOR CONVERTING DECIMAL TO BINARY
	   			printf("THE BINARY FORM OF THE ENTERED NUMBER [%d] IS: ", num);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					num & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the position
				printf("Enter the position: ");
				scanf("%d", &pos);

				//prompt the user to enter the value
				printf("Enter the value: ");
				scanf("%d", &value);

                
	   			//CODE FOR CONVERTING DECIMAL TO BINARY
	   			printf("THE BINARY FORM OF THE ENTERED VALUE [%d] IS: ", value);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					value & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the no of bits
				printf("Enter the no of bits: ");
				scanf("%d", &n);

				int res4 = replace_nbits_from_pos(num, n, pos, value);
				printf("%d\n", res4);


				//CODE FOR CONVERTING DECIMAL TO BINARY
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					res4 & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				break;

			case 5:

				//prompt the user to enter the number
				printf("Enter the number: ");
				scanf("%d", &num);

                
	   			//CODE FOR CONVERTING DECIMAL TO BINARY
	   			printf("THE BINARY FORM OF THE ENTERED NUMBER [%d] IS : ",num);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					num & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the position
				printf("Enter the position: ");
				scanf("%d", &pos);

				//prompt the user to enter the no of bits
				printf("Enter the no of bits: ");
				scanf("%d", &n);

				int res5 = toggle_bits_from_pos(num, n, pos);
				printf("%d\n", res5);


				//CODE FOR CONVERTING DECIMAL TO BINARY
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					res5 & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				break;

			case 6:


				//prompt the user to enter the number
				printf("Enter the number: ");
				scanf("%d", &num);

                
	   			//CODE FOR CONVERTING DECIMAL TO BINARY
	   			printf("THE BINARY FORM OF THE ENTERED NUMBER [%d] IS : ",num);
				for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
				{
					num & mask? putchar('1'): putchar('0');
				}
				putchar('\n');

				//prompt the user to enter the no of bits
				printf("Enter the no of bits: ");
				scanf("%d", &n);

				print_bits(num, n);

				break;



		}


printf("DO YOU WANT TO CONTINUE? PRESS....[Y/y] OR IF YOU WANT TO EXIT PRESS....[N/n]\n");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//FUNCTION DEFINATION

// 1. for get_nbits
int get_nbits(int num, int n)
{
	int res1 = num & ((1 << n) - 1);
	return res1;
}


// 2. replace_nbits
int is_valid(int n)
{
	if (n >= 0 || n <= sizeof (int))
	{
		return VALID;
	}
	return INVALID;
}
int replace_nbits(int num, int n, int value)
{
	int ir1, ir2, res2;

	ir1 = value & ((1 << n) - 1);
	ir2 = num & (~0 << n);
	res2 = ir2 | ir1;
	return res2;

}


//3. for getnbits from position
int get_n_bits_from_pos(int num, int n, int pos)
{
	int ir1, ir2, res3;
/*
	ir1 = (num & (~(~0 << (pos + 1)))) >> (n - 1);
	ir2 = (~(~0 << n));
	res3 = ir1 & ir2;
	return res3;
	*/
	res3 = (( num & ((~( ~0 << n )) << pos - n + 1)) >> (pos - n + 1));
	return res3;
}

//4.replace nbits from position
int replace_nbits_from_pos(int num, int n, int pos, int value)
{
/*	int ir1, ir2, res4;
	ir1 = (value & ((1 << n) - 1)) << (n - 1);
	ir2 = num & ((~0 << n) << (n - 1));
	res4 = ir2 | ir1;
	return res4;
*/
return ((value & ((1 << n) - 1)) << pos - n + 1) | (num & ~((~(~0 << n)) << pos - n + 1));
}

// 5.toggle bits from position
int toggle_bits_from_pos(int num, int n, int pos)
{
	int res5;
	res5 = num ^ ((~(~0 << n)) << pos);
	return res5;
}

//6.for printbits
void print_bits(unsigned int num, int n)
{
	unsigned int mask;

	//CODE FOR CONVERTING DECIMAL TO BINARY
	for (mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
	{
		if (mask <= ((1 << n) - 1))
		{
			num & mask? putchar('1'): putchar('0');
		}
	}
	putchar('\n');
}
