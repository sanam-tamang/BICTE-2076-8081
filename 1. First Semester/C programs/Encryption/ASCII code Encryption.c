
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[20];
    puts("\nEnter a sentence ");
    gets(str);
    i=0;
    printf("Encrypted ASCII code\n");
    while(str[i]!='\0')
    {
        printf("%d ",str[i]);
        i++;
    }

   return 0;
}
/*
Output:

Enter a sentence
SanamYonjan
Encrypted ASCII code
83 97 110 97 109 89 111 110 106 97 110
*/
