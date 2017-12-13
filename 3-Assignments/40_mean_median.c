/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :To find mean and median
DATE       :  
DESCRIPTION:To find mean and median


************************************************************************/
#include<stdio.h>
#include<stdlib.h>

void display_details(void);
float mean(char **base);
float median(char **base);


int main(int argc ,char *argv[])
{
	//Checking the arguemnets
	if(argc == 2)
	{
		if(*(argv[1] + 1) == 'h')
		{
			display_details();
			exit(1);
		}
	}
	else if( argc < 3)
	{
		printf("Insuffiecient Arguments\n");
		printf("type -h OR --help for more details\n");
		exit(2);

	}


	switch( *(argv[1] + 1)) 

	{

		case 'm':
			printf("Mean:%f\n", mean(argv + 2));
			break;

		case 'M':
			printf("Medain:%f\n",median(argv + 2));

			break;
	}
}

//If the arguements are less than 3 it will display details
void display_details(void)
{
	printf("usage: ./median_mean <option> <input> \n");
	printf("options:\n");
	printf("-m: to find mean\n");
	printf("-M: to find median\n");
}

//Logic for mean
float mean(char **base)
{
	int i;
	int sum = 0;
	for(i = 0 ;*(base + i) ;i++ )
	{
		sum = sum + atoi(*(base + i));
	}
	return (float) sum / i;
}

//Logic for median
float median(char **base)
{
	int count = 0;
	int i, m1, m2;
	for(i = 0 ; *(base + i) ;i++ )
	{  
		count++;
	}

	if(count % 2 == 0)
	{

		m1 = ( atoi (*(base + (count / 2 ))) + atoi(*(base + ((count / 2) - 1 )))) / 2;
		return m1;

	}
	else
	{
		m2 = atoi(*(base + (( count / 2 ))));
		return m2;

	}


}







