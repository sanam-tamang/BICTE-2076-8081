#include<stdio.h>  
 #include<stdlib.h>  
 #define MAX 10  
 struct queue{  
      int value[MAX];  
      int front;  
      int rear;  
 }q;  
 void enQueue(int x) {  
   if(q.rear == MAX-1){  
    printf("Queue is full");  
    return;  
   }  
   if(q.rear == -1 && q.front == -1){  
    q.front = q.rear = 0;  
   }  
   else  
    q.rear++;  
   q.value[q.rear] = x;   
 }  
 int deQueue() {  
   int x;  
   if(q.front == -1 || q.front > q.rear) {  
    printf(" Queue is empty");  
    return -1;  
   }  
   x = q.value[q.front++];  
   return x;  
 }  
 void displayQ() {  
  int i;  
  for(i=q.front; i<= q.rear; i++)  
    printf("%d ", q.value[i]);  
 }  
 int main() {  
      int ch, p;  
      q.rear=q.front=-1;  
      while(1){  
           printf("\n 1-> INSERT");  
           printf("\n 2->DELETE ");  
           printf("\n 3->DISPLAY");  
           printf("\n 4->EXIT ");  
           scanf("%d",&ch);  
           switch(ch){  
                case 1: printf("\n Enter an element to insert: ");  
                           scanf("%d",&p);  
                           enQueue(p);  
                           break;  
                case 2: p = deQueue();  
                          if((q.front == -1 || q.front > q.rear) && p==-1)  
                             break;  
                        else  
                           printf("\n The deleted element is %d",p);  
                           break;  
                case 3: displayQ();  
                          break;  
                case 4: exit(0);  
           }  
      }  
 }  

