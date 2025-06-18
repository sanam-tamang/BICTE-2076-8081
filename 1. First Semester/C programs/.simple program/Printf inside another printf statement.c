

#include<stdio.h>
int main()
{
    int num=72626;

    printf("%d",printf("%d",printf("%d",num)));
}

/* Inner printf is executed which result is in
printing 72626

- the printing returns total number of digits 5
- second number prints 5 and returns the total number of digits i.e 1(5 it single digit number so 1)
- printf prints 7262651 */
