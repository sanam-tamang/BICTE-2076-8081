//single prime number 
#include <stdio.h>
#include <conio.h>

int main(){
    int num,i,j,count=0;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
    }

    }

    if(count==2){
        printf("%d is prime number ",num);
    }
    else
    {
        printf("%d is not prime number ",num);

    }
return 0;    
   
}