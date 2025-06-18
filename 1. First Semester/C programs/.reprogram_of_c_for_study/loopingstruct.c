
#include <stdio.h>
#include <conio.h>

struct stu{
    char name[20];
    int age;

};

int main(){
    int i;
    struct stu s1[10];
    for(i=0;i<2;i++){
    printf("Enter name,age ");
    scanf("%s%d",&s1[i].name,&s1[i].age);

}
 for(i=0;i<2;i++){
    printf("Name:%s\nage:%d",s1[i].name,s1[i].age);
   
}
return 0;


}
