
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void calc1();
int calc2(float);

int main()
{
calc1();

return 0;
}

void calc1()
{
    float n;
    printf("Welcome to this calculator \n Start your task\n\n");

    scanf("%f",&n);
    system("cls"); /* clear the screen */
    printf("--Enter--");
    printf("\nQ to quit ");
    printf("\nA to again do \n\n");
    calc2(n);

}

int calc2(float b)
{
    float a;
    char ch;

do
{
    scanf("%c",&ch);

    switch(ch)
    {
    case '+':
         scanf("%f",&a);
        printf("\n%0.2f+%0.2f=%0.2f",b,a,b+a);
        calc2(b+a);
         break;
    case '-':
         scanf("%f",&a);
         printf("\n%0.2f-%0.2f=%0.2f",b,a,b-a);
         calc2(b-a);
        break;
    case '*':
         scanf("%f",&a);
        printf("\n%0.2fX%0.2f=%0.2f",b,a,b*a);
        calc2(b*a);
        break;
    case '/':

         scanf("%f",&a);
         if(a==0)
         {
             printf("Number can not be divided by zero\n ");
             calc1();
         }
        printf("\n%0.2f/%0.2f=%0.2f",b,a,b/a);
        calc2(b/a);
        break;

    case 'Q':
    case 'q':

        printf("\n Thanks ");
        exit(0);
        break;
    case 'A':
    case 'a':
        printf("\n**New**");
        calc1();
        break;

    }
}while(ch);


}
