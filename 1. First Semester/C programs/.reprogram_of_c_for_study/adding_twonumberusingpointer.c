//The program of adding two numbers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int *a,*b,sum;
    int na,nb;
    na=5;
    nb=6;

    a=&na;
    b=&nb;

    sum=*a+*b;
    printf("Sum of two number is %d ",sum);
    return 0;
    
}