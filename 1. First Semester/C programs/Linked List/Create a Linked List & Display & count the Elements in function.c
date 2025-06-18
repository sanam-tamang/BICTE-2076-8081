
#include<stdio.h>
#include<stdlib.h>

struct element
{
    int data;
    struct elemet *next;
};

typedef struct element element;

void Create_List(void);
int count_items(element *head);
void display_items(element *head);

int main()
{
int n;
    element *start;
    while(1)
    {
        printf("\n\n--------------Menu----------------");
        printf("\n1. Create List ");
        printf("\n2.Count Elements ");
        printf("\n3.Display ");
        printf("\n4.Exit from program ");
        printf("\n\nSelect one option ");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            Create_List();
            break;
        case 2:
            printf("\n\nNumber of items =%d",count_items(start));
            break;
        case 3:
            display_items(start);
            break;
        case 4:
            exit(0);
            break;
        default:
            main();

        }
    }
    return 0;    


}

void  Create_List()
{ int n,i,data2;
    element *p,*head,*temp=NULL;

    if(n<=0)
    {
        return NULL;
    }
    head=(element*)malloc(sizeof(element));

    scanf("%d",&head->data);
   head->next=NULL;

     if(temp==NULL)
     {
         temp=head;

     }
     else
     {
       p->next=head;

    }

}
void display_items(element *head)
{
    printf("\nThe Elements of the list are \n");
    while(head!=NULL)
    {
       printf("%d",head->data);
       head=head->next;
    }

}
int count_items(element *head)
{
        int count;
        while(head!=NULL)
        {
           count++;
           head=head->next;
        }
        return count;
}

