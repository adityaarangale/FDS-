#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next; 
};

struct node *head,*newnode,*top,*prenode,*temp;

void push()
{
    newnode=malloc(sizeof(struct node));
    printf("Enter a data");
    scanf("%d",&(newnode->data));
    if(top==NULL){
        top=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=top;
        top=newnode;

    }
    
       
}

void pop()
{   
    if(top==NULL){
        printf("Empty Singly Linkedlist\n");
    }
    else{
        temp=top;
        top=top->next;
        temp->next=NULL;
        printf("%d deleted ",temp->data);
        free(temp);
    }
}

int display(){
    temp=top;
    if(top==NULL){
        printf("Empty SSL\n");
    }
    
    while (temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    top=NULL;
    int ch,y=0;
    do{
        printf("Enter your choice\n");
        printf("1. push \n 2. pop \n 3. display\n 4.Exit\n ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
                break;
        
        case 2: pop() ;
                break;
        
        case 3: display() ;
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