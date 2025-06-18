//You should embeded the graphics.h header file */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;

    char *ch;
    initgraph(&gd,&gm,ch);
    printf("hello everyone how are you ");

    getch();

     return 0;

}
