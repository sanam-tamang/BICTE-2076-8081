
/* This program is not useful in general terms because
when you enter something that only show in that time due to 
same in the memery of the variable but the what you entered through your
keyword it saves but if you only want to access from file in read only mode
you should use EOF = End Of the File processing method */
#include<stdio.h>
int main()
{
    FILE *fp;
    int n,i;
    char name[20],faculty[20];
    int roll_no;

    fp=fopen("Student information1.txt","w");

    printf("\n How many student's information do you want to add ");

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Student name : ");
        scanf("%s",&name);

        printf("\n Enter your faculty :");
        scanf("%s",&faculty);

        printf("\n Roll no : ");
        scanf("%d",&roll_no);

        fprintf(fp,"%s\t%s\t%d\n",name,faculty,roll_no);


    }

    fclose(fp);

    fp=fopen("student information1.txt","r");

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%s%s%d",name,faculty,&roll_no);

        printf("%s\t%s\t%d\n",name,faculty,roll_no);
    }

    return 0;


}
