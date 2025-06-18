
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void number(int);
struct player
{
    char name[15];
    char country[15];

}p1;

int main()
{

    char ch;
    int num,flag=0;

do
{

system("cls");

    printf("\n**************************************************************************************");
    printf("\n                       Welcome to Our Mind reader number game                                  ");
    printf("\n                                                                      ");
    printf(" \n               Hope that after playing this game you feel better  ");
    printf("\n---------------------------------------------------------------------------------------\n\n\n\n");

     printf("\n Enter \n 1 About information \n 2 To play \n 3 To exit ");
    scanf("%d",&num);
    system("cls");

   switch(num)
{
    case 1:
        flag=1;
        printf("\n-------About-------");
        printf("\n Hello & Namaste ");
        printf("\nThis is Sanam Tamang \nwho develop this program ");
        getch();
        system("cls");

       continue;
    case 2:

          system("cls");
        number(num);

        break;
    case 3:
        printf("------Exit------");
         printf("\n\n Do you really want to exit \n");

            printf("\n--Enter--\n Y to exit \n N to go back ");
            scanf("%s",&ch);
            getch();
            system("cls");
        switch(ch)
        {
        case 'Y':
        case 'y':
            printf("\n Thanks for viewing my information ");
            exit(0);

        case 'N':
        case 'n':
            flag=1;
            continue;
            break;
        }

    default:
        flag=1;
         printf("\n**********X**********X******* SORRY *******X*********X**********");
        printf("\n**********X**********X******* INVALID *******X*********X**********");
         printf("\n**********X**********X*******   TRY   *******X*********X**********");
        printf("\n**********X**********X*********  AGAIN *******X*********X**********");
        getch();
        exit(0);
            getch();
            system("cls");

        break;
}

}while(flag);


}

