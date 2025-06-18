//Student's roll no in ascending order 
#include <stdio.h>
int main(){
    int i,j,roll[5],temp;
    for(i=0;i<5;i++){
        printf("Enter %d student's roll no: ",i+1);
        scanf("%d",&roll[i]);

    }

    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(roll[i]<roll[j])
            {
            temp=roll[i];
            roll[i]=roll[j];
            roll[j]=temp;
            }
        }
    }
 printf("Roll no in ascending order is ");
    for(i=0;i<5;i++){
        printf("%d ",roll[i]);
    }
    return 0;
}

