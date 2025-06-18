

#include<conio.h>
#include<graphics.h>
#include<stdio.h>

int main()
{  int click;
    initwindow(700,600,"Insert image");

    while(1)
    {
        readimagefile("Vbetana.jpg",0,0,600,500);
        Sleep(200);
        readimagefile("Vfunpark1.jpg",0,0,600,500);
        Sleep(200);
        readimagefile("Vfunpark2.jpg",0,0,400,500);
        Sleep(200);

    }
   getch();
   return 0;

}
