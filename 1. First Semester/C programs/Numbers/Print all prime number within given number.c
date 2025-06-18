#include<stdio.h>

int main()
{
 int num,i,count=0,j;
 printf("Enter a number \n");
 scanf("%d",&num);
 printf("The Prime numbers upto %d are\n",num);
 for(i=1;i<=num;i++)
{
 count=0;

 for(j=1;j<=i;j++)
{
 if(i%j==0)
{
 count++;
}

}
 if(count==2)
{
 printf("%d\t",i);

}


}
return 0;

}



