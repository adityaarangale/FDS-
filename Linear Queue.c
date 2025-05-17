#include<stdio.h>
#define max 5

int rear=-1,front=-1,queue[max],ele;

void enqueue(int ele){
    if(rear==max-1){
        printf("Queue is full\n");
    }
    else{
        rear++;
        queue[rear]=ele;
    }

}

void dequeue(){
    if(rear==front){
        printf("Queue is empty\n");
    }
    else{
        front++;
        printf("element deleted is %d\n",queue[front]);
      
    }

}

void display(){
    if(rear==front){
        printf("Queue is Empty\n");
    }
    else{
        for(int i=front+1;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
    }

}

int main(){
    int ch,y=0;
    do {
        printf("Enter your choice :\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&ch);

        switch(ch)

        {
            case 1 :
                  printf("Enqueue\n");
                  printf("Enter a number\n");
                  scanf("%d",&ele);
                  enqueue(ele);
                  break;
            case 2 :
                printf("Dequeue\n");
                dequeue();
                break;
            case 3 :
                printf("Elements are : \n");
                display();
                break;
            case 4 :
               printf("Program exited sucessfully\n");
               y=1;
               break;
            default :
                 printf("Wrong choice\n ");
                 break;  

        }
    }while(y!=1);
}