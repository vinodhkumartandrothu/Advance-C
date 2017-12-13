#include <stdio.h>

int main()
{
	char ch;
	printf("Enter any character\n");
	scanf("%c", &ch);

	if ( isalnum ( ch ) )
		printf ( "\nEntered character is alphanumeric" ) ;
	else
		printf ( "\nEntered character is not alphanumeric" ) ;
}
