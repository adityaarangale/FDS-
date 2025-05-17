#include <stdio.h>
#include <string.h>
#define max 5 

int front = -1, rear = -1;
char arr[max][100];
char ele[100];

void Enqueue(char *ele) {
    if (rear == max) {
        printf("Queue Overflow\n");
    } else if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        strcpy(arr[rear], ele);
    } else {
        rear++;
        strcpy(arr[rear], ele);
    }
}

void Dequeue() {
    if (front == rear) {
        printf("Queue Underflow\n");
    } else {
        front++;
        printf("%s Deleted\n", arr[front]);
    }
}

void display() {
    if (rear == front) {
        printf("Queue Underflow\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("%s\t", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch, y = 0;
    do {
        printf("Enter Your choice\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element: ");
                scanf("%99s", ele); // Limits input to prevent buffer overflow
                Enqueue(ele);
                break;

            case 2:
                Dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting successfully\n");
                y = 1;
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (y != 1);

    return 0;
}