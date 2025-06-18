
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,search,i;
    printf("\nHow many numbers do you want to add?.\n Enter a number ");
    scanf("%d",&size);

    int num[size];
    printf("\nEnter numbers ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\nEnter number to be search \n");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(num[i]==search)
        {
            printf("****%d number found****\n",search);

        }
        else
        {
            printf("%d number not found \n",search);
        }
    }
    return 0;

}
/*
Output:

How many number do you want to add?.
 Enter a number 10

Enter numbers 7
8
9
6
7
2
6
2
6
3

Enter number to be search
6
6 number not found
6 number not found
6 number not found
****6 number found****
6 number not found
6 number not found
****6 number found****
6 number not found
****6 number found****
6 number not found

*/
