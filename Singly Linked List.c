#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp,*prenode,*pre_node;

void insertAtFirst(){
    newnode=malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&(newnode->data));
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

void insertAtLast(){
    newnode=malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&(newnode->data));
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }

}

void deleteAtFirst(){
    if(head==NULL){
        printf("Empty Singly Linkedlist\n");
    }
    else{
        temp=head;
        head=temp->next;
        temp->next=NULL;
        free(temp);
    }
}
void deleteAtLast(){
    if(head==NULL){
        printf("Empty Singly Linkedlist\n");
    }
    else{
       temp=head;
       while(temp->next!=NULL){
        prenode=temp;
        temp=temp->next;
       }
       
       prenode->next=NULL;
       free(temp);
    }
    
}

void display(){
    temp=head;
    if(head==NULL){
        printf("Empty SSL\n");
    }
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int count_node(){
    int count=0;
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}


void insertAfterPosition(){
    int count=0,pos;
    printf("Enter the position after which you want to inert data\n :");
    scanf("%d",&pos);

    count=count_node();
    if(pos<1 || pos>count ){
        printf("Invalid position\n");
    }
    else{
        newnode=malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d",&(newnode->data));
        temp=head;
        int i=1;
        while(i<pos){
            temp=temp->next;
            i+=1;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void deleteAtPosition(){
    int count=0,pos;
    pre_node=NULL;
    printf("Enter the position from which you want to delete data");
    scanf("%d",&pos);
    temp=head;
    
    count=count_node();

    if(pos<1 || pos>count ){
        printf("Invalid position\n");
    }
    else{
        temp=head;
        int i=1;
        while(i<pos){
            pre_node=temp;
            temp=temp->next;
            i+=1;
        }
        if (pre_node == NULL) {
            head = head->next;
        } else {
        pre_node->next=temp->next;
        }
        temp->next=NULL;
        free(temp);
    }
    
}

void search_data(){
    int key,count=0,f=0;
    printf("Enter the key\n");
    scanf("%d",&key);
    temp=head;
    while(temp!=NULL){
        count++;
        if(temp->data==key){
            printf("%d found at %d position\n",key,count);
            f=1;
            break;
        }
        else{
            f=0;
        }
        temp=temp->next;
    }
    if(f==0){
        printf("%d not found\n",key);
    }
}

int main()
{
    int ch,y=0,count;
    head=NULL;
    do{
        printf("Enter your choice :\n");
        printf(" 1.Insert node at first\n 2.Insert node at Last\n 3.Delete node from first\n 4.Delete node from last\n 5.Insert after position\n 6.Delete from the position \n 7.Display\n 8.Count Number of nodes\n 9.Serach for a element\n 10.Exit\nYour Choice:");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            printf("Insert node at first\n");
            insertAtFirst();
            break;
            
            case 2 :
            printf("Insert the node at last\n");
            insertAtLast();
            break;

            case 3 :
            printf("Delete node from first\n");
            deleteAtFirst();

            break;

            case 4 :
            printf("Delete node from last\n");
            deleteAtLast();
            break;

            case 5:
            printf("Insert after position\n");
            insertAfterPosition();
            break;

            case 6:
            printf("Delete From Position\n");
            deleteAtPosition();
            break;

            case 7:
              display();
              break;

            case 8:
            count=count_node();
            printf("Total number of nodes = %d\n",count);
            break;

            case 9:
            search_data();
            break;

            case 10 :
            printf("Program exited successfully\n");
            y=1;
            break;

            default :
            printf("Invalid choice\n");
            break;
        }


    }while(y!=1);
}