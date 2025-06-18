


/* Stricmp that means it compares lower & upper case & show the value of lower & upper case */
/* if their sanam & SANAM enter that shows the same value from the computer */

#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],name1[20];

    printf("\n Enter the name of your country in capital letter ");
    scanf("%s",&name); /* In the string function Location(&) of the name is not necessary to give if
                                you give location their is not problem that's also right */

    printf("\n Enter the name of your country in small letter ");
    scanf("%s",&name1);

    if(stricmp(name,name1)==0)
    {
        printf("\n Both strings are equal ");

    }

    else
    {
        printf("\n Both strings are not equal ");
    }
}
