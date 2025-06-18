

#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter how many numbers are there ");
    scanf("%d",&n);
    int num[n];

    printf("\n Enter number separated with space ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n The Decrypted ASCII code \n");
    for(i=0;i<n;i++)
    {
        printf("%c",num[i]);
    }

   return 0;
}
/*
Output:

 Enter how many numbers are there 11

 Enter number separated with space 83 97 110 97 109 89 111 110 106 97 110

 The Decrypted ASCII code
SanamYonjan

*/
