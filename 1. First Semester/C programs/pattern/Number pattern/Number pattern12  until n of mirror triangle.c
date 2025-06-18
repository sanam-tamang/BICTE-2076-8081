

#include<stdio.h>


int main()
{

 int i,j,k,l,n;

 printf("Enter a size of task ");
 scanf("%d",&n);

 for(i=1;i<n;i++)
 {
     printf("\n ");
     for(j=1;j<i;j++)
     {
         printf("  ");
     }

     for(k=i;k<n;k++)
     {
         printf("%d",k);
     }
     for(l=i+1;l<n;l++)
     {
         printf("%d",l);
     }

 }

}

/*
Output:
Enter a size of task 7

 12345623456
  234563456
   3456456
    45656
     566
      6
*/



