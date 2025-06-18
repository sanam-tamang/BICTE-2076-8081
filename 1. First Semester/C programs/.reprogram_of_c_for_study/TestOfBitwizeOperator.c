
//Bitwize operator test 

#include <stdio.h>
#include <conio.h>

int main(){
    int a=13;
    int sv=4; 
    
    printf("\nLeft Shift without value %d<<1=%d",a,a<<1);
     printf("\nRight Shift without value %d>>1=%d",a,a>>1);

    printf("\nLeft Shift %d<<%d=%d ",a,sv,a<<sv);
    printf("\nRight Shift %d>>%d=%d ",a,sv,a>>sv);
   

    return 0;
}

/*

**Left Shift:
Suppose
a=13 
left shift=4

binary form of 13 is
0000 0000 0000 1101
left shift is 4 so
it's shifted left till 4
0000 0000 1101 0000

1      1    0     1     0    0    0    0
128   64    32    16    8    4    2    1

128+64+16=208


**Right Shift :

suppose a=13 
right shift is 2 
binary form of 13 is
0000 0000 0000 1101
when right shifted the binary number by 2
0000 0000 0000 0011
   
   0    0   1   1
   8    4   2   1
   
   2+1=3

   so value is 3 in right shift

*/
