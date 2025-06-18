
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,position,i;
    printf("\nHow many number do want to add?.\nEnter size of task ");
    scanf("%d",&size);

    int array[size];
    printf("\nEnter numbers ");
       for(i=0;i<size;i++)
        {
           scanf("%d",&array[i]);
         }
         do
         {


    printf("\nEnter position to delete number ");
    scanf("%d",&position);

    printf("\n****Before deleting number****\n");
        for(i=0;i<size;i++)
        {
            printf("\nElement %d=[%d]",i+1,array[i]);
        }

    position=position-1;/* Because i starts with 0*/

       /*Delete array */
       for(i=0;i<size;i++)
        {
        if(i>=position)
        array[i]=array[i+1];
        }

    printf("\n%d position is deleted\n",position+1);
    printf("****Number after deleted****\n");
    for(i=0;i<size-1;i++)
        {
            printf("\nElement %d=[%d] ",i+1,array[i]);
        }
         }while(1);
}
/*
Output:

How many number do want to add?.
Enter size of task 5

Enter numbers 6
7
8
9
5

Enter position to delete number 3

****Before deleting number****

Element 1=[6]
Element 2=[7]
Element 3=[8]
Element 4=[9]
Element 5=[5]
3 position is deleted
****Number after deleted****

Element 1=[6]
Element 2=[7]
Element 3=[9]
Element 4=[5]
*/
