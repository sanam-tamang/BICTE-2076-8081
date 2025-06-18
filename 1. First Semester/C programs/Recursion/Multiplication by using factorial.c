
#include<stdio.h>
#include<conio.h>
int mult(int a,int b);
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nThe multiplication of %d and %d is %d ",a,b,mult(a,b));
    return 0;
}

int mult(int a,int b)
{
    if(b==0 || a==0){
        
        printf("\n The multiplication is 0 ");
    }
    else
    {
         return (mult(a,b-1)+a);
    
    }
    
    
    
}
