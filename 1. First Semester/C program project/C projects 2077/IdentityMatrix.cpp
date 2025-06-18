
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,n;
    printf("\nEnter the size of Matrix: ");
    scanf("%d",&n);
    int a[n][n],flag=0;
    printf("Enter the elements of Matrix 'A': ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("\n\nMatrix A is shown below: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1 && a[j][i]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("\n\nIt is identity Matrix ");

    }
    else
    {
        printf("\n\nIt is not identity Matrix ");
    }
    return 0;
    
}
