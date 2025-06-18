
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch[1000],c;
    fp=fopen("C programing.txt","w");
    printf("\nEnter simple introduction of C \n");
    printf("After finished introduction press tab and then press enter key \n\n");
    scanf("%[^\t]s",&ch);
    fprintf(fp,"%s",ch);
    fclose(fp);

    fp=fopen("C programing.txt","r");
    while(1)
    {

        if(fp==NULL)
        {
            printf("Sorry, file is not found ");
            exit(0);
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
    return 0;

}
