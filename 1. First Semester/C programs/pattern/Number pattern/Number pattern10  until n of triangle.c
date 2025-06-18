
#include<stdio.h>

int main()
{
    int i,j,k,l,n;

    printf("Enter the size of pattern ");
    scanf("%d",&n);

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

}


/* Output:
Enter the size of pattern 1

        1
       212
      23123
     2341234
    234512345
   23456123456
  2345671234567
 234567812345678

 */

