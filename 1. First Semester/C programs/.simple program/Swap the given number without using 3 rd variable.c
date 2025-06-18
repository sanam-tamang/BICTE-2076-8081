
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter value of A an B ");
    scanf("%d%d",&a,&b);

  printf("\nBefore swap the value A is %d B is %d ",a,b);
   a=a+b;
   b=a-b;
   a=a-b;

    printf("\nAfter swap the value A is %d B is %d ",a,b);
}

