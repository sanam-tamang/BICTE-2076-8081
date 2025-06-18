
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int predict();
struct information
{
    char name[10];
    int age;

}i1;
int main()
{
    char ch;
    char buff[100];

  do
  {
printf("\n\n\n*************************");
  printf("\n--Enter--");
  printf("\nP to predict ");
  printf("\nA to about ");
  printf("\nQ to quite ");
  printf("\nF to send feedback");
printf("\n***********************\n ");
printf("\nEnter: ");
  ch=toupper(getch());

  system("cls");/* Used to clear the screen*/

  if(ch=='P')
  {
    printf("\n\n#%#%#You are currently in prediction#%#%# ");
    predict();
  }
   else if(ch=='A')
      {
    printf("\nAbout the game \n");
    printf("\nThis is Sanam Tamang\nwho develop this program ");
    printf("\nThis small program \nwill predict about you ");
    printf("\nIt is just for fun ");
    getch();
    system("cls");
     }
   else if(ch=='Q')
     {
    printf("\nThanks for quite ");
    printf("Thanks for using this game");
    exit(0);
     }
 else if(ch=='F')
 {
     printf("Write your feedback ");
     gets(buff);

     printf("\n Thanks for sending your feedback ");
     getch();
     system("cls");

 }
  else{
    printf("\n**Wrong Choice**\n**Sorry! Choose again**\n");
    printf("\n\n**Enter any key to continue** ");

    getch();
    system("cls");
  }
  }while(ch);

  return 0;
}

int predict()
{
  printf("\n Enter your name : ");
fflush(stdin);
  gets(i1.name);
  printf("\n Enter your age : ");
  scanf("%d",&i1.age);

 system("cls");
    int num=i1.age;

    printf("\n\n**Dear %s your prediction is shown below**\n",i1.name);
    srand(time(NULL));
    num=rand()%8;

    printf("\n#. Your job \n");
    switch(num)
    {
    case 1:
        printf("=> Gov. Job ");
        break;
    case 2:
        printf("=> Programmer ");
        break;
    case 3:
        printf("=> Businessman ");
        break;
    case 4:
        printf("=> Doctor ");
        break;
    case 5:
        printf("=> Farmer ");
        break;
    case 6:
        printf("=> Engineer ");
        break;
    case 7:
        printf("=> Jobless ");
        break;
    case 8:
        printf("=> Army officer ");
        break;
    default:
        printf("=> Teacher ");
        break;

    }
    srand(time(NULL));
    num=rand()%6;

    printf("\n\n#. Your behavior \n");

    switch(num)
    {
        case 1:
        printf("=> Alone ");
        break;
    case 2:
        printf("=> Friendly ");
        break;
    case 3:
        printf("=> Envy ");
        break;
    case 4:
        printf("=> Kind ");
        break;
    case 5:
        printf("=> Anger ");
        break;
    case 6:
        printf("=> Helpful");
         break;
    default:
        printf("=> Friendly ");
        break;

    }

    printf("\n\n#. Brain power\n");
    srand(time(NULL));
    num=rand()%4;

    switch(num)
    {
        case 1:
        printf("=> Poor ");
        break;
    case 2:
        printf("=> Outstanding ");
        break;
    case 3:
        printf("=> Excellent ");
        break;

    default:
        printf("=> Good ");
        break;

    }

   printf("\n\n#. Your current emotion \n");
    srand(time(NULL));
    num=rand()%4;

    switch(num)
    {
        case 1:
        printf("=> Happy ");
        break;
    case 2:
        printf("=> Joyful");
        break;
    case 3:
        printf("=> Anger ");
        break;
    case 4:
        printf("=> Crying ");

    default:
        printf("=> Surprise ");
        break;

    }

    printf("\n\n#. Your marriage \n");
    srand(time(NULL));
    num=rand()%3;

    switch(num)
    {
        case 1:
        printf("=> Arrange marriage ");
        break;
        case 2:
            printf("=> Court marriage ");
            break;
        case 3:
            printf("=> Love marriage ");
    default:
        printf("=> Love marriage ");
        break;

    }
    getch();
    system("cls");


return (printf("\n\nYou are in new prediction program "));
}

/*
Output:

--Enter--
P to predict
A to about
Q to quite

You are currently in prediction
 Enter your name : Sanam Tamang

 Enter your age : 18
**Dear Sanam Tamang your prediction is shown below**

#. Your job
=> Businessman

#. Your behavior
=> Envy

#. Brain power
=> Excellent

#. Your current emotion
=> Anger

#. Your marriage
=> Love marriage

You are in new prediction program


--Enter--
P to predict
A to about
Q to quite

Thanks for quite

*/
