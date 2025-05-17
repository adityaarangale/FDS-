#include<stdio.h>
#include<string.h>
#define max 5
char playlist[max][10];
char song[10];
int front=-1,rear=-1;

void add(char *song){
    if(rear==-1 && front==-1){
        rear=0;
        front=0;
        strcpy(playlist[rear],song);
    }
    else if((rear+1)%max==front){
        printf("Playlist reched to its maximum size\n.Can't add song \n");
        return ;

    }
    else{
        rear=(rear+1)%max;
        strcpy(playlist[rear],song);
        
    }
    printf("%s",playlist[rear]);

}
void delete(){
    if(rear==-1 && front==-1){
        printf("No song present in playlist\n");
    }
   else if(rear==front){
    printf("Deleted song is :- %s\n",playlist[front]);
    front=-1;
    rear=-1;
   }
   else{
    printf("Song deleted is %s\n",playlist[front]);
    front=(front+1)%max;
   }

}

void display_song(){
    if(front ==-1){
        printf("No song playing\n");
    }
    else{
    printf("%s\n",playlist[front]);
}
}

void display_playlist(){
    if(rear==-1 && front==-1){
        printf("Playlist is empty\n");
    }
    else{
        for(int i=front;i!=rear;i=(i+1)%max){
            printf("%s\n",playlist[i]);
        }
        printf("%s\n",playlist[rear]);
    }
}


int main(){
    int ch,y=0;
    printf("Welcome to the Musical Playlist\n");
    do{
    printf("Enter youe choice : \n");
    printf("1. Add song to playlist\n 2. Delete a song from playlist\n 3. Display current playing song\n 4. Display the entire palylist\n 5.Exist\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("You want to add song to playlist\n");
        printf("Enter a song\n");
        scanf("%s",song);
        add(song);
        break;
    case 2:
       printf("You want to delete song from playlist\n");
       delete();
       break;
    case 3:
      printf("Displaying the current song :\n");
      display_song();
      break;
    case 4 :
       display_playlist();
       break;
    case 5 :
      printf("Thank you\n");
      printf("Programm exited successfully\n");
      y=1;
      break;
    
    default:
        break;
    }
 } while(y!=1);
}