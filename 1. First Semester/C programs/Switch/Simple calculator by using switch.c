
 /* Simple calculator by using switch */


#include<stdio.h>
int  main()
{
    float a,b;
    char ch;

    printf("\n Welcome to calculator ");
    printf("\n\n Enter two number to perform a task \n\n\t");

    scanf("%f%c%f",&a,&ch,&b);

    switch(ch)
    {
    case '+':
        printf("\n%0.2f+%0.2f=%0.2f",a,b,a+b);
        break;
    case '-':
         printf("\n%0.2f-%0.2f=%0.2f",a,b,a-b);

        break;
    case '*':
        printf("\n%0.2fX%0.2f=%0.2f",a,b,a*b);
        break;
    case '/':
        if(b==0)
        {
            printf("Number can not be divided by zero\n ");
            break;
        }
        printf("\n%0.2f/%0.2f=%0.2f",a,b,a/b);
        break;
     default:
        printf("\n sorry, wrong input ");
        break;


    }



}

/*
Output:
 Welcome to calculator

 Enter two number to perform a task

        5*5

5.00X5.00=25.00
*/
