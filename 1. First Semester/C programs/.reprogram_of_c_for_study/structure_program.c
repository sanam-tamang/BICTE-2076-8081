
#include <stdio.h>
#include <conio.h>

struct test{
    char name[20];
    float salary;
    int id;
    
    
};

struct test t1;//define object of structure test
int main(){

    printf("\n----Enter----");
    printf("\nId: ");
    scanf("%d",&t1.id);
    printf("Name: ");
    scanf("%s",&t1.name);
    printf("Salary: ");
    scanf("%f",&t1.salary);

    printf("\n\nId: %d \nName: %s \nSalary: %f ",t1.id,t1.name,t1.salary);


    return 0;
}