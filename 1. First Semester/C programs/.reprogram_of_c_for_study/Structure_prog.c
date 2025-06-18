//Structure in loop 
#include <stdio.h>
#include <conio.h>

struct student{
    int roll;
    char name[20];

}s1[2];

int main(){
    int i;
 for(i=0;i<2;i++){
    printf("Enter %d, roll no ",i+1);
    scanf("%d",&s1[i].roll);
  
    printf("Enter %d, name ",i+1);
    scanf("%s",&s1[i].name);
 }

  printf("\n\n****The data in the list is****");
  for(i=0;i<2;i++)
    printf("\n\nROll:%d\nName:%s",s1[i].roll,s1[i].name);
    return 0;
}