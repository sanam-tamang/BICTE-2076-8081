
//Addition of n to n numbers 
#include <stdio.h>
#include <conio.h>
int AddN(int a,int b);

int main(){
 
 int num1,num2,result=0;
 printf("\nEnter first number ");
 scanf("%d",&num1);
 printf("Enter second number ");
 scanf("%d",&num2);
 result=AddN(num1,num2);

 printf("\n\nThe addition of number %d from %d is %d ",num1,num2,result);

return 0;

}

int AddN(int a,int b){
    int Addnresult;
    Addnresult=0;
    printf("\nThe adding numbers are \n ");
        for(int i=a;i<=b;i++){
            printf("%d ",i);
            Addnresult=Addnresult+i;

    }
    return Addnresult;
}