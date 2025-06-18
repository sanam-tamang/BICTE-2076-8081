
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char para[200];
    char c;


  fp=fopen("C programing.txt","w");

    printf("\nWrite something about C programing ");
    printf("\n\nAfter finishing writing a paragraph press tab key \nand press enter key \n\n");
    scanf("%[^\t]s",para);
    fprintf(fp,"%s",para);

    fclose(fp);

    fp=fopen("C programing.txt","r");
    while(1)
    {


    if(fp==NULL)
    {
        printf("\nFile not found ");
    }
    else
    {
        c=fgetc(fp);

        if(c==EOF)
        {
            break;

        }
        printf("%c",c);
    }
    }
    fclose(fp);


}
