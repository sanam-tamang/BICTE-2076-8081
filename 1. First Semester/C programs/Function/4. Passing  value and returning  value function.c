
#include<stdio.h>
int add(int,int);

int main()
{


int a,b,sum,addition;
   printf("\n Enter two number ");
   scanf("%d%d",&a,&b);

   addition=add(a,b);

  printf("Addition is %d ",addition);

 return 0;

}

int add(int c, int d )
{

int sum;
  sum=c+d;
   return sum;




}





