/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :Print bits float to binary
DATE       :07/11/2017
DESCRIPTION:Print bits float to binary


 ************************************************************************/
#include<stdio.h>

void print_bits_void_ptr1(void *q, size_t n);

void print_bits1(int *q, size_t n);

void print_bits_void_ptr(void *p, size_t n);

void print_bits(int *p, size_t n);

void print_bits_1(int num, size_t n);
void print_bits_2(int num, size_t n);

int main()
{
    char rep;
    unsigned int mask;
    int choice;
    float f;
    double d;
    printf("Enter the choice\n 1.float\n 2. double\n");
    scanf("%d", &choice);

    switch(choice)
	{
	case 1:
	    
    	//Prompt the user to enter the number
		printf("Enter the float number:");
		scanf("%f", &f);

		int *p =(int *)&f;

		//Calling functions
        print_bits(p , sizeof(float) * 8);
     	print_bits_void_ptr((&f + 1), sizeof(float));
        break;
        
	case 2:
	    
		printf("Enter the double number:");
		scanf("%lf", &d);

		int *q =(int *)&d;

		//Calling functions
        print_bits(p , sizeof(double) * 8);
     	print_bits_void_ptr((&f + 1), sizeof(double));
     	break;

} 
}

void print_bits(int *p, size_t n)
{
	    unsigned  mask;
		//Logic to convert decimal to binary
		for(mask = 1 << ((sizeof(int) << 3) - 1); mask; mask >>= 1)
		{
			*p & mask? putchar('1'): putchar('0');
		}
		putchar('\n');

}	


//for float
void print_bits_void_ptr(void *p, size_t n)
{
	p = p - 1;
	int i;
	for(i = 0; i < n; i++)
	{
		print_bits_1(*(char *)p, 1);
		p = p - 1;
	}
}

void print_bits_1(int num, size_t n)
{
	    unsigned  mask;
		//Logic to convert float to binary
		for(mask = 1 << 7; mask; mask >>= 1)
		{
			num & mask? putchar('1'): putchar('0');
		}
		
}


//for double
void print_bits_void_ptr1(void *q, size_t n)
{
	q = q - 1;
	int i;
	for(i = 0; i < n; i++)
	{
		print_bits_2(*(char *)q, 1);
		q = q - 1;
	}
}

void print_bits_2(int num, size_t n)
{
	    unsigned  mask;
		//Logic to convert float to binary
		for(mask = 1 << 7; mask; mask >>= 1)
		{
			num & mask? putchar('1'): putchar('0');
		}
}

