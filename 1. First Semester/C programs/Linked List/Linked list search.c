
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{

 int data;
 struct node *next;


}Node;

Node *root=NULL;

void CreateList();
void DisplayList();
void SearchList();

int main()
{
      int choose,n;
    printf("\n\n\n1.Create List ");
    printf("\n2.Display data ");
    printf("\n3.Search items ");
    printf("\n4.Exit ");
    printf("\n\nChoose Number: ");
    scanf("%d",&choose);

    switch(choose)
    {
    case 1:
        CreateList();
        break;
    case 2:
        DisplayList();
        break;
    case 3:

        SearchList();
        main();
        break;
    case 4:
        printf("\nExit successfully ");
        exit(0);
    default:
        printf("\nWrong Choice ");
        main();
    }

}
void SearchList()
{
    Node *temp=root;
int n, count=0;


    printf("\nEnter number to be search ");
    scanf("%d",&n);

   while(temp!=NULL)
    {
        count++;
    if(temp->data==n)
    {
        printf("\n%d,number found in %d place ",temp->data,count);
    }

    temp=temp->next;
    }
    getch();
    main();


}

void DisplayList()
{
    Node *temp=root;
        if(root==NULL)
    {
    printf("\nNode is not created ");
    getch();

    }
    else{

       while(temp!=NULL)
       {
           printf("%d->",temp->data);
           temp=temp->next;
       }
    }
    printf("NULL");
    getch();
    main();
    return;
}
void CreateList()
{


    Node *temp,*head;

      head=(Node*)malloc(sizeof(Node));

      scanf("%d",&head->data);

      head->next=NULL;

      if(root==NULL)
      {
          root=head;
      }
      else
      {
          Node *p=root;
          while(p->next!=NULL)
          {
              p=p->next;
          }
          p->next=head;
      }


  main();
  return;
}
