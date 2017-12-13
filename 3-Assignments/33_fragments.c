#include<stdio.h>
#include<stdlib.h>

void average(float **p, int n, int *s);
void populate(float **p, int n, int *s);
void memory_allocate(float **p, int n , int *s);
int main()
{
	float *p[3];
	int size[3];
	memory_allocate(p, 3, size);
    populate(p, 3, size);
    average(p, 3, size);
    }

void memory_allocate(float **p, int n , int *s)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter n value for %d array\n", i);
		scanf("%d", s + i);
        *(p + i) = malloc((*(s + i) + 1) * sizeof(float));
	}
}

void populate(float **p, int n, int *s)

{
	int i, j;
	for(i = 0; i < n; i++)
	{
		printf("Enter %d elements\n", *(s + i));
		for(j = 0; j < *(s + i); j++)
		{
			scanf("%f", (*(p + i) + j));
		}
	}
}

void average(float **p, int n, int *s)
{
	int i,j, sum = 0, avg;

    for(j = 0; j < n; j++)
	{
	for(i = 0; i < *(s + i); i++)
	{
       sum += **(p + i);
	}
	avg = (float)sum / *(s + i);
}

}
