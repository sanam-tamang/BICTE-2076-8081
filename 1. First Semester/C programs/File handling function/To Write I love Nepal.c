

#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    fp=fopen("Nepal.txt","w");
    fprintf(fp,"Nepal is beautiful country all around the world ");
    fclose(fp);

    fp=fopen("Nepal.txt","a");
    fprintf(fp,". That's why many people in the world wants to visit Nepal." );
    fclose(fp);


    getch();
}
