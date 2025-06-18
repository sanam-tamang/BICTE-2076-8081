
#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    char name[10];
    char designation[15];
    float salary;

};
int main()
{
    int i,size;

    printf("\nHow many employee's information do you want to add right now ");
    scanf("%d",&size);

    struct employee e1[size];

    for(i=0;i<size;i++)
    {
        printf("\nEnter %d employee's information \n",i+1);
        printf("\nID: ");
        scanf("%d",&e1[i].id);
        printf("\nName: ");
        scanf("%s",&e1[i].name);
        printf("\nDesignation: ");
        scanf("%s",&e1[i].designation);
        printf("\nSalary: ");
        scanf("%f",&e1[i].salary);
    }
    printf("\nThe employee information is given \n");
     for(i=0;i<size;i++)
    {
        printf("\nID:%d",e1[i].id);
        printf("\nName:%s",e1[i].name);
        printf("\nDesignation:%s",e1[i].designation);
        printf("\nSalary:%0.2f",e1[i].salary);
    }
}
/*
Output:
Name: Hari

Designation: Mason

Salary: 25000

Enter 2 employee's information

ID: 2

Name: Ram

Designation: Helper

Salary: 21000

The employee information is given

ID:1
Name:Hari
Designation:Mason
Salary:25000.00
ID:2
Name:Ram
Designation:Helper
Salary:21000.00

*/
