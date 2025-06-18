

#include<stdio.h>
#include<string.h>

int main()
{
    char x[10]= " Hi ";
    char y[25]= " Hello Everyone";

   strcpy(x,y);

   printf("\n The copy of y in x is that the %s ",x);
}
