/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void quiz(void);

int main()
{
    printf("Enter anything ");
   quiz();
}

void quiz()
{int pos=0,i,count=0,numc;
int num1[]={1,2,3,4,5};
do
{


      getch();
    system("cls");

    printf("\n**Choose number**\n\n");
    for(i=0;i<5-count;i++)
    {
    printf("%d ",num1[i]);
    }
    printf("\n\n");

    scanf("%d",&pos);
     pos=pos-1;

    for(i=0;i<5;i++)
    {
        if(i>=pos)

            num1[i]=num1[i+1];/*that's why i is start with zero so i+1 */


    }
    pos=pos+1;
   system("cls");
    if(pos==1)
    {

        printf("\n1.What is the value of 0! \n");
        printf("1.0             2.-1\n");
        printf("3.1             4.None\n");

        scanf("%d",&numc);
        if(numc==3)
        {
            printf("\nCorrect answer \n");


        }
        else
        {
            printf("\nIncorrect answer \n");

        }
    }
    else if(pos==2)
    {

        printf("\n2.Which radio station is oldest radio station of the world \n");
        printf("1.BBC              2.Radio KANTIPUR ");
        printf("\n3.Radio MECHI      4.BBC Britain \n");

        scanf("%d",&numc);
        if(numc==1)
        {
            printf("\nCorrect answer \n");
        }

        else
        {
            printf("\nIncorrect answer \n");

        }
    }
    else if(pos==3)
    {
        printf("\n3.Who developed C programing Language \n");
        printf("1. Denies Ritchie             2.Linus  ");
        printf("\n3.Brian Kernighan            4.Bill Gates \n");

        scanf("%d",&numc);
        if(numc==1)
        {
           printf("\nCorrect Answer ");
        }
        else
        {
          printf("\n Incorrect Answer ");
        }
    }
    else if(pos==4)
    {
        printf("\n4.Which part of CPU perform calculations and make decision ");
        printf("\n1.Alternate Logic Unit        2.Arithmetic Local Unit ");
        printf("\n3.Arithmetic Logic Unit       4.Alternate LOcal Unit ");
         scanf("%d",&numc);
         if(numc==3)
         {
             printf("\nCorrect Answer ");
         }
         else{
            printf("\nIncorrect Answer ");
         }
    }
    else if(pos==5)
    {
        printf("\n5.The purpose of the following program fragment ");
        printf("\nb=s+b\ns=b-s\nb=b-s ");
        printf("\n1.Transfer the contents of S to B  ");
         printf("\n2.Transfer the contents of B to S  ");
         printf("\n3.Negate the contents of S and B  ");
         printf("\n4.Swap(Exchange) the content of S and B ");

         scanf("%d",&numc);
         if(numc==4)
         {
             printf("\nCorrect Answer ");
         }
         else{
            printf("\nIncorrect Answer ");
         }

    }

    else
        {
          count--;
        printf("\nWrong choice it is not in the list ");
        printf("\n**Choose number again** ");
      }

    count++;

    printf("\n***Count is  %d \n",count);

  if(count>=5)
    {
        printf("\n**Well Done**");
        printf("\n");
        exit(0);
    }

}while(count);
}
