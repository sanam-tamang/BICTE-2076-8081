
#include<stdio.h>

int main()
{
    int num,rev=0;

    printf("\n Enter a positive number ");
    scanf("%d",&num);

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

 Enter a positive number 726267896
 Six  Nine  Eight  Seven  Six  Two  Six  Two  Seven

 Explaination:
 switch is under the while loop

 */
