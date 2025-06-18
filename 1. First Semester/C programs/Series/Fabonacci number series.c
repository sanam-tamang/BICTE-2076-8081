
/* Fabonacci  number series */


#include<stdio.h>

int main()
{
    int n,a=0,b=1;
    int c=a+b;
    printf("\n Enter a number to perform a fabonacci's numbers series task ");
    scanf("%d",&n);
  while(c<=n)
  {
    printf("%d\t",c);
    c=a+b;
    a=b;
    b=c;
  }
    return 0;
}

/*output:
Enter a number to perform a favonacci's numbers series task 10
1       1       2       3       5       8

*/

