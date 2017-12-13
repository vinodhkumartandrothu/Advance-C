/********************
Title           :To create a function for printing the inputs.
Author          :T VINODH KUMAR
Date            :13/11/17
Description     :To create a function like printf function.
 *********************/

#include <stdio.h>
#include <stdarg.h>

void xprintf(const char *format, ...);
int main()
{
	char ch = 'A';
	xprintf("The value of ch:%c\n", ch);

	int i = 10;
	xprintf("the value of i: %d\n", i);

	float f = 1.23;
	xprintf("the value of f:%f\n", f);

	double d = 2.25;
	xprintf("the value of d:%lf\n", d);

	long double l = 2.85;
	xprintf("\nthe value of l:%Lf\n", l);

	short h = 3;
	xprintf("the value of h: %h\n", h);

	long e = 5;
	xprintf("the value of e: %ld\n", e);
	putchar('\n');

	char w[] = "vinodh";
	xprintf("The string is s: %s\n", w);
}

void xprintf(const char *format, ...)
{
	char ch;
	const char *p = format;
	int i;
	char buffer[10];
	float f;
	double d;
	long double l;
	short h;
	long e;
	char *str;


	//1.Declare a pointer
	va_list ap;

	//2.Initialize ptr
	va_start (ap, format);

	while (*p)
	{
		if (*p == '%')
		{
			switch (*++p)
			{
				//Logic to print char value
				case 'c':
					ch = (char)va_arg(ap, int);
					putchar(ch);
					break;

					//Logic to print int value
				case 'd':
					i = va_arg(ap, int );
					sprintf(buffer, "%d", i);
					fputs(buffer, stdout);
					break;

					//Logic to print float value
				case 'f':
					f = (float)va_arg(ap, double);
					sprintf(buffer, "%f", f);
					fputs(buffer, stdout);
					break;

                //Logic to print string
				case 's':     
					str = va_arg(ap, char *);
					sprintf(buffer, "%s", str);
					fputs(buffer, stdout);
					break;

				//Logic to print  short int  value
				case 'h':
					h = (short)va_arg(ap, int);
					sprintf(buffer, "%hd", h);
					fputs(buffer, stdout);
					break;

					//Logic to print double value
				case 'l':
					switch(*++p)
					{
						case 'f':
							d = va_arg(ap, double);
							sprintf(buffer, "%lf", d);
							fputs(buffer, stdout);
							break;


							//Logic to print long int value
						case 'd':
							e = (long)va_arg(ap, long int);   
							sprintf(buffer, "%ld", e);
							fputs(buffer, stdout);
							break;
					}


					//Logic to print long double value
				case 'L':
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

