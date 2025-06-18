
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,result;
    printf("\n Enter a character ");
    scanf("%c",&ch);
    result=toupper(ch);
    switch(result)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel ",result);
        break;
    default:
        printf("%c is consonant ",result);
        break;

    }
}

/*
Output:
 Enter a character a
A is vowelz

*/
