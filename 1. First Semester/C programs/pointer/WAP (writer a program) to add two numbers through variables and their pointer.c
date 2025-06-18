
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,*p1,*p2,sum;
    printf("Input the number 1 ");
    scanf("%d",&n1);
    printf("\nInput the number 2 ");
    scanf("%d",&n2);

    p1=&n1;
    p2=&n2;

    sum=*p1+*p2;

    printf("\n\nThe sum of entered number is %d ",sum);

    getch();

}
/*
Output:
Input the number 1 25

Input the number 2 15


The sum of entered number is 40

*/
