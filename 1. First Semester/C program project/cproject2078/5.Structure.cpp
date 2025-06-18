
//5.Structure
#include <stdio.h>
struct Student{
	char name[25],sex[10];
	int age;
};
int main(){
	int n=10,i;
	Student s1[n];
    for(i=0;i<n;i++){
    	printf("\nEnter the student %d information \n",i+1);
    	printf("Enter name: ");
    	scanf("%s",&s1[i].name);
    	printf("Enter age: ");
    	scanf("%d",&s1[i].age);
    	printf("Enter sex(Male or Female or Others): ");
    	scanf("%s",&s1[i].sex);
	}
	printf("\n\n********Displaying the information of students*********");
	for(i=0;i<n;i++){
		printf("\n\nStudent %d information:\n",i+1);
		printf("Name: %s ",s1[i].name);
		printf("\nAge: %d ",s1[i].age);
		printf("\nSex: %s ",s1[i].sex);
	}
	
	return 0;
}
