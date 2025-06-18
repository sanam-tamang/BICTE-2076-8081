
//pointer function in c

#include <stdio.h>
#include <conio.h>
int add(int,int); // normal fucntion call
int main()
{
    int (*sum)(int , int ); //pointer to function calling 
    sum=add;// sum carry's the address of addition we can also write this sum=&add; 
    //only sum holds that address if parameter passed then not
   // int s=sum(10,50); -> we can also print s 
    printf("\nThe addition is %d ",sum(10,50));
    return 0;
}

int add(int x, int y)
{
   return x+y;
}