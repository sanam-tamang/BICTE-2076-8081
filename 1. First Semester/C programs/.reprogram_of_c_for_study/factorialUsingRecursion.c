
//Factorial using recursive function 
#include <stdio.h>
#include <conio.h>
int fact(int a);
int main(){
    int num,fnum;
    printf("\nEnter number ");
    scanf("%d",&num);
    fnum=fact(num);
    printf("The factorial is %d ",fnum);
    return 0;

}

int fact(int a){
    if(a==1){//if value is 1 then factorial is 1 
        return 1;

    }
    else
    {
        return a*fact(a-1);
    }
    
}