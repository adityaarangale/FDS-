#include<stdio.h>
int main()
{
	int a[10],n,i,j,t;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted array:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0; i<n-1; i++)
	{

		for(j=i; j<n-i-1; j++)
		{
    		if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}

		}
	}
	printf("\nSorted array:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]); 
	}
	printf("\nNumber of passes required: %d",n-1);
	return 0;
}
