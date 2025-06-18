#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int data;
  struct node* next;

};
struct node* root=NULL;
int len=0;
void Create_List();
void Display_items();
int Count_items();

int main()
{
    int choose;
    printf("\n\n\n1.Create List ");
    printf("\n2.Display data ");
    printf("\n3.Count items ");
    printf("\n4.Exit ");
    printf("\n\nChoose Number: ");
    scanf("%d",&choose);

    switch(choose)
    {
    case 1:
        Create_List();
        break;
    case 2:
        Display_items();
        break;
    case 3:
        len=Count_items();
        printf("\nLength of node is %d ",len);
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
void Display_items()
{
   struct node* temp;
   temp=root;
   if(temp==NULL)
   {
       printf("\nList is empty ");

   }
   else{
   while(temp!=NULL)
   {   printf("%d->",temp->data);

       temp=temp->next;
   }
   printf("NULL");
   }
   getch();
   main();
   return;
}

int Count_items()
{
    int count=0;
  struct node* temp=root;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  return count;
}

void Create_List()
{
   struct node* temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter data of node ");
   scanf("%d",&temp->data);
    temp->next=NULL;
   if(root==NULL)
   {
       root=temp;
   }
   else{

       struct node *p;
        p=root;/*not to change root values so
        p initialize */
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;

   }
   main();

   return;

}
