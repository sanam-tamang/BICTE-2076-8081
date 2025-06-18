#include <stdio.h>
#include <conio.h>
union student
{
  char name[50];
  int id;  
}stu;
int main()
{
    printf("Enter id of student: ");
    scanf("%d",&stu.id);
    printf("Enter name of student: ");
    scanf("%s",&stu.name);
    printf("\n***Record of student is***: \n");
    printf("Student id: %d\n",stu.id);
    printf("Student name is : %s ",stu.name);
    return 0;
}

