
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
      struct node *next;

}node;
node *head=NULL,*temp;

node * CreateList();
void DisplayList(node *head);

int main()
{

    CreateList();
    DisplayList(head);
    return 0;
}

void DisplayList(node *head)
{
   while(head!=NULL)
   {
       printf("%d=>",head->data);

       head=head->next;
   }
   printf("NULL");

}
node * CreateList()
{
    node *fone;
   temp=(node*)malloc(sizeof(node));
   scanf("%d",&temp->data);

   if(fone==NULL)
   {
       head=fone=temp;
   }
   else
   {
       temp=temp->next;
      temp->next=NULL;
      return fone;

   }



}
