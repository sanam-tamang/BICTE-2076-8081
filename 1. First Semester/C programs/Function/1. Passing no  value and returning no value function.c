

#include<stdio.h>
void add(); /* Arguments or parameter */

int main()
{
    add(); /* call function or calling function */

    return 0;
}

void add() /* called function */
{
    int a=10,b=15;

    printf("Addition of %d  and %d number is %d",a,b,a+b);
}
