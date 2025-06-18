
#include<stdio.h>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
#define SIZE 3

int Board[]={0,11,11,11,11,11,11,11,11,11};
int Board2[]={0,11,11,11,11,11,11,11,11,11};

void GotoXY(int x,int y);
void Draw();
void Get_Map();

void Player1();
void Player2();
void Choose_X_O();
void Name();

int i,j,pos1,pos2,p1,p2,count=0;
char cell[SIZE][SIZE],P1_Name[15],P2_Name[15];
char P1_Symbol,P2_Symbol;

int main()
{
    Name();
    Choose_X_O();
    Get_Map();
    Draw();
    Player1();

    return 0;
}
void Get_Map()
{
   for(i=1;i<=SIZE;i++)
   {
       for(j=1;j<=SIZE;j++)
       {
           cell[i][j]='_';
       }
   }
}
void Draw()
{
   for(i=1;i<=SIZE;i++)
   {
       for(j=1;j<=SIZE;j++)
       {    GotoXY((20+i*10),(5+j*5));
           printf("%c",cell[i][j]);
       }
   }
}
void Name()
{    GotoXY(10,5);
    printf("Enter player1 name: ");
    scanf("%s",P1_Name);
     GotoXY(10,7);
    printf("Enter player2 name: ");
    scanf("%s",P2_Name);

}
void Choose_X_O()
{
  int choice;
  system("cls");
  printf("%s,Choose Your Symbol ",P1_Name);
  GotoXY(10,2);
  printf("1--->>> X ");
   GotoXY(10,4);
  printf("2--->>> O");
   GotoXY(10,6);
  printf("3--->>> Exit");
   GotoXY(10,8);
  printf("Enter choice: ");
  scanf("%d",&choice);

  if(choice==1)
  {   system("cls");
      P1_Symbol='X';
      P2_Symbol='O';
      return;
  }
  if(choice==2)
  {   system("cls");
      P1_Symbol='O';
      P2_Symbol='X';
       return;

  }
  if(choice==3)
  {
     return exit(0);
  }
  else
  {
      Choose_X_O();
      return;
  }

}
void Player1()
{   int flag=0;
     GotoXY(30,2);
     printf("*****WELCOME TO TIC TAC TOE WORLD GAME*****");
     GotoXY(36,6);
     printf("%s's, Symbol is: %c ",P1_Name,P1_Symbol);
     GotoXY(30,25);
    printf("%s, Enter your position: ",P1_Name);
    scanf("%d",&pos1);

    if(Board[pos1]!=11 || Board2[pos1]!=11)
    {
       Player1();
       return;
    }
    else{
         Board[pos1]=p1;
        if(pos1>=1 && pos1<=3)
        {
            GotoXY((pos1*10)+20,10);
            printf("%c",P1_Symbol);
            flag=1;
        }
        if(pos1>=4 && pos1<=6)
        {
            GotoXY((pos1*10)-10,15);
            printf("%c",P1_Symbol);
            flag=1;
        }

        if(pos1>=7 && pos1<=9)
        {
            GotoXY((pos1*10)-40,20);
            printf("%c",P1_Symbol);
            flag=1;
        }
        if(flag==1)
        {  ++count;
            if((Board[1]==p1 && Board[2]==p1 && Board[3]==p1) || (Board[4]==p1 && Board[5]==p1 && Board[6]==p1) || (Board[7]==p1 && Board[8]==p1 && Board[9]==p1)
               || (Board[1]==p1 && Board[4]==p1 && Board[7]==p1)  || (Board[2]==p1 && Board[5]==p1 && Board[8]==p1) || (Board[3]==p1 && Board[6]==p1 && Board[9]==p1)
               || (Board[1]==p1 && Board[5]==p1 && Board[9]==p1) || (Board[3]==p1 && Board[5]==p1 && Board[7]==p1) )
              {

                GotoXY(30,30);
                printf("*****%s, is Winner*****",P1_Name);
                 exit(0);
            }

            else{
         if(count>=9)
            {
                GotoXY(30,30);
                printf("*****Draw Game*****");
                exit(0);
            }
                 Player2();
            }
        }
    }
}
void Player2()
{   int flag=0;
      GotoXY(36,7);
     printf("%s's, Symbol is: %c ",P2_Name,P2_Symbol);
     GotoXY(30,25);
    printf("%s, Enter your position: ",P2_Name);
    scanf("%d",&pos2);

    if(Board[pos2]!=11 || Board2[pos2]!=11 )
    {
       Player2();
       return;
    }
    else{
            Board2[pos2]=p2;
        if(pos2>=1 && pos2<=3)
        {
            GotoXY((pos2*10)+20,10);
            printf("%c",P2_Symbol);
             flag=1;
        }
      if(pos2>=4 && pos2<=6)
        {
            GotoXY((pos2*10)-10,15);
            printf("%c",P2_Symbol);
             flag=1;
        }
     if(pos2>=7 && pos2<=9)
        {
            GotoXY((pos2*10)-40,20);
            printf("%c",P2_Symbol);
             flag=1;
        }
    if(flag==1)
        {  ++count;
           if((Board2[1]==p2 && Board2[2]==p2 && Board2[3]==p2) || (Board2[4]==p2 && Board2[5]==p2 && Board2[6]==p2) || (Board2[7]==p2 && Board2[8]==p2 && Board2[9]==p2)
                || (Board2[1]==p2 && Board2[4]==p2 && Board2[7]==p2)  || (Board2[2]==p2 && Board2[5]==p2 && Board2[8]==p2) || (Board2[3]==p2 && Board2[6]==p2 && Board2[9]==p2)
                || (Board2[1]==p2 && Board2[5]==p2 && Board2[9]==p2) || (Board2[3]==p2 && Board2[5]==p2 && Board2[7]==p2) )
                {
                GotoXY(30,30);
                printf("*****%s, is Winner*****",P2_Name);
                exit(0);
                }

            else{
                 if(count>=9)
                    {
                        GotoXY(30,30);

                        printf("*****Draw Game*****");

                        exit(0);
                    }

                    Player1();
                }
        }
    }

}

void GotoXY(int x, int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
