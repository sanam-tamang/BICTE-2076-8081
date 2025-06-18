
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter value of A an B ");
    scanf("%d%d",&a,&b);

  printf("\nBefore swap the value A is %d B is %d ",a,b);
    c=a;
    a=b;
    b=c;

    printf("\nAfter swap the value A is %d B is %d ",a,b);
}
