
#include<stdio.h>
#include<string.h>
int main()
{
    char n[]="Name Not Important";
    char st[15];
    printf("%s",strncpy(st,n,9));
    printf("\n%s",n+9);
    return;
}
/*
Output:
Name Not
Important
*/
