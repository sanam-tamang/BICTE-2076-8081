
#include<stdio.h>
int add();

int main()
{

int a;

   a=add();

  printf("Addition is %d ",a);

 return 0;

}

int add()
{

int a,b,sum;
   printf("\n Enter two number ");
   scanf("%d%d",&a,&b);
sum=a+b;
   return sum;




}


