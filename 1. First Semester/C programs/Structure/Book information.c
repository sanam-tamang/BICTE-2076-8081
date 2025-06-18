
#include<stdio.h>
struct book
{
int id;
char name[50];
float price;


}b1;

int  main()
{
    /*struct book b1:-You can also write here*/

    printf("Enter book id: ");
    scanf("%d",&b1.id);
    printf("Book name: ");
    scanf("%s",&b1.name);
    printf("Book price: ");
    scanf("%f",&b1.price);

    printf("\n\nBook id: %d",b1.id);
    printf("\nName of book: %s",b1.name);
    printf("\nPrice of book: %0.2f",b1.price);

    return 0;
}
/*
Output:
Enter book id: 1
Book name: MunaMadan
Book price: 255.50


Book id: 1
Name of book: MunaMadan
Price of book: 255.50

*/
