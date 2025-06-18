
//frequency to know about in easy way

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i,size=5;
    int num[size],count=0,j=0;
    int *frequency;
    frequency=(int*)malloc(size*sizeof(int));//allocating memeory
    printf("Enter the numbers ");
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
         frequency[i]=-1;//we can write other value as well frequency[i]=-2,3..
    }
   

    for(i=0;i<size;i++)
    {
        count=1;//count is one at when restarted or open in first time

        for(j=i+1;j<size;j++)
        {
            if(num[i]==num[j])
            {
                count++;
                frequency[j]=0;/*
                ==only for understanding purpose
                 printf("\nCOunt previdou is %d\n ",count );
                printf("Frequency j is %d \n",frequency[j]);
                printf("Hekk j %d \t",j);
                */
            }
        }
        if(frequency[i]!=0)//value if not zero in first it is -1 above we write -1 and first time value is -1 
        {
            //how many same numbers are there 1,2,1,2,3 = total 3 numbers 
             

            frequency[i]=count;
            /*-
             ==only for understanding purpose
            ] printf("\nFrequency i is %d\n ",frequency[i]);
            printf("\nAfter changeFrequency i is %d\n ",frequency[i]);
            printf("hiii i =%d\t",i);

            */
        }

    }

    for(i=0;i<size;i++)
    {
        if(frequency[i]!=0)
        {
          printf("\n%d repeated %d times \n",num[i],frequency[i]);
        }
        
    }
    return 0;
}