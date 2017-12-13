/***********************************************************************
TITLE      :To print the ascii tabular column with octal,hexadecimal,decimal values of respective ascii character
AUTHOR     :T.VINODH KUMAR
DATE       :04/10/2017
DESCRIPTION:print all the ascii characters


 ************************************************************************/
#include<stdio.h>


int main()
{
	int i;

	//heading for the ocatal hexa decimal and respective ascci character
	printf("\n[octal]\t[decimal]\t[hexadecimal]\t[ascii]\n");

	//prints the ascci character from 33 to 126 range
	for(i=33; i<=126; i++)
	{

		printf(" %o\t %d\t\t %X\t\t %c\n", i, i, i, i);
	}
	return 0;

}
