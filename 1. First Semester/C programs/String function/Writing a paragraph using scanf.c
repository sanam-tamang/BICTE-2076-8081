

#include<stdio.h>

int main()
{
    char para[200];
    printf("Enter tab to stop\n");
    scanf("%[^\t]s",para);

    printf("accepted paragraph : %s ",para);

}
/* Output:
Enter tab to stop
Namaste to everyone.
I am Sanam Tamang.

Bill gate "Don't think about
saving money.Think about making
more money.

accepted paragraph : Namaste to everyone.
I am Sanam Tamang.

Bill gate "Don't think about
saving money.Think about making
more money.

Explaination:
To stop writing paragraph first you press Tab key and
after then  press enter key to stop paragraph writing  */
