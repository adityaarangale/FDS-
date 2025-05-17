#include<stdio.h>
#define max 5
int queue[max],rear=-1,front=-1,ele;

void enqueue(int ele){
    if (rear==-1 && front==-1){
        rear=0;
        front=0;
        queue[rear]=ele;
    }
    else if ((rear+1)%max==front){
        printf("Queue is full\n");

    }
    else{
        rear=(rear+1)%max;
        queue[rear]=ele;
    }
    
    
}

void dequeue(){
    if(rear==-1 && front==-1 ){
        printf("Queue is empty\n");
    }
   else if(rear==front){
    printf("Deleted element is %d\n",queue[front]);
    rear=-1;
    front=-1;
   }
   else{
    printf("Deleted element is %d\n",queue[front]);
    front=(front+1)%max;
   }
}
void display()
{
    if(rear==-1 && front==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Elements are : \n");
        for(int i=front;i!=rear;i=(i+1)%max){
            printf("%d\t",queue[i]);
        }
        printf("%d\t",queue[rear]);
         
        printf("\n");
    }
}


int main(){
    int ch,y=1;
    do{
        printf("Enter your choice :\n");
        printf("1.Enqueue \n 2.Dequeue \n 3. Display\n 4.Exit\n");
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
               y=0;
               break;

        }
    }while(y==1);

}