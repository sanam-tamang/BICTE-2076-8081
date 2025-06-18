
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char user[15],pwd[15];
    printf("\nEnter user's name ");
    gets(user);
    printf("\nEnter password ");
    gets(pwd);

    if(strcmp(user,"Sanam")==0)
    {

        if(strcmp(pwd,"4321")==0)
        {
            printf("\nWelcome. login successful ");
        }
        else
        {
            printf("\nWrong password ");
        }

    }
      else{
            printf("User name does not exits ");
        }
        getch();
}
/*
Output 1:

Enter user's name sanam

Enter password 4321
User name does not exits

Output 2:
Enter user's name Sanam

Enter password 4321

Welcome. login successful
*/
