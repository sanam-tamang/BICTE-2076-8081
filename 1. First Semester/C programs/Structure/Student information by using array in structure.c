

#include<stdio.h>
struct student
{
    int id;
    char name[15],level[15];

};

int main()
{
    int n,i;

    printf("\n How many students information do you want to fill up ");
    scanf("%d",&n);

    struct student s[n];
    for(i=0;i<n;i++)
    {

   printf("\n---Enter--- %d student's  \n",i+1);
    printf("\nid :");
    scanf("%d",&s[i].id);

    printf("Name :");
    scanf("%s",&s[i].name);

    printf("Level :");
    scanf("%s",&s[i].level);
}


for(i=0;i<n;i++)
{
    printf("\n id :%d \n name :%s \n Level :%s  ",s[i].id,s[i].name,s[i].level);
}

   }
/*
Output:
 How many students information do you want to fill up 2

---Enter--- 1 student's

id :1
Name :Sanam
Level :Graduation

---Enter--- 2 student's

id :2
Name :Sandipa
Level :Graduation

 id :1
 name :Sanam
 Level :Graduation
 id :2
 name :Sandipa
 Level :Graduation

 */
