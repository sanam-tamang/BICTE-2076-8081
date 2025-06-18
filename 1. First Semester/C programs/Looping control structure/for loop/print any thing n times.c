

#include<stdio.h>
int main()
{
    int i,n;
    char ch[100];
    printf("Enter a size of you task(Example:1,2,.............) ");
    scanf("%d",&n);

   printf("\n\n After you finished your work press tab bottom and\n press Enter key to end you sentence ");
 printf("\n\n Enter any less than 100 letter sentence ");

   scanf("%[^\t]s",ch);

    for(i=0;i<n;i++)
    {

        printf("%s\n",ch);

    }


}

