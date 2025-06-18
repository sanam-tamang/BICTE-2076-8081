#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define Dx  20
#define Dy 38

#define UP 72 /*This four keyboard already define in system to control  */
#define DOWN 80
#define LEFT 75
#define RIGHT 77
char Map[Dx][Dy],key,GT=240,Bo_S=176,fo=235,replay;
/* gt is game tail Bo_S is boarder symbol and fo is food */
int i,j,dirX,dirY,body[Dx*Dy][2],life=1,numofbody=0,score=0,oldBodyCor[Dx*Dy][2],direction;

void food();
void Boarder();
void Snake();
void Score();
void Draw();
void GotoXY(int x, int y);
void Move();
void freemove();
void Control();
void grow();
void reload();
void hidecursor();


int main()
{
    hidecursor();
    Boarder();
    Snake();
    food();
    while(life)
     {
    Sleep(100);
    Control();
    Move();
    Draw();
     }

}

void hidecursor()
 {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = TRUE;/* TRUE or 1 2 ......*/
    info.bVisible = FALSE;/* FALSE or 0 */
    SetConsoleCursorInfo(consoleHandle, &info);
}
void reload()
{    GotoXY(20,30);
    printf("DO you want to play again(y/n) ");
   replay=getch();
    if(replay=='Y' || replay=='y' )
    {
    score=0;
    numofbody=0;

   life=1;
    system("cls");
    main();
    return;
    }
    else if(replay=='N' || replay=='n')
    {    GotoXY(20,32);
       printf("Thanks for playing us\n\n");
       exit(0);
    }
    else{
        reload();
        return;
    }

}
void grow()
{
	int k;
	
    if(numofbody==0)
    {
       ++numofbody;
        Map[body[0][1] - dirX][body[0][0] - dirY] = GT;
        body[1][1] = body[0][1] - dirX;
        body[1][0] = body[0][0] - dirY;
        return;
    }
    for ( k = 0; k <= numofbody; ++k) {
        if (k == numofbody)
        {
            body[k + 1][1] = oldBodyCor[k][1];
            body[k + 1][0] = oldBodyCor[k][0];
            Map[body[k + 1][1]][body[k + 1][0]] = GT;
            ++numofbody;
            return;
        }
    }

  return;

}
void freemove()
{  int k;
 char headx=i;
    char heady=j;
   /* swap value to move the snake*/
   char temp=Map[i][j];
   Map[i][j]=Map[i+dirX][j+dirY];
   Map[i+dirX][j+dirY]=temp;

   body[0][1]=i+dirX;/*jaha food khayo tyahi * basne  Yo same ho tal snake ko ma gare jastaii */
   body[0][0]=j+dirY;/*yasko value change hunxa yadi snake ko talako value arkaii vayeko vaye */

    for(k=1;k<=numofbody;++k)
    { if(k==1)
        {
        oldBodyCor[k][1]=body[k][1];
        oldBodyCor[k][0]=body[k][0];

        char temp=Map[body[k][1]][body[k][0]];
        Map[body[k][1]][body[k][0]]=Map[headx][heady];
        Map[headx][heady]=temp;
        body[k][1]=headx;
        body[k][0]=heady;
         continue;
        }

        oldBodyCor[k][1]=body[k][1];
        oldBodyCor[k][0]=body[k][0];

        char temp=Map[body[k][1]][body[k][0]];
        Map[body[k][1]][body[k][0]]=Map[oldBodyCor[k-1][1]][oldBodyCor[k-1][0]];
        Map[oldBodyCor[k-1][1]][oldBodyCor[k-1][0]]=temp;

        body[k][1]=oldBodyCor[k-1][1];
        body[k][0]=oldBodyCor[k-1][0];
    }

  return;
}
void Move()
{
   for(i=0;i<Dx;i++)
   {
       for(j=0;j<Dy;j++)
       {
           switch(Map[i][j])
           {
           case '@':
            if(Map[i+dirX][j+dirY]==' ')
            {
             freemove();
             return;
            }
            else if(Map[i+dirX][j+dirY]==fo)
            {    Beep(500,100);/**To generate the sound through windows.h header file */
                Map[i+dirX][j+dirY]=' ';//food khayepaxii khali rahanxa yo tesaile yesto gareko 
           /* Yo thau ma pani same naii
            ho kinki Map[i+dirX][j+dirY]=' ' lekhiyema & gyab hunxa anii
            same thau maii auxa */
            /* Yadi maile Yasto lekhina vane Map[i][j] lekhe vane random thau ma
            pugxa */
               ++score;
               freemove();
               grow();
               food();
               return;
            }
            else if(Map[i+dirX][j+dirY]==Bo_S || Map[i+dirX][j+dirY]==GT)
            {
                   life=0;
                   GotoXY(30,27);
                   Beep(1200,150);
                   Beep(1400,150);
                   Beep(1600,150);
                   Beep(1400,150);
                   Beep(1800,150);
                   /**To generate the sound through windows.h header file
                     first is sound and second one is time until it plays  */
                printf("*****You died*****");
                reload();

            }
           }
       }
   }
}
void Control()
{
    while(kbhit())

        key=getch();
    if((key==UP && direction!=DOWN )|| (key==DOWN && direction!=UP ) || (key==LEFT && direction!=RIGHT ) || (key==RIGHT && direction!=LEFT) )
    {
        direction=key;

        if(key==UP )
        {
            dirY=0;
            dirX=-1;
        }
        else if(key==DOWN  )
        {
         dirY=0;
         dirX=1;
        }
        else if(key==LEFT  )
        {
         dirY=-1;
         dirX=0;
        }
        else if(key==RIGHT )
        {
         dirY=1;
         dirX=0;
        }
    }
    else{

        return;
    }
    return;
}

void GotoXY(int x,int y)
{
   COORD coord;
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void Draw()
{  GotoXY(1,0);
   printf("Score: %d",score);
   for(i=0;i<Dx;i++)
   {   GotoXY(Dy/2,i+5);/** Yasle garda snake ko border ko thau change hunxa  */
       for(j=0;j<Dy;j++)
       {
           printf("%c",Map[i][j]);
       }
   }
}
void food()
{
    srand(time(NULL));
    while(1)
    {
    i=rand()%(Dx-3)+1;
    j=rand()%(Dy-3)+1;
    if(Map[i][j]!='@' && Map[i][j]!=GT)
    {
      Map[i][j]=fo;
      return;
    }
  }

}
void Snake()
{
    i=rand()%(Dx-3)+1;
    j=rand()%(Dy-3)+1;
    Map[i][j]='@';
    body[0][1]=i;
    body[0][0]=j;
}
void Boarder()
{
    for(i=0;i<Dx;i++)
    {
        printf("\n");
        for(j=0;j<Dy;j++)
        {
           if(i==0 || i==Dx-1  )
           {
              Map[i][j]=Bo_S;
           }
           else if( j==0 || j==Dy-1){
               Map[i][j]=Bo_S;
           }
           else
           {
               Map[i][j]=' ';
           }
        }
    }
    return;
}
