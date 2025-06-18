
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<stdio.h>

#define Dx 24
#define Dy 50

char Map[Dx][Dy],key;

int GameSpeed=50,oldbody[Dx][Dy],dirX,dirY,body[Dx*Dy][2],alive=1,NumOfBody=0,grow=0,x,y;

void GotoXY(int L, int C);
void Draw();
void Food();
void ContKbhit();
void Move();
void Snake();
void GetMap();
void GetEnemy();
void freemove();
int main()
{

      GetMap();
      Snake();
      GetEnemy();
      while(alive)
      {
      Sleep(GameSpeed);
      ContKbhit();
      Move();
      Draw();
      }

return 0;
}

void Move()
{

  for(x=0;x<Dx;x++)
  {
      for(y=0;y<Dy;y++)
      {
         switch(Map[x][y])
         {
         case '@':
            if(Map[x+dirX][y+dirY] == ' ')
            {
            freemove();
            return;
            }
            else if(Map[x+dirX][y+dirY] == '&')
            {
                Map[x+dirX][y+dirY] =' ';
                freemove();
                GetEnemy();

               return;
            }
            else if(Map[x+dirX][y+dirY]== '#'  || Map[x+dirX][y+dirY]== '*' )
            {
                alive=0;
                exit(0);
            }
      }
  }
  }
}
void freemove()
{
  char temp=Map[x][y];
  Map[x][y]=Map[x+dirX][y+dirY];
  Map[x+dirX][y+dirY]=temp;

}
void ContKbhit()
{

  if(kbhit())
   {
      key=getch();
   }

       if(key=='w')
       {

           dirY=0;
           dirX=-1;

       }
       else if(key=='s')
       {
           dirX=1;
           dirY=0;
       }
       else if(key=='a')
       {

          dirY=-1;
          dirX=0;

       }
       else if(key=='d')
       {   dirX=0;
           dirY=1;

       }

return;
}
void Snake()
{
     x=rand()%(Dx-3)+1;
     y=rand()%(Dy-3)+1;
    Map[x][y]='@';
    body[0][1]=y;
    body[0][0]=x;
}
void GetEnemy()
{
  srand(time(NULL));
  while(1)
  {
     fflush(stdout);
   x=rand()%(Dx-3)+1;
   y=rand()%(Dy-3)+1;
      if(Map[x][y]!='@')
      {
          Map[x][y]='&';
          return;
      }
  }

}

void GotoXY(int L,int C)
{
    COORD coord;
    coord.X=L;
    coord.Y=C;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void GetMap()
{


    for(x=0;x<Dx;x++)
    {
        for(y=0;y<Dy;y++)
        {
           if(x==0 || x==Dx-1)
           {
               Map[x][y]='#';
           }
           else if(y==0 || y==Dy-1)
           {
               Map[x][y]='#';
           }
           else{
            Map[x][y]=' ';
           }

        }
    }
    return;
}
void Draw()
{

  for(x=0;x<Dx;x++)
  { GotoXY(Dy,x);
      for(y=0;y<Dy;y++)
      {
          printf("%c",Map[x][y]);
      }
  }

}



