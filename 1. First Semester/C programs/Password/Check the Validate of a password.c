
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name[25],pwd[25],ver[25],spchar;
    int i,a,digit=0,up=0,low=0;

    printf("\nEnter Your name ");
    gets(name);
    printf("%s, Enter your password ",name);
    gets(pwd);
    a=strlen(pwd);
    if(a<=5)
    {
        printf("\nError, Password should contain minimum 6 character ");
    }
    else if(a>20)
    {
        printf("\nError, password shouldn't exceed 20 character ");
    }
    else
    {
        for(i=0;pwd[i]!=0;i++)
        {
            if(pwd[i]>='A' && pwd[i]<='Z')
              up++;
            else if(pwd[i]>='a' && pwd[i]<='z')
               low++;
            else if(pwd[i]>=0 && pwd[i]<='9')
                digit++;
            else
            {
                spchar++;
            }
        }


    if(up==0)
    {
        printf("\nThere must be at least one Uppercase ");
    }
    else if(low==0)
    {
        printf("\nThere must be at least one Lowercase ");
    }
    else if(digit==0)
    {
        printf("\nThere must be at least one digit ");
    }
   else if(spchar==0)
    {
        printf("\nThere must be at least one special character ");
    }
    else
    {


    printf("\nConfirm your password ");
    gets(ver);
    if(strcmp(pwd,ver)==0)
    {
        printf("\nWelcome %s, your password is verified ",name);

    }
    else
    {
        printf("\nYour password did not match ");
    }

    }
    }

  getch();


}

/*
Output:
Enter Your name Sanam
Sanam, Enter your password @Sanam.np

Confirm your password @Sanam.np

Welcome Sanam, your password is verified
*/
