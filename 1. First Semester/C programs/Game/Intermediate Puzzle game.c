
/* Spelling puzzle game.c */
/* This is Sanam Tamang who develop this small program
I hope that you'll understand this program properly */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#include<windows.h>

void gotoxy(int, int );
void replay();
void nextspell();
void result();
void load();
void spell();
char name[10];
int correct,incorrect,money;

int main()
{

    load();
    printf("\nEnter Your name : ");
    scanf("%s",&name);
    printf("\n%s, Welcome to this spelling contest game \n",name);
    getch();
    system("cls");
    spell();

    return 0;

}
void gotoxy(int x, int y)
{
   COORD coord;
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
void replay()
{
    getch();
    system("cls");
    char ch;


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

   return exit(0);

 }


}
void load()
{

    int i,j;
    char c=177;
    gotoxy(10,8);
    printf("Loading...");
    gotoxy(8,9);
    for(i=1; i<=15; i++)
    {
        for(j=0; j<=100000000; j++); /*To display loading slowly remember semicolon ; in for*/
        {
              printf("%c",c);
        }
    }
    system("cls");
}


void spell()
{

    int num=1;
    char s[10];
    int good=0,bad=0;
     char first[10]="Apple";
     char second[10]="Banana";
     char third[10]="Mango";
     char fourth[10]="Orange";



do
{

  printf("\n**** Which word make from the following words *****\n ------Match the puzzle------ \n");

 if(num==1)
 {


     printf("\n [P]    [A]");

      printf("\n    [P]   ");

       printf("\n[E]   [L] \t");

       scanf("%s",s);

       if(stricmp(s,first)==0 || strcmp(s,first)==0)
       {
        good++;

        printf("\n\n\t****Correct**** ");

        gotoxy(10,15);
        printf("+$100\t");


       }

       else
       {
           bad++;
            printf("\n\n\t--Incorrect-- ");
        gotoxy(10,15);
         printf("-$100\t");
       }

    num++;

 }
 else if(num==2)
 {
     printf("\n[B]   [N]");

      printf("\n   [A]    [N]");

       printf("\n[A]   [A]\t");

       scanf("%s",s);

       if(stricmp(second,s)==0 || strcmp(second,s)==0)
       {

 printf("\n\n\t****Correct**** ");
         good++;
         gotoxy(10,15);
        printf("+$100\t");

       }

       else
       {
            printf("\n\n\t --Incorrect-- ");
           bad++;
            gotoxy(10,15);
         printf("-$100\t");
       }

       num++;
 }
 else if(num==3)
 {
     printf("\n\n[G]   [O]");

      printf("\n   [M]");

       printf("\n[A]    [N]  \t");

       scanf("%s",s);

       if(stricmp(third,s)==0 || strcmp(third,s)==0)
       {

 printf("\n\n\t****Correct**** ");
         good++;
        gotoxy(10,15);
        printf("+$100\t");
       }

       else
       {
            printf("\n\n\t --Incorrect-- ");
           bad++;
            gotoxy(10,15);
         printf("-$100\t");
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
         gotoxy(10,15);
        printf("+$100\t");

       }

       else
       {
            printf("\n\n\t --Incorrect-- ");
           bad++;
        gotoxy(10,15);
         printf("-$100\t");
       }

       num++;

 }

    if(num==5) /* after count num is 5 the game is finished and come in this statement */
    {
        printf("\n\n\n\n %d time your spell is correct ",good);
        correct=good;
       printf("\n %d time your spell is incorrect ",bad);
       incorrect=bad;


        if(good>=3)
        {
          printf("\n%s Congrats! Total money you win in first level is $%d \n",name,good*100-bad*100);
          money=(good*100-bad*100);
          nextspell();
        }

      else
      {
          printf("\nSorry You didn't win money \n");

         replay();

      }

      }


     getch();
    system("cls");

    }while(num);

    }

void nextspell()
    {
        getch();
       system("cls");
    printf("\n**%s Congrats ! You jumped in Next Level**\n\n",name);
    int num=1;
    char s[10];
int good=0,bad=0;
    do
    {
    printf("\n**** Which word make from the following words *****\n ------Match the puzzle------ \n\n");

        if(num==1)
        {
            printf("\n[E]      [T]");
            printf("\n   [R] [E]  [S]");
            printf("\n[V]      [E]\t");

            scanf("%s",&s);
            if(strcmp(s,"Everest")==0 || stricmp(s,"Everest")==0)
            {

            printf("\n\n\t****Correct**** ");
             good++;
             gotoxy(10,15);
            printf("+$200\t");

         }

       else
       {
          printf("\n\n\t --Incorrect-- ");
           bad++;
        gotoxy(10,15);
         printf("-$200\t");
       }

          num++;
            }
            else if(num==2)
            {
                printf("\n[N]   [T]");
                printf("\n   [U]   [R]");
                printf("\n[A]   [E]\t");

                scanf("%s",&s);
                if(strcmp(s,"NATURE")==0 || stricmp(s,"NATURE")==0)
                {

            printf("\n\n\t****Correct**** ");
             good++;
             gotoxy(10,15);
            printf("+$200\t");

         }

       else
       {
          printf("\n\n\t --Incorrect-- ");
           bad++;
        gotoxy(10,15);
         printf("-$200\t");
       }

          num++;
     }
      else if(num==3)
            {
                printf("\n   [U]   [V]");
                printf("\n[S]   [N]   [R]");
                printf("\n[I]   [E]    [E]\t");

                scanf("%s",&s);
                if(strcmp(s,"UNIVERSE")==0 || stricmp(s,"UNIVERSE")==0)
                {

            printf("\n\n\t****Correct**** ");
             good++;
             gotoxy(10,15);
            printf("+$200\t");
         }
       else
       {
          printf("\n\n\t --Incorrect-- ");
           bad++;
        gotoxy(10,15);
         printf("-$200\t");
       }

          num++;
     }
      else if(num==4)
            {
                printf("\n   [W]   [D]");
                printf("\n[S]   [I]   [O]");
                printf("\n   [N]   [W]\t");

                scanf("%s",&s);
                if(strcmp(s,"WINDOWS")==0 || stricmp(s,"WINDOWS")==0)
                {

            printf("\n\n\t****Correct**** ");
             good++;
             gotoxy(10,15);
            printf("+$200\t");

         }

       else
       {
          printf("\n\n\t --Incorrect-- ");
           bad++;
        gotoxy(10,15);
         printf("-$200\t");
       }

          num++;
     }

    if(num==5)
       {
          printf("\n\n\n\n %d time your spell is correct ",good);
      correct=correct+good;
       printf("\n %d time your spell is incorrect ",bad);
       incorrect=incorrect+bad;

        /*value saved in correct or incorrect variable */
        if(good>=3)
        {
          printf("\n%s Congrats! Total money you win in last level is $%d \n",name,good*200-bad*200);
           money=money+(good*200-bad*200);

             result();
        }
      else
      {
          printf("\nYou didn't win money \n");
          result();

      }


      }
       getch();
       system("cls");


    }while(num);


}

void result(int x, int y)
{
    getch();
    system("cls");
   printf("\n\n\n\n %d time your spell is correct in first and last level ",correct);

   printf("\n %d time your spell is incorrect in first and last level ",incorrect);


if(correct>=5)
{
  printf("\n%s Congrats! Total money you win in first and last level is $%d \n",name,money);
  getch();
  system("cls");
   replay();

}
  else
  {
      printf("\nYou didn't win money in first and last level \n");
      replay();
  }


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




