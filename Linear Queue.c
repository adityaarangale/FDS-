#include<stdio.h>
#define max 5
int main()
{
	int ch, rear = -1,front = -1,queue[max],element,f=0;
	 while(f!=1)
	 {
	printf("which operations you want to perform\n1.enQueue \n2.deQueue\n3.displays:\n");
	printf("\nenter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter element to enqueue:\n ");
		scanf("%d", &element);

		if (rear == max - 1)
		{
			printf("Queue is full\n");
		} 
		else 
		{
			if (front == -1)
			{
				front = 0;
			}
			rear++;
			queue[rear] = element;
			printf("Element enqueued: %d\n", element);
		}
		break;

	case 2 :
		printf("deQueue:\n");
		if(front == rear)
		{
			printf("Queue is empty:\n");
		}
		else
		{
			printf("element removed is %d\n",queue[front]);
			front++;
		}
		break;
	case 3:
		printf("displays");
		printf("Queue elements are:\n");
		for(int i = front; i<=rear; i++)
		{
			printf("queue [%d]=%d\n",i,queue[i]);
		}
		break ;
		default:
		printf("enter correct choice:\n");
		break;
}
	}
	return 0 ;

}