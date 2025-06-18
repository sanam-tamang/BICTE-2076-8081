

#include<stdio.h>
int main()
{
    FILE *fp;
    int i,salary,n;
    char name[20],designation[20];

    fp=fopen("Employee information.txt","w");
    printf("\n How many employees information do you want to add ");
    scanf("%d",&n);



    for(i=0;i<n;i++)
    {



    printf("\n Enter %d employee information  \n",i+1);

    printf("\n Employee name :");

    scanf("%s",&name);

    printf("\n Designation :");
    scanf("%s",&designation);

    printf("\n Salary :");
    scanf("%d",&salary);


    fprintf(fp,"%s\t%s\t  %d\n",name,designation,salary);


    }

    fclose(fp);


    fp=fopen("Employee information.txt","r");


    for(i=0;i<n;i++)
    {
        fscanf(fp,"%s%s%d",name,designation,&salary);

        printf("%s\t\t%s\t\t%d\n",name,designation,salary);
    }

    fclose(fp);

    return 0;






}
