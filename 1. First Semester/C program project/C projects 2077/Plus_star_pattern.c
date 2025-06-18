
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,n=8;
    printf("Plus Star pattern is shown below \n\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(i==n/2)
          {
              printf("**");
          }
          else if(j==n-1)
          {
          	printf("*");
		  }
          else
          {
              printf(" ");
          } 
       }
       printf("\n");
    }
    return 0;
}

