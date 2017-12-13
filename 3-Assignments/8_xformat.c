/***********************************************************************
TITLE      :Print the X pattern
AUTHOR     :T.VINODH KUMAR
DATE       :05/10/2017
DESCRIPTION:To print the X pattern


 ************************************************************************/
#include <stdio.h>

int main()
{
	int i, j, N;
	int count;

	//prompt the user to enter the number N
	printf("Enter N: ");
	scanf("%d", &N);


	//	count = N * 2 - 1;
	/*
	   for(i=1; i<=count; i++)
	   {
	   for(j=1; j<=count; j++)
	   {
	   if(j==i || (j==count - i + 1))
	   {
	   printf("Hello");
	   }
	   else
	   {
	   printf(" ");
	   }
	   }

	   printf("\n");
	   }
	 */





	//for odd

	if(N % 2 != 0)
	{
		count = N;
		for(i=1; i<=N; i++)
		{
			for(j=1; j<=N; j++)
			{
				if(j==i || (j == count))
				{
					if(i == N / 2 + 1 )
					{
						printf("  Hello");
						break;
					}
					else
					{
						printf("Hello");
					}

				}

				else
				{
					printf(" ");
				}
			}
			count--;
			printf("\n");

		}
	}

	//for even
	else
	{
		count = N;
		for(i=1; i<=N; i++)
		{
			for(j=1; j<=N; j++)
			{
				if(j==i || (j == count))
				{
					if(i == N/2 || i == N/ 2 + 1 )

					{
						printf("  Hello");
						break;
					}
					else
					{
						printf("Hello");
					}
				}
				else
				{
					printf(" ");
				}
			}
			count--;

			printf("\n");
		}
	}
	return 0;
}

