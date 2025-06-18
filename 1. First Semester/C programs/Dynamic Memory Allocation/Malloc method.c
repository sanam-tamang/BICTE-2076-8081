
#include<stdio.h>
#include<stdlib.h> //stdlib.h provides a declaration of malloc
 int main()
 {
     /** This pointer will hold the base
     address of the block created */
     int* ptr;
     int n,i;

     printf("Enter number of elements: ");
     scanf("%d",&n);

     ptr=(int*)malloc(n*sizeof(int));

     if(ptr==NULL)
     {
         printf("\nMemory not allocated ");
         exit(0);
     }
     else
    {
       printf("\nMemory successfully created using malloc. ");

       for(i=0;i<n;i++)
       {
           ptr[i]=i+1;

       }

       printf("\nThe elements of the array are: \n");
       for(i=0;i<n;i++)
       {
           printf("%d ",ptr[i]);
       }

     }
     return 0;


 }
