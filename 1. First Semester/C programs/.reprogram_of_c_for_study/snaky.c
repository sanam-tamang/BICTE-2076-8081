
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#define Xx 15 
#define Yy 40
char Map[Xx][Yy],Chkey;
int i,j,dx,dy,score=0,speed;
void gotoxy(int,int);
void Show_Map();
void Snake();
void Run_Way();
 void Move_Key(); 
void Direction_control();
void Freemoving_point();
void food_point();
void StepsOfGame();

int main(){
    system("cls");
    StepsOfGame();
    Run_Way();
      Snake();
      food_point();
    while(1){
       Sleep(speed);
        Move_Key();
        Direction_control();
        Show_Map();

    }
    return 0;
}
void StepsOfGame(){
    int lev,count=0;
    printf("Control keys are\n");
    printf("\n         w=up\n");
    printf("\na=left\t\td=right\n");
     printf("\n        s=down\n\n\n");

    printf("Please choose the level of game: ");
    printf("\n1.Hard\n2.Medium\n3.Easy\n4.Exit");
    printf("\nChoose: ");
    scanf("%d",&lev);
    if(lev==1){
        speed=30;
    }
    else if(lev==2){
        speed=100;
    }
    else if(lev==3){
        speed=300;

    }
    else if(lev==4){
        exit(0);
    }
    else{
        getch();
        printf("\nWrong input please choose 1,2 or 3 ");
        system("cls");
        lev=0;
    
        StepsOfGame();
    }
    return;
}
void food_point(){
    srand(time(NULL));
    while(1)
    {
        i=rand()%(Xx-3)+1;
        j=rand()%(Yy-3)+1;
    if(Map[i][j]!='@' && Map[i][j]!='*' && score%2!=0)
    {
       Map[i][j]='$';
       return;
    }
    else if(Map[i][j]!='@' && Map[i][j]!='*' && score%2==0){ 
        Map[i][j]='O';
       return;

    }

    }

}
void Freemoving_point(){
    char temp=Map[i][j];
    Map[i][j]=Map[i+dx][j+dy];
    Map[i+dx][j+dy]=temp;
}

void Move_Key(){
    while(kbhit())

       Chkey=getch(); 

     if(Chkey=='w'){
        
         dx=-1;
        dy=0;
     }
    else if(Chkey=='s'){
        
        dx=1;
        dy=0;
    }
    else if(Chkey=='a'){
         
          dx=0;
        dy=-1;
        
    }
    else if(Chkey=='d'){
       dx=0;
         dy=1;
    }
    else
    {
        return;
    }
 
}
void Show_Map(){
    gotoxy(18,23);
    printf("score: %d",score);
    for(i=0;i<Xx;i++){
        gotoxy(Xx/2,i+5);
        for(j=0;j<Yy;j++){
            printf("%c",Map[i][j]);

        }
    }
}
void gotoxy(int a ,int b ){
    COORD coord;
  coord.X=a;
  coord.Y=b;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
void Direction_control(){

    for(i=0;i<Xx;i++){
        for(j=0;j<Yy;j++){
            switch(Map[i][j]){
                case '@':
                if(Map[i+dx][j+dy]==' '){
                    Freemoving_point();
                    return;

                }
                else if(Map[i+dx][j+dy]=='*'){
                    gotoxy(20,25);
                    printf("***You died***");
                    getch();
                    exit(0);
                }
                else if(Map[i+dx][j+dy]=='$' || Map[i+dx][j+dy]=='O' ){
                    Map[i+dx][j+dy]=' ';
                    score=score+1;
                    Move_Key();
                    food_point();
                    Show_Map();
                    return;
                }
            }
        }
    }

}
void Snake(){
   i=rand()%(Xx-3)+1;
    j=rand()%(Yy-3)+1;

    Map[i][j]='@';
 
}

void Run_Way(){

    for(i=0;i<Xx;i++){
        for(j=0;j<Yy;j++){
            if(i==0 || j==0 || j==Yy-1 || i==Xx-1 )
            {
                Map[i][j]='*';
            }
            else{
                Map[i][j]=' ';
                
            }
        }
    }
}