#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,temp,x,y=1,binary=0;

    char str[500];
    printf("Enter a sentence ");
    gets(str);
    i=0;
    printf("Encrypted binary code \n");
    while(str[i]!='\0')
    {
        y=1,binary=0;
        temp=str[i];
        while(temp!=0)
        {
            x=temp%2;
            binary=binary+(x*y);
            temp=temp/2;
            y=y*10;

        }
        printf("%d ",binary);
        i++;
    }
}
/*
Output:


*/
