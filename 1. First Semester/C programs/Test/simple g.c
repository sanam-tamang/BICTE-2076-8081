
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define  R 8
#define C  120

#define Left 75
#define Right 77
#define Up 72
#define Down 80

char Map[R][C],key,boarder='=',fo=131;

int direction,i,j,dirX,dirY;

void gotoXY(int x, int y);
void run_W();
void move();
void move2();
void draw();
void Object();
void Enemies();
void Con_G_K();
int main()
{
   run_W();
   Object();
   Enemies();
   while(1)
   { Sleep(50);
    Con_G_K();
     move();
     draw();
   }
   return 0;

}
void move2()
{
    char temp=Map[i][j];
    Map[i][j]=Map[i+dirX][j+dirY];
    Map[i+dirX][j+dirY]=temp;

}
void move()
{
   for(i=0;i<R;i++)
   {
       for(j=0;j<C;j++)
       {
           switch(Map[i][j])
          {
          case 'Q':
              if(Map[i+dirX][j+dirY]==' ')
              {
                 move2();
                 return;
              }


            if(Map[i+dirX][j+dirY]==fo)
              {
                 Map[i+dirX][j+dirY]=' ';
                 move2();
                 Enemies();
                 return;

              }

          }
       }
   }
}
void Con_G_K()
{

    while(kbhit())

        key=getch();

        if(key==Left)
        {
            dirX=0;
            dirY=-1;
        }
        else if(key==Right)
        {
            dirX=0;
            dirY=1;
        }
        else if(key==Up)
        {
           dirX=-1;
           dirY=0;
        }
        else if(key==Down)
        { dirX=1;
          dirY=0;
        }
return;
}

void Enemies()
{
     srand(time(NULL));

while(1)
{
     i=rand()%(R-3);
     j=rand()%(C-3);
        if(Map[i][j]!='Q' && Map[i][j]!=boarder)
        {
            for(int x=0;x<1;x++)
                for(int y=0;y<2;y++)
                Map[i+x][j+y]=fo;
                return;
        }
    }
}

void Object()
{
    //this is a head of something obect
      i=rand()%(R-1);
   j=rand()%(C-1);
    Map[i][j]='Q';

}
void draw()
{
    for(i=0;i<R;i++)
    {    gotoXY(R,i+5);
        for(j=0;j<C;j++)
        {
            printf("%c",Map[i][j]);
        }
    }
}
void run_W()
{
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(i==0 || i==R-1 )
            {
                Map[i][j]=boarder;

            }
            else
            {
                Map[i][j]=' ';
            }
        }
    }
}
void gotoXY(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
