
#include<stdio.h>
#include<stdlib.h>

struct node
 {
    int num;
    struct node *ptr;
 };

typedef struct node NODE;
 NODE *head, *first, *temp=0;

 void main()
 {
     int count=0;
     int choice=1;
     first=0;
     while(choice)
     {
       head=(NODE*)malloc(sizeof(NODE));
       printf("\nEnter the data item ");
       scanf("%d",&head->num);
       if(first!=0)
       {
           temp->ptr=head;
            temp=head;
       }
       else
       {
           first=temp=head;
           /*first value save garno ko lagi */
       }
       fflush(stdin);
       printf("\nDo you want to Continue(0/1) ");
       scanf("%d",&choice);
     }
     temp->ptr=0;

     temp=first;/**reset temp to the beginning */

     printf("\nStatus of the linked List is\n ");

     while(temp!=0)
     {
         printf("%d=>",temp->num);
         count++;
         temp=temp -> ptr;
     }
     printf("NULL\n");

     printf("\nNo of nodes in the list = %d\n",count);
 }
