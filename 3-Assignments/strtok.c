#include<stdio.h>
#include<string.h>
int main()
{
	char s[]=":one,two,three";

	char *p = strtok(s,":,");
	printf("%c\n",*p);

	while(p = strtok(NULL,":,"))
	{
	printf("%s\n",p);
	}
}
