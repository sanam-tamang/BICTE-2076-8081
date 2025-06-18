/* Rot 13 encryption and decryption is same key used
I do not know more about this key encryption I do myself
all of this encryption save it maybe mistake
about rot 13 encryption and decryption
you can use this decrypt to encrypt the message or both*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char str[200];
    int i=0;
    printf("\nEnter message to decrypt: ");
    gets(str);
    while(str[i]!='\0')
    {

            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            {
               /* capital letter */
            if(str[i]>='A' && str[i]<='M')
            {

                printf("%c",str[i]-'N'+'Z'+1);
            }
            if(str[i]>='N' && str[i]<='Z')
            {
                printf("%c",str[i]-'Z'+'M');
            }
            /*small letter*/
            if(str[i]>='a' && str[i]<='m')
            {
                printf("%c",str[i]-'n'+'z'+1);
            }
            if(str[i]>='n' && str[i]<='z')
            {
                printf("%c",str[i]-'z'+'m');
            }


        }
            else{
                printf("%c",str[i]);
            }

            i++;
    }

    return 0;
}
/*
Output:

Enter message to decrypt: Yrg'f tb bhg gbqnl.
Let's go out today.

*/
