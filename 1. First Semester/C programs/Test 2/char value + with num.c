
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char *pa,ch,ch2[100];
    int i=0;
    printf("\nEnter \n");
    pa=malloc(100*sizeof(pa));
    while(1)
    {
        pa[i]=getch();

        if(pa[i]=='\r')
        {
            i=0;

                while(pa[i]!='\0')
                {       ch=pa[i];

                         printf("%c",strcpy(ch2[i],ch));
                       i++;

                }

        }
        else
        {
            printf("%c",pa[i]);
            i++;
        }

    }



}
