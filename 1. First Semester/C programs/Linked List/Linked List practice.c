
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
}node;

node *head=NULL;

void CreateData();
void DisplayData();
void CountData();

int main()
{
    int choose;
   printf("1 Insert data \n");
    printf("2 Display data \n");
     printf("3 Count data \n");
      printf("4 Exit \n");
       printf("\nEnter number ");
      scanf("%d",&choose);

      switch(choose)
      {
      case 1:
          CreateData();
          break;
      case 2:
          DisplayData();
          break;
      case 3:
          CountData();
          break;
      case 4:
        break;
      default:
           printf("\nSorry, choice is not in the list  ");
           getch();
           system("cls");
           main();

      }

}

void CountData()
{
    int count=0;
    node *temp=head;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("%d",count);
    getch();
    system("cls");
    main();

}
void DisplayData()
{
    node *temp=head;
    if(temp==NULL)
    {
        printf("\nNo node is created ");
        getch();

    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }

    }
    printf("NULL");
    getch();
    system("cls");
    main();
}

void CreateData()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));

    printf("Insert data ");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }

  system("cls");
  main();


}
