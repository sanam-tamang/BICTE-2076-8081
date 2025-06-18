
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch[15];
    int i,alphabets=0,digits=0,symbols=0;
    printf("Enter anything ");
    scanf("%s",&ch);
for(i=0;i<ch[i]!='\0';i++)
{


    if(isalpha(ch[i]))
    {
        alphabets++;
    }
    else if(isdigit(ch[i]))
    {
        digits++;
    }
    else
    {
        symbols++;
    }

}

    printf("Alphabets is %d \n",alphabets);
     printf("digits is %d \n",digits);
     printf("symbols is %d \n",symbols);

getch();
}
/*
Output:
Enter anything S7896*&y^
Alphabets is 2
digits is 4
symbols is 3

*/
