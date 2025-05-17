#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *rear,*newnode,*temp,*front;

void  Enqueue(){
    newnode=malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&(newnode->data));

    if(rear==NULL){
        rear=newnode;
        front=newnode;
        newnode->next=NULL;

    }
    else{
        temp=rear;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;


    }
}

void Dequeue(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        temp=front;
        front=temp->next;
        temp->next=NULL;
        printf("%d deleted\n",temp->data);
        free(temp);
  
    }
}
void Display(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

int main(){
    rear=NULL;
    front=NULL;
    int ch,y=0;
    
    do{
        printf("Enter your Choice :\n");
        printf("1.Enqueue\n 2.Dequeue \n 3. Display \n 4.Exit\n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1: Enqueue();
                break;
        
        case 2: Dequeue() ;
                break;
        
        case 3: Display() ;
                break;

        case 4: printf("Program exited successfully\n");
                y=1;
                break;
        
        default:
              printf("Wrong choice ");
              break;
        }
    }while(y!=1);

}