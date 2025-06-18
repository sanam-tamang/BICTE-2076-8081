#include <stdio.h>
#include <conio.h>
int main()
{
    int rt,n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter rotation of number %d: ",n);
    scanf("%d",&rt);
    printf("\nRotation is %d times\n",rt);
    printf("\nLeft rotation of number %d is %d",n,n<<rt);
    printf("\nRight rotation of number %d is %d",n,n>>rt);
    return 0;
}
