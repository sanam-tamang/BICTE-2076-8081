
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[50]="Nepal"; /* both strings are equal when the first name &
                            second name is same otherwise strings are not equal */
    char name1[40]="nepal";
    if(strcmp(name,name1)==0)
    {
        printf("\n Both strings are equal ");

    }
    else{
        printf("\n Both strings are not equal ");
    }


}