void number(int num)
{


char ch;

    printf("\n**************************************************************************************");
    printf("\n                         Welcome to this K.NG game                                     ");
    printf("\n                          Thank you for playing us                                       ");
    printf(" \n               Hope that after playing this game you feel better  ");
    printf("\n---------------------------------------------------------------------------------------\n\n\n\n");

    printf("\n Enter your name :");
    scanf("%s",&p1.name);
    printf("\n Enter your country name :");
    scanf("%s",&p1.country);


            printf("\n-------------------++++++++++++++++++++++++++++++++++------------------------ ");
            printf("\n        Welcome dear %s in K.NG game . Our team wish that you will play Well             ",p1.name);
            printf("\n               You are from %s. Wow, your country %s is really amazing              ",p1.country,p1.country);
            printf("\n +++++++++++++++++++-------------------------------+++++++++++++++++++++++++++\n\n\n");


 int count=0,thought,lucky;

do
{

srand(time(NULL)); /* It changes the value according to the time */

lucky=thought%365;

lucky=rand()%9+1; /* random value */

switch(ch)
{

    case 'Y':
    case 'y':

            printf("\n-------------------++++++++++++++++++++++++++++++++++------------------------ ");
            printf("\n              Dear %s you played Well this K.NG game            ",p1.name);
            printf("\n +++++++++++++++++++-------------------------------+++++++++++++++++++++++++++\n\n\n\n\n");

      printf("\n\n\n %s, your lucky number is %d        ",p1.name,lucky);


    printf("\n Your total trails is %d times \n    \t & \n your thought number is %d ",count,thought);
    getch();
    getch();
    system("cls");
    break;

  case 'W':
  case 'w':
    printf("\n\n\n\n  /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*");
    printf("\n    //*/*/*/*/ You are in New K.NG game /*/*/*/*/*/*/*/*//");
    printf("\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\n\n\n");
    number(ch);
     break;

    case 'Q':
    case 'q':

            printf("\n-------------------++++++++++++++++++++++++++++++++++------------------------ ");
            printf("\n              Dear %s you played very well in this know your game             ",p1.name);
            printf("\n           You are from %s. Wow, your country %s is really beautiful              ",p1.country,p1.country);
            printf("\n +++++++++++++++++++-------------------------------+++++++++++++++++++++++++++\n\n\n\n\n");


        printf("\n\n Do you really want to exit \n\n");
            getch();
            system("cls");
            printf("\n Enter \n Y to exit \n P to play ");
            scanf("%s",&ch);
        switch(ch)
        {
        case 'Y':
        case 'y':
                               printf("\n_______________________+++++++++++++++++++++++++++________________________       ");
                               printf("\n                    Thank You %s to play this K.NG game                   ",p1.name);
                               printf("\n                Our team hope that you again play this game         ");
                               printf("\n_______________________+++++++++++++++++++++++++++________________________       ");

             getch();

      exit(0);
        case 'P':
        case 'p':
            continue;

        }

}
    printf("\n\nThink numbers from 1 to 24 ");
    printf("\n After thinking number I will tell your number ");
    printf("\n----XX-------XX-------&&------XX--------XX----");
    printf("\n I will tell your lucky number too ");
    getch();
    system("cls");
    printf("\n Did Your thought number have in this line ");
    printf("\n [1] [3] [5] [7] [9]\n [11] [13] [15] [17] [19] ");
    printf("\n\n--------Enter--------\n\n W for new K.NG game\n\n For  Y if have \n N if Not have\n Q to Quit game ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='y' || ch=='Y')
    {
    printf("\n Did Your thought number have in this line ");
    printf("\n [1] [5] [9]\n [11] [15] [19] ");
     printf("\n\n--------Enter-------- \n Y if have \n N if Not have\n Q for exit ");

    scanf("%s",&ch);
     getch();
    system("cls");

    if(ch=='y' || ch=='Y')
    {
      printf("\n Did Your thought number have in this line ");
    printf("\n [1] [9] [11] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
        if(ch=='Y' || ch=='y')
        {
           printf("\n Did Your thought number have in this line ");
    printf("\n [1] [11] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {

        printf("\n Did Your thought number ");
      printf("\n [1] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=1;

        }
     getch();
    system("cls");

     if(ch=='n' || ch=='N')
    {


       printf("\n Did Your thought number is ");
      printf("\n [11] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
    if(ch=='Y' || ch=='y')
        {
          count++;
          thought=11;
        }
     getch();
    system("cls");
    }
    }

    if(ch=='N' || ch=='n')
    {
        printf("\n Your number is ");
      printf("\n [9] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
    if(ch=='Y' || ch=='y')
        {
          count++;
          thought=9;

        }
     getch();
    system("cls");
    }

        }

    if(ch=='N' || ch=='n')
    {
      printf("\n Did Your thought number have in this line ");
    printf("\n [5] [15] [19] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
        if(ch=='Y' || ch=='y')
        {
           printf("\n Did Your thought number have in this line ");
    printf("\n [5] [15] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {

        printf("\n Did Your thought number is ");
      printf("\n [5] ");
 printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     if(ch=='Y' || ch=='y')
        {
          count++;
          thought=5;
        }
     getch();
    system("cls");
     if(ch=='n' || ch=='N')
    {


       printf("\n Your number is ");
      printf("\n [15] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     if(ch=='Y' || ch=='y')
        {
          count++;
          thought=15;

        }
     getch();
    system("cls");
    }
    }

    if(ch=='N' || ch=='n')
    {
        printf("\n Your number is ");
      printf("\n [19] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     if(ch=='Y' || ch=='y')
        {
          count++;
          thought=19;

        }
     getch();
    system("cls");
    }
        }
        }

        }


    if(ch=='n' || ch=='N')
    {
      printf("\n Did Your thought number have in this line ");
    printf("\n [3] [7] [13]\n [17] [21] [23]");
      printf("\n\n--------Enter--------\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
        if(ch=='Y' || ch=='y')
        {
           printf("\n Did Your thought number have in this line ");
    printf("\n [3] [7] [13] ");
   printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {

        printf("\n Did Your thought number have in this line ");
      printf("\n [3] [7] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

     getch();
    system("cls");

    if(ch=='Y' || ch=='y')
       {

        printf("\n Did Your thought number is ");
      printf("\n [3]  ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=3;

        }

     getch();
    system("cls");

    if(ch=='N' || ch=='n')
       {

        printf("\n Your number is ");
      printf("\n [7]  ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=7;
          lucky=717;

        }

     getch();
    system("cls");

       }
       }

     if(ch=='n' || ch=='N')
    {


       printf("\n Your number is ");
      printf("\n [13] ");
   printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     if(ch=='Y' || ch=='y')
        {
          count++;
          thought=13;

        }
     getch();
    system("cls");
    }
    }


    if(ch=='N' || ch=='n')
    {

           printf("\nDid Your thought number have in this line ");
    printf("\n [17] [21] [23] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {
        printf("\n Did Your thought number have in this line ");
      printf("\n [17] [21] ");
   printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

     getch();
    system("cls");
     if(ch=='Y' || ch=='y')
    {


       printf("\n Did Your thought number is ");
      printf("\n [17] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=17;

        }
     getch();
    system("cls");


    if(ch=='n' || ch=='N')
       {

        printf("\n Your number is ");
      printf("\n [21]  ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=21;
          lucky=721;

        }

     getch();
    system("cls");

       }
    }


    if(ch=='N' || ch=='n')
       {

        printf("\n Your number is ");
      printf("\n [23]  ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=23;

        }

     getch();
    system("cls");

       }

    }
    }
        }
    }

    }

 if(ch=='N' || ch=='n')
    {
       printf("\n Did Your thought number have in this line ");
    printf("\n[2] [4] [6] [8] [10] [12]\n[14] [16] [18] [20] [22] [24] ");
   printf("\n\n--------Enter--------\n\nW for new K.NG game\n\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");

    if(ch=='y' || ch=='Y')
    {
    printf("\n Did Your thought number have in this line ");
    printf("\n[2] [6] [8]\n[12] [16] [20] ");
     printf("\n\n--------Enter--------\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");



    if(ch=='y' || ch=='Y')
    {
      printf("\n Did Your thought number have in this line ");
    printf("\n [6] [12] [20] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
        if(ch=='Y' || ch=='y')
        {
           printf("\nDid Your thought number have in this line ");
    printf("\n [6] [20] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {


        printf("\n Did Your thought number is ");
      printf("\n [6] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=6;


        }
     getch();
    system("cls");
       if(ch=='n' || ch=='N')
    {


       printf("\n Your number is ");
      printf("\n [20] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=20;

        }
     getch();
    system("cls");
    }

    }

    if(ch=='N' || ch=='n')
    {

        printf("\n Your number is ");
      printf("\n [12] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=12;

        }
     getch();
    system("cls");
    }

        }

    if(ch=='N' || ch=='n')
    {
      printf("\n Did Your thought number have in this line ");
    printf("\n [2] [8] [16] ");
     printf("\n\n Enter Y if have \nN if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
        if(ch=='Y' || ch=='y')
        {
           printf("\n Did Your thought number have in this line ");
    printf("\n [2] [16] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {


        printf("\n Did Your thought number is ");
      printf("\n [16] ");
   printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
     if(ch=='n' || ch=='N')
    {


       printf("\n Your number is ");
      printf("\n [2] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=2;

        }
     getch();
    system("cls");
    }
    }

    if(ch=='N' || ch=='n')
    {
        printf("\n Your number is ");
      printf("\n [8] ");
      printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=8;
        }
     getch();
    system("cls");
    }

        }

        }
    }

    if(ch=='n' || ch=='N')
    {
      printf("\n Did Your thought number have in this line ");
    printf("\n [4] [10] [14] \n  [18] [22] [24] ");
    printf("\n\n--------Enter--------\n\nW for new K.NG game\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
        if(ch=='Y' || ch=='y')
        {
           printf("\n Did Your thought number have in this line ");
    printf("\n [4] [10] [14] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {


        printf("\n  Did Your thought number have in this line ");
      printf("\n [4] [14] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
     if(ch=='Y' || ch=='y')
    {


        printf("\n Did Your thought have number is ");
      printf("\n [4] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=4;

        }
     getch();
    system("cls");

     if(ch=='N' || ch=='n')
    {


        printf("\n Your number is ");
      printf("\n [14] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=14;

        }
     getch();
    system("cls");
    }
    }


     if(ch=='n' || ch=='N')
    {

       printf("\n Your number is ");
      printf("\n [10] ");
   printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=10;

        }
     getch();
    system("cls");
    }
    }


    if(ch=='N' || ch=='n')
    {

           printf("\n Did Your thought number have in this line  ");
    printf("\n [18] [22] [24] ");
   printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
    if(ch=='Y' || ch=='y')
    {


        printf("\n Did Your thought number have in this line  ");
      printf("\n [18] [24] ");
     printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);
     getch();
    system("cls");
     if(ch=='y' || ch=='Y')
    {

       printf("\n Did Your thought number is ");
      printf("\n [18] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=18;
        }
     getch();
    system("cls");
     if(ch=='N' || ch=='n')
    {


        printf("\n Your number is ");
      printf("\n [24] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;
          thought=24;

        }
     getch();
    system("cls");

    }

    }

     if(ch=='N' || ch=='n')
    {
        printf("\n Your number is ");
      printf("\n [22] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

        if(ch=='Y' || ch=='y')
        {
          count++;

        }
        if(ch=='N' || ch=='n')
        {

        printf("\n Your number is ");
      printf("\n [0] ");
    printf("\n\n Enter\n Y if have \n N if Not have\n Q for exit ");
    scanf("%s",&ch);

          count++;
          thought=0;
        }

     getch();
    system("cls");


    }
        }
    }
}

  }  }


    }
}while(ch);

}
/*

*/
