//halka thoraii matra aba exam aauna lagyo ani long hunxa program so atikaii xadideko yo
#include <stdio.h>
#include <conio.h>

int Ntest();

int main(){
    char ch;
    int a=1,b=2,i=0,j=0;
    printf("\nWelcome to this kytin game \n"); //kytin =game name 
    printf("\nChoose a number between 0 to 100 in you mind \n");
    for(i=0;i<10;i++)//raw
    {
       
         
         for(j=0;j<5;j++){//column
             printf("[%d]  ",a*b);
             a++;
         }
         printf("\n");//it creates one new line 
    }
    a=1,b=2;//again value put in the same data
    printf("\n You thought number lies in above or not y or n ");
    ch=getch();//taking scanf like but does not show what did you type only do work
    if(ch=='y'){

         for(i=0;i<5;i++)
    {
       
         
         for(j=0;j<5;j++){
             printf("[%d]  ",a*b);
             a++;
         }
         printf("\n");

    }



    }

    else{

         for(i=0;i<10;i++)
    {
       
         
         for(j=0;j<5;j++){
             printf("[%d]  ",a);
             a=a+2;//for taking value in odd order 
         }
         printf("\n");
    }
    }
   

}