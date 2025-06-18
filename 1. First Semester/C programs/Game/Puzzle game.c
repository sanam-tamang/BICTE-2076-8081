
/* Spelling puzzle game.c */
/* This is Sanam Tamang who develop this small program
I hope that you'll understand this program properly */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void spell();

int main()
{
    spell();

    return 0;

}

void spell()  /* function starts */
{
  char ch;
  int num=1,good=0,bad=0,go,gocount=0,i,j;

 char s[30];

 char first[10]="Apple";
 char second[10]="Banana";
 char third[10]="Mango";
 char fourth[10]="Orange";

 printf("\n**** Which word make from the following *****\n ------Match the puzzle game------  ");


do
{
 if(num==1)
 {
     printf("\n\n   [P] ");

      printf("\n[P]   [A]");

       printf("\n[E]   [L] \t");

       scanf("%s",s);

       if(stricmp(s,first)==0 || strcmp(s,first)==0)
       {
        good++;

        printf("\n\n\t****Correct**** ");

       }

       else
       {
           bad++;
            printf("\n\n\t--Incorrect-- ");

       }

    num++;

 }
 else if(num==2)
 {
     printf("\n\n\n [B]  [N] ");

      printf("\n    [A]   [N] ");

       printf("\n[A]   [A] \t");

       scanf("%s",s);

       if(stricmp(second,s)==0 || strcmp(second,s)==0)
       {

 printf("\n\n\t****Correct**** ");
         good++;

       }

       else
       {
            printf("\n\n\t --Incorrect-- ");
           bad++;
       }

       num++;
 }
 else if(num==3)
 {
     printf("\n\n[G]   [O]");

      printf("\n   [M]");

       printf("\n[A]     [N]  \t");

       scanf("%s",s);

       if(stricmp(third,s)==0 || strcmp(third,s)==0)
       {

 printf("\n\n\t****Correct**** ");
         good++;

       }

       else
       {
            printf("\n\n\t --Incorrect-- ");
           bad++;
       }

       num++;

 }
 else if(num==4)
 {
     printf("\n\n\n [G]  [E] ");

      printf("\n    [O]   [N] ");

       printf("\n[A]   [R] \t");

       scanf("%s",s);

       if(stricmp(fourth,s)==0 || strcmp(fourth,s)==0)
       {

 printf("\n\n\t****Correct**** ");
         good++;

       }

       else
       {
            printf("\n\n\t --Incorrect-- ");
           bad++;
       }

       num++;

 }

if(num==5) /* after count num is 5 the game is finished and come in this statement */
{
 printf("\n\n\n\n %d time your spell is correct ",good);

   printf("\n %d time your spell is incorrect \n",bad);
    go: /*goto label */
 printf("\n Do want to play again (Y/N) ");
 ch=toupper(getch());

 if(ch=='Y')
 {
           /* Hold the screen once */
   system("cls");/* clear the screen */
    spell();

 }
 else if(ch=='N')
 {
    printf("\n Exit successful ");
    exit(0);
 }
 else{
    printf("\nSorry ! Wrong choice ");
    printf("\nPlease choose again ");
    goto go;

    gocount++;
    if(gocount==2)
    {
        printf("**\nExit Successful**\n");
        exit(0);
    }


 }


}

}while(num);

}

/*
Output:

 Explaination:

 I used here a function spell()
under this function first this program is executed

bad++ is use for incorrect spell count
good++ is use for correct spell count
num++ for no of time you perform a task

stricmp=for the compare to both string for the lower and upper
case it treat lwr an upr case in the same way

strcmp= for the compare to both strings by character
*/




