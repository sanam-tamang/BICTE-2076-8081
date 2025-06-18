
#include<stdio.h>
int main()
{
    int a,b,t,*p1,*p2;
    printf("\nEnter a first number ");
    scanf("%d",&a);

    printf("\n Enter a second number ");
    scanf("%d",&b);
    printf("\nBefore swapping A value is %d and B value is %d \n",a,b);
    p1=&a;/* TO store address of a  to p1*/
    p2=&b;/* TO store address of b  to p2*/

     t=*p1;
    *p1=*p2;
    *p2=t;

    printf("\n Value after swapping  a is %d and b is %d ",a,b);

    return 0;
}
/*Output:

Enter a first number 10

 Enter a second number 20

Before swapping A value is 10 and B value is 20

 Value after swapping  a is 20 and b is 10

 Explaination:
 if u only write p1 at the printf it store some memory
 address and if you write *p1 it stores the value of a

 printf("%d",p1);//store memory address
 printf("%d",*p1);//store value of variable



*/
