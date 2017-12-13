/***********************************************************************
TITLE      :To print ap,gp,hp series
AUTHOR     :T.VINODH KUMAR
DATE       :09/10/2017
DESCRIPTION:Print the AP,GP,HP series


************************************************************************/
/*
   program to print Arithmetic Series and it's sum till Nth term
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int first, diff, terms, value, sum=0, i;

	int  ratio,denominator;

	//prompt the user to enter the number of terms
	printf("Enter the number of terms in AP series\n");
	scanf("%d", &terms);
  
   //prompt the user to enter the first term and differnce
	printf("Enter first term and common difference of AP series\n");
	scanf("%d %d", &first, &diff);

	/* print the series and add all elements to sum */
	value = first;
	printf("AP SERIES\n");

	for(i = 0; i < terms; i++) 
	{
		printf("%d ", value);
		sum += value;
		value = value + diff;
	}
    
    //Display the sum and AP  series
	printf("\nSum of the AP series till %d terms is %d\n", terms, sum);


    //GP Series

	//prompt the user to enter the number of terms
	printf("Enter the number of terms in GP series\n");
	scanf("%d", &terms);

    
   //prompt the user to enter the first term and ratio
	printf("Enter first term and common ratio of GP series\n");
	scanf("%d %d", &first, &ratio);

	/* print the series and add all elements to sum */
	value = first;
	printf("GP SERIES\n");
	for(i = 0; i < terms; i++) 
	{
		printf("%d ", value);
		sum += value;
		value = value * ratio;
	}

    //Display the sum and GP  series
	printf("\nSum of the GP series till %d terms is %d\n", terms, sum);
	
	
	//HP series

	float s = 0.0f;


	//prompt the user to enter the terms
	printf("Enter the number of terms in HP series\n");
	scanf("%d", &terms);
    
   //prompt the user to enter the denominator and differnce
	printf("Enter denominator of first term and common difference of HP series\n");
	scanf("%d %d", &first, &diff);

	/* print the series and add all elements to sum */
	denominator = first;
	
	printf("HP SERIES\n");
	for(i = 0; i < terms; i++) 
	{
		printf("1/%d ", denominator);
		sum += 1/(float)denominator;
		denominator += diff;
	}

    //Display the sum and HP  series
	printf("\nSum of the HP series till %d terms is %f\n", terms, s);

	return 0;
}
