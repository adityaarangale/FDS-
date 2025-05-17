#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int rollno;
    float percentage;
};

int main() {
    struct student s[10];
    
    int i,n,choice,ins,upd,del;
    char j;

    printf("Enter how many student information you want to store:\t");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name:");
        scanf("%s",s[i].name);
        printf("Enter roll number:");
        scanf("%d", &s[i].rollno);
        printf("Enter percentage:");
        scanf("%f", &s[i].percentage);
    }

    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", s[i].name);
        printf("\nRoll Number: %d\n", s[i].rollno);
        printf("Percentage: %.1f%%\n", s[i].percentage);
        printf("\n");
    }
    
    do {
        printf("\nDo you want to perform the following operations? If yes, enter:\n1. Insert\n2. Delete\n3. Update\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("At which position where you want to insert details :");
                scanf("%d",&ins);
            
            if(ins>=1 && i<=n+1) {
                for(i=n;i>=ins;i--) {
                    strcpy(s[i].name,s[i-1].name);
                    s[i].rollno =s[i-1].rollno;
                    s[i].percentage =s[i-1].percentage;
                    
                }
                printf("Enter student details to INSERT:\n");
                printf("Enter name:");
                scanf("%s",s[i].name);
                printf("Enter roll number:");
                scanf("%d", &s[i].rollno);
                printf("Enter percentage:");
                scanf("%f", &s[i].percentage);
                
                n++;
            }
            else{
                printf("Invalid Position!\n");
            }
            break;
            
            case 2:
                
            printf("\n");
            printf("Enter which position you want to Delete:\t");
            scanf("%d",&del);
            
            if(del>=1 && del<=n) {
                for(i=del-1;i<n-1;i++) {
                    strcpy(s[i].name,s[i+1].name);
                    s[i].rollno=s[i+1].rollno;
                    s[i].percentage=s[i+1].percentage;
                    
                }
                n--;
                
            }else{
                printf("Invalid position!\n");
                
            }
            break;
            
            case 3:
            printf("Enter which position you want to UPDDATE:");
            scanf("%d",&upd);
            if(upd>=1 && upd<=n) {
                printf("\nEnter new details to update data:\n");
                printf("\nEnter name:");
                scanf("%s",s[upd-1].name);
                printf("Enter roll number:");
                scanf("%d", &s[upd-1].rollno);
                printf("Enter percentage:");
                scanf("%f", &s[upd-1].percentage);
            }else{
                printf("Invalid Position!");
            }
            
            default:
                printf("Invalid Choice!");
            
        }
            printf("\nUpdated Student Details:\n");
            for(i=0;i<n;i++) {
                printf("\nStudent %d details:\n",i+1);
                printf("Name: %s", s[i].name);
                printf("\nRoll Number: %d\n", s[i].rollno);
                printf("Percentage: %.1f%%\n", s[i].percentage);
                
            }
        printf("\nDo you want to CONTINUE? (Y/N):");
        scanf("%s",&j);
        
    }while (j=='y' || j=='Y');
    return 0;
}