
/* It compares the string till n */
/* the value most be same to equal

* it cannot depart the value in lower case  or upper case

like SANAM & sanamtamang & comparison  5  is not equal
sanam & sanamtamang & comparison 5 is equal */


#include<stdio.h>
#include<string.h>
int main()
{
    char name[10],firstlast[20];
    int n;

    puts("\n Enter your first name ");
    gets(name);

   puts("\n Enter your first name & last name together ");
   gets(firstlast);

   printf("\n Enter the comparison number ");
   scanf("%d",&n);

   if(strncmp(name,firstlast,n)==0)
   {
       printf("\n Both strings are equal ");
   }
   else{
    printf("\n Both strings are not equal ");
   }

}
