
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,dis;
    printf("\nEnter first co-efficient of x (ax^2): ");
    scanf("%d",&a);

    printf("\nEnter second co-efficient of x (bx): ");
    scanf("%d",&b);

    printf("\nEnter third number of c: ");
    scanf("%d",&c);
     dis=b*b-4*a*c;
    switch(dis)
      {
          case 0:
          printf(" %d is Equal number ",dis);
          break;
           default:
           	 if(dis<0)
          {
              printf("%d is Imaginary",dis);
          }
         else if(dis>0)
          {
              printf("%d is Greater and unequal ",dis);
          }
       
           break;
      }
      return 0;

}
