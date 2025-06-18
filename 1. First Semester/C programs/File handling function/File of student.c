
#include<stdio.h>

int main()
{
    FILE *fp;
    int i,roll,n;
    char name[20],faculty[20];
    fp=fopen("student.txt","w");
    printf("\n How many students' information do you want to keep ");
    scanf("%d",&n);

   fprintf(fp,"Roll_no\tName\tfaculty\n");
    for(i=0;i<n;i++)
    {
        printf("\n Enter student roll number, name, and faculty ");

        scanf("%d%s%s",&roll,&name,&faculty);

        fprintf(fp,"%d\t %s\t %s\n",roll,name,faculty);
    }

    fclose(fp);



    fp=fopen("student.txt","r");

    for(i=0;i<n;i++)
    {

        fscanf(fp, "%d%s%s",&roll,&name,&faculty);
        printf("%d\t%s\t%s\n",roll,name,faculty);

    }
    fclose(fp);
    return 0;


}
