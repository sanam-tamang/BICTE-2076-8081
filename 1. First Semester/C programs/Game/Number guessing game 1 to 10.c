
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int main()
{
    int guess=0,flag=1,num=0,count=0;

    printf("\n Enter a guess number 1 to 10 ");
    scanf("%d",&guess);

    srand(time(NULL));/*Random value according to time */
    num=rand()%9+1;/* These random value will be 1 to 10*/

    do
    {
        if(num==guess)
        {
            flag=0;

            printf("\n Congrats! You played well ");
            printf("\nWrong choice %d times ",count);
        }
        if(guess>num)
        {
            flag=1;
            printf("\nYou guess greater than number ");

        }
        if(guess<num)
        {
            flag=1;
            printf("\nyou guess less than number ");
        }
        if(flag==1)
        {
             count++; /* count counts how many times you entered their */
            printf("\nSorry! guess it again ");
            scanf("%d",&guess);

            /*srand(time(NULL));
            num=rand()%9+1; you can also
            write these for more random value
            */
        }

    }while(flag);


}
/*
Output:

first:
 Enter a guess number 1 to 10 5

you guess less than number
Sorry! guess it again 7

you guess less than number
Sorry! guess it again 9

 Congrats! You played well
Wrong choice 2 times

second:
 Enter a guess number 1 to 10 5

You guess greater than number
Sorry! guess it again 3

You guess greater than number
Sorry! guess it again 2

 Congrats! You played well
Wrong choice 2 times
*/
