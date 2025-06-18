

#include<stdio.h>
#include<ctype.h> /* ctype.h header file is used for character */

int main()
{
    char ch,result;

    printf("\n Enter your gender ");
    printf("\n M for male \n F for female\n O for others ");

    scanf("%c",&ch);
    result=toupper(ch);

    switch(result)
    {
        case 'M':
            printf("\n Your gender is male ");
            break;
        case 'F':
            printf("\n Your gender is female ");
            break;

        case 'O':
            printf("\n Your gender is others ");
            break;

        default:
            printf("\n Wrong choice ");
            break;

    }
}
/*
Output:
Enter your gender
M for male
F for female
O for others m

Your gender is male

Explaination:
 toupper means capital letter if your result
 is toupper case value most be in capital letter
We can also use tolower for small letter if your
result is tolower case value most be in small letter
otherwise result is not shown  that's called linkage
 error or logical error

*/
