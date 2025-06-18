

#include<stdio.h>

int main()
{
    int i=1,n;

    printf("\n Enter multiplication number ");

    scanf("%d",&n);

   while(i<=10)
   {
       printf("%dx%d=%d\n",n,i,n*i);
       i++;
   }
}

