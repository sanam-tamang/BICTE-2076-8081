
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int cal(float);
int main()
{    float n;
     printf("\n**** Welcome to this simple calculator ****\n\n");
    scanf("%f",&n);
    cal(n);

    return 0;
}
int cal(float a)
{
   float b;
   char ch;
  do
  {
    scanf("%c",&ch);

    switch(ch)
    {
    case '/':
        scanf("%f",&b);
        if(b==0)
        {
            printf("\nNumber cannot divide by zero \n");
            getch();
            main();
        }
        else{
            printf("%0.2f/%0.2f=%0.2f\n",a,b,a/b);
            cal(a/b);
        }
    case '*':
    scanf("%f",&b);
    printf("%0.2f*%0.2f=%0.2f\n",a,b,a*b);
            cal(a*b);

        break;
    case '+':
    scanf("%f",&b);
    printf("%0.2f+%0.2f=%0.2f\n",a,b,a+b);
            cal(a+b);

        break;

        case '-':
    scanf("%f",&b);
    printf("%0.2f-%0.2f=%0.2f\n",a,b,a-b);
            cal(a-b);

        break;


    }

  }while(ch);
}


