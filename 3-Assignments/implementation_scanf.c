/***********************
Title        : to implement the printf functioin using variadic functions
Author       : T VINODH KUMAR
Date         : 13/14/17
Description  : implement the printf function using variadic functions
***********************/

#include <stdio.h>
#include <stdarg.h>

//declare the function prototype 
void xprintf(const char *format, ...);
void xscanf(const char *format, ...);

int main()
{
	char ch; 
	int i; 
	float f;
	double l;
	short int h;
	char w;

	//call the respective functions for characters
	xprintf("enter the value of character\n");
	xscanf("%c", &ch);
	xprintf("value of chacter is : %d\n", ch);
	
	__fpurge(stdin);
	//call the respective functions for integers
	xprintf("enter the integer value\n");
	xscanf("%d", &i);
	xprintf("value of integer is : %d\n", i);
	
	__fpurge(stdin);
	//call the respective functions for float
	xprintf("enter the float value\n");
	xscanf("%f", &f);
	xprintf("value of float is : %f\n", f);
	
	__fpurge(stdin);

	//call the respective functions for double
	xprintf("enter the double value\n");
	xscanf("%lf", &l);
	xprintf("value of double is : %lf\n", l);
	putchar('\n');
#if 0
	xprintf("Enter the string\n");
	xscanf("%s", &w);
	xprintf("The string is :%s\n", w );
#endif
}

//define the function
void xprintf(const char *format, ...)
{
	//declare the variables
	char ch; 
	int i; 
	double f, d ;
	long double l;
	char buffer[30] = {'\0'};
	const char *p = format;
    char w;    


	//declare the type of pointer
	va_list ap;

	//initialise the pointer
	va_start(ap, format);

	while (*p)
	{
		//check for the format specifier
		if (*p == '%')
		{
			switch (*++p)
			{
				//check for characters
				case 'c' : 
						 ch = (char)va_arg(ap, int);
						 putchar(ch);
						 break;

				//check for integers
				case 'd' : 
						 i = va_arg(ap, int);
						 sprintf(buffer, "%d", i);
						 fputs(buffer, stdout);
						 break;

				//check for float
				case 'f':	
						 f = (float)va_arg(ap, double);
						 sprintf(buffer, "%f", f);
						 fputs(buffer, stdout);
						 break;
#if 0
                case 's':
                        w = (char)va_arg(ap, int);
                        sprintf(buffer, "%s", w);
                        fputs(buffer, stdout);
                        break;
#endif
				//check for double
				case 'l' :
						switch (*++p)
						{
							case 'f': 
									d = va_arg(ap, double);
									sprintf(buffer, "%lf", d);
									fputs(buffer, stdout);
									break;
						}
				case 'L' :
						switch (*++p)
						{
							case 'f': 
									l = va_arg(ap, long double);
									sprintf(buffer, "%Lf", l);
									fputs(buffer, stdout);
									break;
						}
			}
		}
		else
		{
			putchar(*p);	
		}
		p++;
	}
	va_end(ap);
}

//define the fuctions
void xscanf(const char *format,...)
{
	//define the variables
	char ch, buffer[30] = {0}; int i;char *cptr;int *iptr;float f;
    float *fptr;	double *l;
	const char *p = format;

	//declare the type of pointer
	va_list ap;

	//intialize the pointer
	va_start(ap, format);

	while (*p)
	{
		if (*p == '%')
		{
			switch(*++p)
			{
				//check for characters
				case 'c':
						ch = fgetc(stdin);
						cptr = va_arg(ap, char *);
						*cptr = ch;
						//break;
						return;
				
				//check for integers
				case 'd':
						fgets(buffer, 30, stdin);
						iptr = va_arg(ap, int *);
						*iptr = atoi(buffer);
						return;
				
				//check for float
				case 'f':
						fgets(buffer, 30, stdin);
						fptr = va_arg(ap, float *);
						sscanf(buffer, "%f", fptr);
						return;
				//check for double
				case 'l':
						switch(*++p)
						{
							case 'f':
									fgets(buffer, 30, stdin);
									l = va_arg(ap, double *);
									sscanf(buffer, "%lf", l);
									return;
						}
			}
		}
	}
	//end the function
	va_end(ap);
}
