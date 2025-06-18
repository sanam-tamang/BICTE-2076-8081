
#include<stdio.h>
#include<stdlib.h>
int rec(int);//rec is a calling function
int main()
{
    int a,sum;

    printf("\nEnter  number ");
    scanf("%d",&a);
    sum=rec(a);

    printf("After addition number is %d ",sum);
}
int rec(int n1)
{
    int num;

    if(n1>=1)
    {
        num=n1+rec(n1-1);
        printf("\nn1=%d",n1);
        return num;
    }

}
/*
Output:
Enter  number 100
After addition number is 5050

Explaination:
suppose you have entered a=5
after then it goes on rec function
num is initialize in the function

5+4+3+2+1=15

*/
