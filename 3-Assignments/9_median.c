/***********************************************************************
AUTHOR     :T VINODH KUMAR
TITLE      :
DATE       :
DESCRIPTION:


************************************************************************/
#include<stdio.h>

int main()
{
	int a[20],size;
	int i,j,n,temp;
    float median;
    printf("Enter the size of array\n");
    scanf("%d",&n);


    printf("Enter the elements of array1:");

	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
    
    

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<size;j++)
		{
		if(a[i]>a[j])
		{
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;

		}
		}
		printf("the sorted array is");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
        if(n%2==0)
		{
         median=(a[n/2]+a[n/2+1])/2.0;
		}
		else
		{
			median=a[n/2+1];
		}
		}
		for(i=1;i<=n;i++)
		{
			printf("%f",a[i]);
		}
return 0;
}
