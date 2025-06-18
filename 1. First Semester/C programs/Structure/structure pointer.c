
#include<stdio.h>
#include<conio.h>
struct employee
{
    int emp_id;
    char name[15];
    int age;
    float salary;
};
int main()
{
    struct employee e1;
    struct employee *pstruct;

    printf("\nEnter employee id: ");
    scanf("%d",&e1.emp_id);
    printf("Enter name: ");
    fflush(stdin);
   gets(e1.name);
    printf("Enter age: ");
    scanf("%d",&e1.age);
    printf("Enter salary: ");
    scanf("%f",&e1.salary);

    pstruct=&e1;

    printf("\n*** Data On Employee ***");

    printf("\nEmployee id: %d",pstruct->emp_id);
    printf("\nEmployee name: %s",pstruct->name);
    printf("\nEmployee age: %d",pstruct->age);
    printf("\nEmployee salary: %0.2f",pstruct->salary);
}/**

Enter employee id: 123
Enter name: Sanam Tamang
Enter age: 18
Enter salary: 25000

*** Data On Employee ***
Employee id: 123
Employee name: Sanam Tamang
Employee age: 18
Employee salary: 25000.00*/
