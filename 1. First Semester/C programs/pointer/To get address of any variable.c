
#include<stdio.h>
int main()
{
    int a=5;
     int  b=5;
    float c=5;

    printf("\nThe value of integer 1 is %d and location of that number is %u ",a,&a);
    printf("\nThe value of integer 2 is %d and location is %u ",b,&b);
    printf("\nThe value of float is %0.2f and location is %u ",c,&c);


}
/*
Output:
The value of integer 1 is 5 and location of that number is 6356748
The value of integer 2 is 5 and location is 6356744
The value of float is 5.00 and location is 6356740

Explaination:

 To know the address of any variable you have to
 indicate that sign with '&' into the printf  . you can write %d in
 the address location or %u too.

 Every variable have different different memory address.
 In case of same value also be different memory address
 you can see first and second is same value but a=6356748
 and b=6356744 memory address have.
 The memory address of variable depends on your computer
 address may be different different according to computer.


*/
