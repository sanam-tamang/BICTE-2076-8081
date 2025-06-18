
#include <stdio.h>
#include <conio.h>

int main(){
    int i,j,n;
    printf("\nEnter a value to perfom a task ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            /*
            //this is only for understanding propose 
            if(j==4){
                printf("L");
            }
            else
            {
             printf("%d",j);

            }
            */
            printf("%d",j);

            
           

        }
        printf("\n");
    }
    return 0;
}