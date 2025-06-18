#include <stdio.h>
#include <conio.h>
union stu
{
  int id;  
  char name[30];
}s1;
int main()
{
    printf("Enter id of student: ");
    scanf("%d",&s1.id);
    printf("Enter name of student: ");
    scanf("%s",&s1.name);
    printf("\n***Record of student is***: \n");
    printf("Student id: %d\n",s1.id);
    printf("Student name : %s ",s1.name);
    return 0;
}

