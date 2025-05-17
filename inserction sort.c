#include<stdio.h>
int main() 
{
	int a[10],n,i,b,f=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    printf("a[%d]=%d\n",i,a[i]);
	}
    printf("Enter the element to search:");
	scanf("%d",&b);
	for(i=0;i<n;i++) 
	{
	    if(a[i]==b) 
	    {
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("Element are found");
	} 
	else 
	{
		printf("Element not found");
	}
	return 0;
}
