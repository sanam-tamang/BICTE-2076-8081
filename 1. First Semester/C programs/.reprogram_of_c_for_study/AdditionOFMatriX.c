
//Addition of Matrix 
#include <stdio.h>
#include <conio.h>

void main(){
    int i,j,n;
    printf("\nEnter The Size Of Matrix ");
    scanf("%d",&n);
    int a[n][n],b[n][n],sum[n][n];
    printf("\nEnter the data of matrix A: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
    }
     printf("\nEnter the data of matrix B: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("The Addition of Matrix A and B is \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}