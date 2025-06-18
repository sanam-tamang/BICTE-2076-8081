




#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\nEnter first co-efficient of x (ax^2) ");
    scanf("%d",&a);

    printf("\nEnter second co-efficient of x (bx) ");
    scanf("%d",&b);

    printf("\nEnter third number of c ");
    scanf("%d",&c);





    if((b*b-4*a*c)<0)
    {
        printf("\n The quadratic equation is imaginary \nThe number of imaginary part is %d \n\n",b*b-4*a*c);
    }
    else if((b*b-4*a*c)>0)
    {
       printf("\nThe quadratic equation is real and greater \nThe number of real part is %d  \n\n",b*b-4*a*c);

    }
    else if((b*b-4*a*c)==0)
    {
        printf("\n The quadratic equation is real and equal \nThe number of real part is %d \n\n ",b*b-4*a*c);

    }


    else{
            printf("Wrong input");
    }

    return 0;


}

