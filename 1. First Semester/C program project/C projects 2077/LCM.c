
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,LCM,c=1,i=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
     for(i=0;i<a*b;i++) 
     {
     if(c%a==0 && c%b==0) 
     {
          LCM=c;
          break;
     }
     c++;
     }
    printf("LCM of %d and %d is %d number ",a,b,LCM);
    return 0; 
}

