#include <stdio.h>
#include <conio.h>
int main()
{
    int r,n=7;
    printf("Enter rotation of number %d: ",n);
    scanf("%d",&r);
    printf("\nRotation is %d times\n",r);
    printf("\nLeft rotation of number %d is %d",n,n<<r);
    printf("\nRight rotation of number %d is %d",n,n>>r);
    return 0;
}
