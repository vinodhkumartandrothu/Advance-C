#include<stdio.h>
#include<stdarg.h>

int xprintf(const char* format, ...);
int main()
{
	char ch = 'A';
	xprintf("The value of ch: %c\n", ch);
	int i = 10;
	xprintf("The value of i: %d\n", i);
	float f = 1.23;
	xprintf("The value of f:%f\n", f);

	double d = 2.25;
	xprintf("The value of d: %lf\n", d);


	long double fd = 3.25;
	xprintf("The value of fd: %Lf\n", fd);
}

int xprintf(const char* format, ...)
{
	int i;
	float j;
	char ch;

	char buffer[30] = {'\0'};
	va_list ap;
	const	char *p = format;
	va_start (ap, format);

	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'c':
					ch = (char)va_arg(ap, int);
					putchar(ch);
					break;

				case 'd':
					i = va_arg(ap, int);
					sprintf(buffer, "%d", i);
					fputs(buffer, stdout);
					break;
				case 'f':
					j = (float)va_arg(ap, double);
					sprintf(buffer, "%f", j);
					fputs(buffer, stdout);
					break;
				case 'l':    
					switch(* ++p)
                    { 
                     case 'L':
                          if(* ++p == 'f')
						  {
					  	           j = (float)va_arg(ap, long double);
					  	           sprintf(buffer, "%Lf", j);
					  	           fputs(buffer, stdout);
					  	           

					}
					break;
						
						case 'f':
							j = va_arg(ap , double);
							sprintf(buffer, "%lf", j);
							fputs(buffer, stdout);
							break;
			}
					  	//  case 'l':
                         // switch(* ++p)
					  //	 { 
					  	  /*case 'v':
					  	           j = (float)va_arg(ap, long double);
					  	           sprintf(buffer, "%llf", j);
					  	           fputs(buffer, stdout);
					  	           break;
					 // }*/
}

			

		}
		else
		{
			putchar(*p);
		}
		p++;
	}
}
