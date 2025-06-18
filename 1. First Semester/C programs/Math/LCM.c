
//LCM Of two number 

#include <stdio.h>

int main()
{
    int a,b,LCM,comman=1,i;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
     for(i=0;i<a*b;i++) 
     {
     if(comman%a==0 && comman%b==0) //if both value divide one specific value 
     {
          LCM=comman;
          break;
     }
     comman++;
     }

   
    printf("LCM of %d and %d is %d ",a,b,LCM);
    return 0; 
}
/*
Output:
Enter two numbers: 5
15
LCM of 5 and 15 is 15
*/