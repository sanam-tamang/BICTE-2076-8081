
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp=fopen(__FILE__,"r");
    /*
    while(1)
    {
        ch=getc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    */
    do
    {
        ch=getc(fp);
        printf("%c",ch);

    }while(ch!=EOF);
    fclose(fp);
    return 0;

}



