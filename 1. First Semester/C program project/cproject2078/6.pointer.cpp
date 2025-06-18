//add two number using pointer
#include <stdio.h>
int main(){
	int a,b,sum,*p1,*p2;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	sum=*p1+*p2;
	printf("\n\nThe sum of %d and %d is %d ",a,b,sum);
	return 0;
}
