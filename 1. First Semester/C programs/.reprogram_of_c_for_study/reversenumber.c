
//Reverse the number using pointer 
#include <stdio.h>
#include <conio.h>

int main()
{
    int num,num1=0,rev=0,rem=0,*temp;
   temp=&num1;//take the address of num1
    printf("\nEnter number to perform reverse ");
    scanf("%d",&num);
    num1=num;//when value of num1 gets changed value of temp is also changed
     //temp=&num // temp stores the memory address of num 
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        //when num is zero temp is stores also zero in pointer case if temp=&num is done 
        //if num is zero then it will be out of while loop
    }
    printf("The reverse number of %d is %d ",*temp,rev);
    return 0;

}

