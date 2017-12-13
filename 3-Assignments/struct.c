#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct
{
	char *name;
	float *marks;
	float avg;
}student_t;

void print_details(student_t *p, int m, int n);
void average(student_t *p, int m, int n);
int populate(student_t *p, int m, int n);
int main()
{
   int m;
   float n;
   printf("Enter the no. of stduents\n");
   scanf("%d", &m);

   student_t *p = malloc(m * sizeof(student_t));
   if(p == NULL)
   {
   	   printf("Malloc failed\n");
   	   return -1;
   }
   printf("Enter the no of subjects\n");
   scanf("%f", &n);

   populate(p, m, n);
}

int populate(student_t *p, int m, int n)
{
	int i, j;
	char buffer[20] = {'\0'};
	for(i = 0; i < m; i++)
	{
		printf("Enter %d name\n", i + 1);
		scanf("%s", buffer);

		p[i].name = malloc(strlen(buffer) + 1);
		strcpy(p[i].name, buffer);
	#if 0
	    if(p[i].name == NULL)
		{
			printf("malloc failed\n");
			return -1;

		}
//		strcpy(p[i].name, buffer);
#endif
		p[i].marks = malloc(n * sizeof(float));
	//	printf("3");
		#if 0

		if(p[i].marks == NULL)
		{
			printf("malloc failed\n");
			return -1;
		}
#endif
		for(j = 0; j < n; j++)
		{
			printf("Enter %d marks\n", j + 1);
			scanf("%f", p[i].marks + j);
		}
	//	printf("3");
		memset(buffer, '\0', 20);


	}

}

void average(student_t *p, int m, int n)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		float sum = 0;
		for(j =0; j < n; j++)
		{
			sum = sum + *(p[i].marks + j);
		}
		p[i].avg = sum / n;
	}
}

void print_details(student_t *p, int m, int n)
{
	int i, j;
	for(i = 0; i < m; i++)
	{
		printf("Student Details:%d\n", *(p[i].name));

		for(j = 0; j < n; j++)
		{
			printf("The marks of the %d stduent is %d sub is %f", m + 1, n + 1, *(p[i].marks));

		}
		printf("The average of  student is: %f", p[i].avg);
	}
}

