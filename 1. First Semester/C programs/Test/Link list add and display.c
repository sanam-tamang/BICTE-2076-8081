
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *Next;
}Node;

int create(Node **);
void Display(Node *);

int main()
{
    Node *head=NULL;
    printf("\nAdd data ");
   create(&head);
   printf("\nDisplay data ");
   Display(head);

}

int create(Node **head)
{
    Node *temp=NULL;

    int choice=1,n;

    printf("\nHow many data do you want to add? \n-->> ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter data:%d ",i+1);
        temp=(Node*)malloc(sizeof(Node));
        scanf("%d",&temp->data);
        if(*head==NULL)
        {
            *head=temp;
            temp->Next=NULL;
        }
        else{

            temp->Next=*head;
            *head=temp;
        }

    }

}
void Display(Node *head)
{
    while(head!=NULL)
    {
        printf("%d -> ",head->data);
        head=head->Next;
    }
    printf("NULL");
    printf("\n");

}
