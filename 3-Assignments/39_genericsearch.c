/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :generic_search
DATE       :
DESCRIPTION:generic_search


 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

//int char_compare(const void *p, const void *q);
//int float_compare(const void *p, const void *q);

int int_compare(const void *p, const void *q);

//int double_compare(const void *p, const void *q);

const void *generic_search(const void *key, const void *base, size_t nmemb, size_t size, int (*compare)(const void*, const void*));

int main()
{
	char  key3, option;
	double  key4;
	int  choice, i, n ,n1 ,e ,c ,key1;
	float  key;

//do
//{

	//prompt the user to enter the choice
	printf("\n1.char\n 2.int\n 3.float\n 4.double\n 5.string\n");
	scanf("%d", &choice);

	switch(choice)
	{
#if 0//search for char type
		case 1:

			printf("Enter the number of int items: ");
			scanf("%d\n", &c);

			char *d = malloc(c * sizeof(char));

			for(i = 0; i < c; i++)
			{
				scanf("%d", c + i);
			}

			printf("Enter the key: ");
			scanf("%c", &key3);

			const char *d1 = generic_search(&key3, d, c, sizeof(char), char_compare);
			printf("The key is %c present in %p\n", *d1, d1);
			break;
#endif
			//search for int type		
		case 2:
			//prompt the user to enter the items
			printf("Enter the number of int items: ");
			scanf("%d\n", &n);

			//Dynamic allocation
			int *a = malloc(n * sizeof(int));

			for(i = 0; i < n; i++)
			{
				
				scanf("%d", a + i);
			}

			//prompt ther user to enter the key 
			printf("Enter the key: ");
			__fpurge(stdin);
			scanf("%d", &key1);
             //  printf("1");
			const int *b = generic_search(&key1, a, n, sizeof(int), int_compare);
			printf("The key is %d present in %p\n", *b, b);
			break;

			#if 0//Seacrh for float data type
		case 3:
			//prompt the user to enter the float items
			printf("Enter the number of float items: ");
			scanf("%d\n", &n1);

			float *a1 = malloc(n1 * sizeof(float));

			for(i = 0; i < n1; i++)
			{
				scanf("%f", a1 + i);
			}

			//prompt the user to enter the key 
			printf("Enter the key: ");
			scanf("%f", &key);

			const float *b1 = generic_search(&key, a1, n1, sizeof(float), float_compare);
			printf("The key is %f present in %p\n", *b1, b1);

			break;

			//Search for double data type
		case 4:
			//Prompt the user to enter the double items
			printf("Enter the number of double items: ");
			scanf("%d\n", &e);

			double *f = malloc(e * sizeof(double));

			for(i = 0; i < e; i++)
			{
				scanf("%lf", f + i);
			}

			//Prompt the user to enter the key4
			printf("Enter the key: ");
			scanf("%lf", &key4);

			const double *f1 = generic_search(&key, f, e, sizeof(double), double_compare);
			printf("The key is %lf present in %p\n", *f1, f1);
			break;

		default:
			printf("Invalid option");
			break;

			      printf("DO YOU WANT TO CONTINUE? PRESS....[Y/y] OR IF YOU WANT OT EXIT PRESS....[N/n]\n");
			            scanf("\n%c", &option);
							}while (option == 'Y' || option == 'y');
	}
	return 0;
#endif
}
}
//generic search called function
const void *generic_search(const void *key, const void *base, size_t nmemb, size_t size, int (*compare)(const void*, const void*))
{
	int i;
	for(i = 0; i < nmemb; i++)
	{
	//	printf("%d\t", i);
		if ((*compare)((base + (i * nmemb)) , key))
			//if (status == 1)
		{
			return  (base + (i * nmemb));
			break;

		}
		//	printf("%d\t", i);

	}
	return NULL;
}

//Compare function for int
int int_compare(const void *p, const void *q)
{
	if(*(int*)p == *(int*)q)
	{
		return 1;
	}
	return 0;
}
#if 0
//Compare function for float
int float_compare(const void *p, const void *q)
{
	if(*(float*)p == *(float*)q)
	{
		return 1;
	}
	return 0;
}

//Compare function for char
int char_compare(const void *p, const void *q)
{
	if(*(char*)p == *(char*)q)
	{
		return 1;
	}
	return 0;
}

//Compare function for double
int double_compare(const void *p, const void *q)
{
	if(*(char*)p == *(char*)q)
	{
		return 1;
	}
	return 0;
}

#endif
