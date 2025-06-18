

#include<stdio.h>
struct student
{
    int id;
    char name[15];
    char level[15];
};

int main()
{
    struct student s;

    printf("\nid :");
    scanf("%d",&s.id);

    printf("Name :");
    scanf("%s",&s.name);

    printf("Level :");
    scanf("%s",&s.level);




    printf("\n Student's id :%d \n name :%s \n Level :%s \n",s.id,s.name,s.level);


}
/*
Output:
id :1
Name :sanam
Level :Bachelor

 Student's id :1
 name :sanam
 Level :Bachelor

 */
