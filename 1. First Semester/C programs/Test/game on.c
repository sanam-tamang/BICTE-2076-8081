
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

#define R   32
#define C   32

#define Left 77
#define Right 75
#define Up 72
#define Down 80
char Map[R][C],key;

int i,j,direction,dirX,dirY,turn=1;
void Khbhit();
void freemove();
void Get_Map();
void move();
void Draw();
void gotoXY(int x, int y);
void Player();

int main()
{
    Get_Map();
    Player();

    while(turn)
    {
        Sleep(10);
        Khbhit();
        move();
        Draw();
    }
  return 0;

}

void Khbhit()
{

    key=getch();

    if(key==Left)
    {
        dirX=0;
        dirY=1;
    }
    if(key==Right)
    {
         dirX=0;
        dirY=-1;

    }
    if(key==Up)
    {
        dirX=-1;
        dirY=0;
    }
    if(key==Down)
    { dirX=1;
        dirY=0;

    }


}
void freemove()
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
            case '@':


                if(Map[i+dirX][j+dirY]=='-')
                {
                  freemove();
                  return;
                }
                else if(Map[i+dirX][j+dirY]==' ')
                {
                    freemove();
                    return;
                }


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
void Player()
{
    i=(R-1);
    j=(C-1);
    Map[i][j]='@';

}
void Draw()
{
    for(i=0;i<R;i++)
    {
       gotoXY(C/2,i);
        for(j=0;j<C;j++)
        {
            printf("%c ",Map[i][j]);
        }
    }
}
void Get_Map()
{
   for(i=0;i<R;i++)
   {
      for(j=0;j<C;j++)
      {
          if(i==0 || i==R-1 || j==0 || j==C-1 || i==R/2 || j==C/2 || i==R/4 ||
             j==C/4 || i==R-8 || j==C-8 || i+j==R-1 || i+j==R+R/2 || i+j==R/2 || i-j==R/2
             || i-j==R/R/2 || j-i==R/2  )
          {
            Map[i][j]='-';
          }
          else
          {
              Map[i][j]=' ';
          }
      }
   }
   return;
}
