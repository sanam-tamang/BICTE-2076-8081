
#include<stdio.h>
void add(int c,int d);

int main()
{
 int a,b;

    printf("\n Enter two number ");
    scanf("%d%d",&a,&b);

    add(a,b);

    return 0;
}

void add(int c,int d)
{


    printf("Addition of %d  and %d number is %d",c,d,c+d);
}

