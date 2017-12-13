/***********************************************************************
TITLE      :To print the sizes of data types 
AUTHOR     :T.VINODH KUMAR
DATE       :04/10/2017
DESCRIPTION:print the datatype sizes of int,char,float,double,long double


 ************************************************************************/
#include<stdio.h>

int main()
{

	//Displays the size of char
	printf("\n\n[size-of char]\n");
	printf("sizeof(char): %zu\n",sizeof(char));
	printf("sizeof(signed char):%zu\n",sizeof(signed char));
	printf("sizeof(unsigned char):%zu\n\n\n",sizeof(unsigned char));

	//Displays the size of int
	printf("\n\n[size-of int]\n");
	printf("sizeof(int): %zu\n",sizeof(int));
	printf("sizeof(signed int):%zu\n",sizeof(signed int));
	printf("sizeof(unsigned int):%zu\n\n\n",sizeof(unsigned int));

	//Displays the size of double
	printf("\n\n[size-of double]\n");
	printf("sizeof(double): %zu\n\n\n",sizeof(double));

	//Displays the size of long double 
	printf("\n\n[size-of long double]\n");
	printf("sizeof( long double): %zu\n\n\n",sizeof(long double));


	//Displays the size of float
	printf("\n\n[size-of float]\n");
	printf("sizeof(float): %zu\n\n\n",sizeof(float));

	//Displays the size of long int
	printf("\n\n[size-of long int]\n");
	printf("sizeof(long int): %zu\n",sizeof(long int));
	printf("sizeof(signed long int):%zu\n",sizeof(signed long int));
	printf("sizeof(unsigned long int):%zu\n\n\n",sizeof(unsigned long int));

	//Displays the size of short int
	printf("\n\n[size-of short int]\n");
	printf("sizeof(short int): %zu\n",sizeof(short int));
	printf("sizeof(signed short int): %zu\n",sizeof(signed short int));
	printf("sizeof(unsigned short int):%zu\n\n\n",sizeof(unsigned short int));

	//Displays the size of long long int
	printf("\n\n[size-of long long int]\n");
	printf("sizeof(long long int): %zu\n",sizeof(long long int));
	printf("sizeof(signed long long int):%zu\n",sizeof(signed long long int));
	printf("sizeof(unsigned long long int):%zu\n\n\n",sizeof(unsigned long long int));


}

