
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int size=5;
    int num[size],count=0,j=0,i=0,frequency[size];
    printf("Enter the numbers to know frequency of each number: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
         frequency[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(num[i]==num[j])
            {
                count++;
                frequency[j]=0;
        }
        if(frequency[i]!=0)
        {
            
            frequency[i]=count; 
    }
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
