
#include<stdio.h>
#include<windows.h>
int main()
{
    int i,x=100;

    while(1)
    {
    for(i=1;i<=10;i++)
    {  printf("%d ",i);
       Beep(i*x,1000);/*Here 1000 is time of sound */

       if(i==10)
       {

            for(i=9;i>=2;i--)
            {  printf("%d ",i);
               Beep(i*x,1000);

            }
        i=0;
       }

    }

    }

    return 0;
}
