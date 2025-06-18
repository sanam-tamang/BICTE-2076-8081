
#include <stdio.h>
#include <conio.h>
int main(
   //under the this also works

)
{
    int i,j,n=9;
    printf("Plus Star pattern is shown below \n\n"
    )
    ;//this also works 
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(i==n/2)
          {
              printf("++");
            
          }
          else if(j==n-1
          )
          {
          	printf("**");
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

