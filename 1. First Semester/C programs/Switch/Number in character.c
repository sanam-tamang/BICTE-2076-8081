

#include<stdio.h>

int main()
{
    int num,rev,sum=0,temp=0;

    printf("\n Enter a positive number ");
    scanf("%d",&num);

    while(num>0)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    }

    num=sum;
    while(num>0)
    {
     rev=num%10;
     num=num/10;

    switch(rev)
    {
  case 1:
    printf(" One ");
    break;
  case 2:
    printf(" Two ");
    break;
  case 3:
    printf(" Three ");
    break;
  case 4:
    printf(" Four ");
    break;
  case 5:
    printf(" Five ");
    break;
  case 6:
    printf(" Six ");
    break;
  case 7:
    printf(" Seven ");
    break;
  case 8:
      printf(" Eight ");
    break;
  case 9:
    printf(" Nine ");
    break;
  case 0:
    printf(" Zero ");
    break;
  default:
    printf("Wrong input ");
    break;
    }
    }

}

/*
Output:

 Enter a positive number 7896
 Seven  Eight  Nine  Six

 */

