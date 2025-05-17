#include <stdio.h>
int main() 
{
    int n, m, ch, top = -1, f = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int a[n];

    
    while (f!=1) 
    {
        printf("Enter choice: 1.Push 2.Pop 3.Display 4.Quit\n");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1:
                if (top == n - 1) 
                {
                    printf("Stack Overflow!\n");
                } 
                else 
                {
                    printf("Enter element to push: ");
                    top++;
                    scanf("%d", &a[top]);
                }
                break;
            
            case 2:
                if (top == -1) 
                {
                    printf("Stack Underflow!\n");
                } 
                else 
                {
                    printf("Popped: %d\n", a[top]);
                    top--;
                }
                break;
            
            case 3:
                if (top == -1)
                {
                    printf("Stack is empty!\n");
                } else 
                {
                    printf("Stack elements:\n");
                    for (int i = top; i >= 0; i--) 
                    {
                        printf("%d\n", a[i]);
                    }
                }
                break;
            
            case 4:
                f = 1;
                printf("Exiting program.\n");
                break;
            
            default:
                printf("Invalid input!\n");
                break;
        }
    }
    return 0;
}
