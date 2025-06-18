
#include<stdio.h>
#include<time.h>
#include<graphics.h>

int main()
{
    initwindow(720,600,"Sanam");
    time_t t1;
   t1=time(NULL);
    moveto(10,10);

  rectangle(300,200,100,100);

  circle(300,200,100);

    getch();
}
