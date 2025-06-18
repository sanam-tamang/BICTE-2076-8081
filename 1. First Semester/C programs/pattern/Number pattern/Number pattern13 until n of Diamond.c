


/*  Number pattern of diamond */

#include<stdio.h>

int main()
{
    int i,j,k,l,n;

    printf("Enter the size of pattern ");
    scanf("%d",&n);

/* First triangle  starts */
    for(i=1;i<n;i++)
    {
        printf("\n");
        for(j=i;j<n;j++)
        {
            printf(" ");

        }
        for(k=2;k<i;k++)
        {
            printf("%d",k);
        }
        for(l=1;l<i;l++)
        {
            printf("%d",l);
        }
    }

    /* Second mirror triangle starts */

 for(i=1;i<n;i++)
 {
     printf("\n");
     for(j=1;j<i;j++)
     {
         printf(" ");
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
Enter the size of pattern 7

     1
    212
   23123
  2341234
 234512345
12345623456
 234563456
  3456456
   45656
    566
     6

*/




