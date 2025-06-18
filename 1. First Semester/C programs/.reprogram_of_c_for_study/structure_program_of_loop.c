
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct test_of_loop{
    int roll_no;
    char name[25];

};

int main(){
  int n,i;
  printf("\nHow much students id do you want to keep records : ");
  scanf("%d",&n);

  struct test_of_loop t1[n];

  for(i=0;i<n;i++){
      printf("\nEnter: %d ",i+1);
  printf("\nRoll_no: ");
  scanf("%d",&t1[i].roll_no);
  printf("Name: ");
  fflush(stdin);//for input variable to do correct 
  gets(t1[i].name);
  }

  printf("\n\nShowing the record of the students ");

  for(i=0;i<n;i++){
  printf("\nRoll_no: %d\nName: %s",t1[i].roll_no,t1[i].name);
  }
  return 0;

}