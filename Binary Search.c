#include <stdio.h>
int main() 
{
    int a[10],i,n,key,low,mid,high,f=0,t;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    char sort;
    printf("Is the array sorted? (Yes/No): ");  //Executable for unsorted list too
    scanf(" %c",&sort);                         //Bubble Sort operation to sort the unsorted input elements
    if(sort=='No') 
    {
        for(i=0;i<n-1;i++) 
        {
            for(int j=0;j<n-i-1;j++) 
            {
                if(a[j]>a[j+1]) 
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        printf("Sortted Array:");
        for(i=0;i<n;i++) 
        {
            printf("%d\t",a[i]);
        }
    }
    printf("\nEnter element you want to search: "); // Binary Search Operation \/
    scanf("%d",&key);
    
    low=0;
    high=n-1;
    while(low<=high) 
    {
        mid=(low+high)/2;
        if(key==a[mid]) 
        {
            f=1;
            break;
        }
        if(key<a[mid]) 
        {
            high=mid-1;
        } else 
        {
            low=mid+1;
        }
    }
    if(f==1) {
        printf("Element is found\n");
    } else {
        printf("Element is not found\n");
    }
    return 0;
}
