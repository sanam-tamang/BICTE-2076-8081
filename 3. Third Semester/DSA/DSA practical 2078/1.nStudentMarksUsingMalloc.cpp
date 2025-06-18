#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int i, n;
    float *p;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    p = (float*)malloc(n*sizeof(float));
    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1); 
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter marks for %d student: ", i+1);
        scanf("%f", p+i);
    }

   printf("\n************** Printing the marks of students ***********\n");
   for(i=0;i<n;i++){
   	printf("Student %d marks is %f \n", i+1, *(p+i));
   }
    return 0;
}
