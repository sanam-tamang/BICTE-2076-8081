
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>

#define SIZE 3
char player1[15],player2[15];

char choose1,choose2;
long board[]={0,10,10,10,10,10,10,10,10,10};/**Board one for player one **/
long board2[]={0,10,10,10,10,10,10,10,10,10};/** Board two for player two */
/** this zero value starts with zero and 10 and is nothing it is just 1 2 .. and so on
if user enter any value on it. this value changes and store other value  */
int Choose_X_O();
int draw_board();
int print_name();
void gotoXY(int x,int y);
int Play_Game();

int main()
{
   print_name();
   Choose_X_O();
   draw_board();
   Play_Game();

}
int Choose_X_O()
{    int n;
    gotoXY(30,6);
    printf("1 -->> O");
    gotoXY(30,7);
    printf("2 -->> X");
    gotoXY(30,8);
    printf("3 -->> Exit");
    gotoXY(30,10);
    printf("choose number: ");
    scanf("%d",&n);

    if(n==1)
    {   choose1='O';
        choose2='X';
    }
    else if(n==2)
    {   choose1='X';
        choose2='O';
    }
    else if(n==3)
    {
        exit(1);
    }
    else
    {   gotoXY(30,11);
        printf("Wrong choice try again ");
        getch();
        system("cls");
        Choose_X_O();
    }
    system("cls");

    return 0;
}

int print_name()
{   gotoXY(30,6);
   printf("Enter player1 name: ");
   scanf("%s",&player1);
   gotoXY(30,8);
   printf("Enter player2 name: ");
   scanf("%s",&player2);
   system("cls");
  return 0;
}

void gotoXY(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
int Play_Game()
{  int x=0,p1=0,p2=0,move=1,flag=0,pos=0,pos2=0,count=0;
     gotoXY(30,4);
    printf("Welcome to Tic Tac Toe Game ");
    gotoXY(28,5);
    printf("*******************************");
    gotoXY(30,8);
    printf("player 1 %s's Symbol: %c ",player1,choose1);
    gotoXY(30,10);
    printf("player 2 %s's Symbol: %c ",player2,choose2);

    while(move<3)
    {
    if(move==1)
        {
   gotoXY(60,30);
   printf("%s, Enter Your Position: ",player1);
   scanf("%d",&pos);

   if(board2[pos]!=10 || board[pos]!=10 )
   {
    printf("\a");
    move=1;
   }
 else{
      x=pos;

    board[pos]=p1;

   if( pos>=1 && pos<=3)
   {
      gotoXY(60+(x*10),14);
     printf("%c",choose1);
      flag=1;
   }
   if(pos>=4 && pos<=6)
   {
      gotoXY(30+(x*10),18);
      printf("%c",choose1);
        flag=1;
   }
   if(pos>=7 && pos<=9)
   {
      gotoXY(x*10,22);
     printf("%c",choose1);
        flag=1;
   }
   if(flag==1)
   {     /*Rows */
       if((board[1] == p1 && board[2] == p1 && board[3] == p1) ||  (board[4] == p1 && board[5]==p1 && board[6]==p1) || (board[7] ==p1&& board[8]==p1 && board[9]==p1)

          /* Columns */
           || (board[1] ==p1 && board[4]==p1 && board[7]==p1) || (board[2] ==p1 && board[5]==p1 && board[8]==p1) || (board[3] ==p1 && board[6]==p1 && board[9]==p1)

       /* Diagonals */
           || (board[1] ==p1 && board[5]==p1 && board[9]==p1) || (board[3] ==p1 && board[5]==p1 && board[7]==p1))
           {
            gotoXY(60,34);
           printf("**** %s win ****",player1);
           exit(0);
           }
       else{
          ++count;
            if(count>=9)
            {   gotoXY(60,34);
                printf("**** Game draw ****");
                exit(0);
            }
        move=2;
       }
    }
 }
 }
 if(move==2)
        {
   gotoXY(60,30);
   printf("%s, Enter Your Position: ",player2);
   scanf("%d",&pos2);

   if(board2[pos2]!=10 || board[pos2]!=10  )
   {
       printf("\a");
     move=2;
   }

 else{

     x=pos2;
    board2[pos2]=p2;

   if( pos2>=1 && pos2<=3)
   {
      gotoXY(60+(x*10),14);
       printf("%c",choose2);
      flag=1;

   }
   if(pos2>=4 && pos2<=6)
   {
      gotoXY(30+(x*10),18);
      printf("%c",choose2);
        flag=1;

   }
   if(pos2>=7 && pos2<=9)
   {
      gotoXY(x*10,22);
      printf("%c",choose2);
        flag=1;

   }
   if(flag==1)
   {  //Rows
       if((board2[1] == p2 && board2[2] == p2 && board2[3] == p2) ||  (board2[4] ==p2 && board2[5]==p2 && board2[6]==p2) || (board2[7] ==p2 && board2[8]==p2 && board2[9]==p2)
            // Columns
           ||(board2[1] ==p2 && board2[4]==p2 && board2[7]==p2) || (board2[2] ==p2 && board2[5]==p2 && board2[8]==p2) || (board2[3] ==p2 && board2[6]==p2 && board2[9]==p2)
             // Diagonals
            || (board2[1] ==p2 && board2[5]==p2 && board2[9]==p2) || (board2[3] ==p2 && board2[5]==p2 && board2[7]==p2) )

            {
            gotoXY(60,34);
           printf("**** %s, win ****",player2);
           exit(0);
            }

       else{
            count++;
        if(count>=9)
        {   gotoXY(60,34);
            printf("**** Game draw ****");
              exit(0);

        }
                move=1;
       }
    }
}
}
}
}
int draw_board()
{
    int i=0,j=0,k=0;

    for(i=65;i<=95;i++)
    {
       gotoXY(i,16);
       printf("-");
       gotoXY(i,20);
       printf("-");

    }
    for(j=12;j<=24;j++)
    {
        gotoXY(75,j);
        printf("*");
        gotoXY(85,j);
        printf("*");

    }

}
