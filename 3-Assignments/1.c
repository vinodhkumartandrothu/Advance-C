#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void print (char *p);
int main()
{
	char s[100];
	char a[7];
	int i;


	printf("enter paragraph: ");
	fgets(s,100,stdin);
	print(s);

}
void print (char *p)
{ 
	int i, c = 0, flag, n = 0;

#if 0
	for(i = 0 ; *(p+i) != '.' ; i++)
	{ 
		if(*(p+i) == ' ')
		{
			*(p+i) = *(p+(i+1));
		}



	}
#endif

	for(i = 0 ; *(p+i) != '.' ; i++)
	{
		printf("%c",*(p+i));
		c++;
		//  *(q+i) = *(p+i);
	}

//	printf("%d",c);

//Logic for checking palindrome
	for( i = 0 ; i < (c - 1) ; i++)
	{

		if( *(p + i) == *(p + (c - 1)))
		{ 
			c--;
			n++;

			if( (c - 1) == n)
			{
				flag=1;
			}

		}
		else
		{
			flag = 0;
		}



	}
	if(flag == 1)
	{
		printf("\nIt is palindrome :");
	}
	else
	{
		printf("not palindrome:");
	}
}








































