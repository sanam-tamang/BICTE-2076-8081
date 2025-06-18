

#include<stdio.h>
#include<string.h>

int main()
{

 char ch[15];


     printf("\n Enter characters to perform task ");
     scanf("%s",&ch); /* location is not necessary in string */

     printf("\n The reverse is %s ",strrev(ch));

}
