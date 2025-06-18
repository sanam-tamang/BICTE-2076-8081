
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void Test();
void PassWord();
void Fpw();
int digit=0,symbols=0,up=0,low=0;/**up low is upper case or lower case */
int main()
{
    Test();
    return 0;
}
void Test()
{
    FILE *fp;
    fp=fopen("Pwd","rb");
    if(fp==NULL)
    {
        Fpw();
        return;

    }
    else
    {
       PassWord();
       return;
    }
    fclose(fp);
    return;
}
void PassWord()
{   char OldPwd[20]={0},ch,Com[20]={0};
   int i=0;
    printf("\nPassword: ");
    while(1)
    {
        OldPwd[i]=getch();
        if(OldPwd[i]=='\r')
        {
          break;
        }
        else if(OldPwd[i]=='\b')
        {
            if(i==0)
            {
                printf("\a");
            }
            else
            {
               printf("\b \b");
               i--;
            }

        }
        else{
            printf("*");
              i++;

        }
    }

    OldPwd[i]='\0';
    i=0;
     FILE *fp;
     fp=fopen("Pwd","rb");
     if(fp==NULL)
     {
         printf("\nSystem Err_");
     }
     else{

            while(1)
            {
                ch=fgetc(fp);
                if(ch==EOF)
                {
                    break;
                }
                Com[i]=ch-5;
                 i++;
            }
            if(strcmp(Com,OldPwd)==0)
            {
                printf("\nAccess granted ");
            }
            else{
                printf("\nAccess Denied ");
                getch();
                system("cls");
                main();
            }

        }

  return;
}
void Fpw()
{
   FILE *fp;
   char FpassW[20]={0},ConfirmP[20]={0};
   int lenp,lenC,i=0;
   printf("\nNew Password: ");
    while(1)
    {
       FpassW[i]=getch();
       if(FpassW[i]==13)
       {
          break;
       }
       else if(FpassW[i]==8)
       {
            if(i==0)
           {
              printf("\a");
           }
           else
           {  i--;
               printf("\b \b");
           }
       }
       else
       {
           i++;
           printf("*");

       }
    }
    FpassW[i]='\0';
    lenp=strlen(FpassW);
    i=0;
    printf("\nConfirm Password: ");
    while(1)
    {
        ConfirmP[i]=getch();
        if(ConfirmP[i]==13)
        {
            break;
        }
        else if(ConfirmP[i]==8)
        {
            if(i==0)
            {
                printf("\a");
            }
            else
            {   i--;
                printf("\b \b");
            }
        }
        else
        {
            i++;

            printf("*");
             for(i=0;ConfirmP[i]!=0;i++)
        {
            if(ConfirmP[i]>='A' && ConfirmP[i]<='Z')
              up++;
            else if(ConfirmP[i]>='a' && ConfirmP[i]<='z')
               low++;
            else if(ConfirmP[i]>=0 && ConfirmP[i]<='9')
                digit++;
            else
            {
               symbols++;
            }
        }



        }

    }
    ConfirmP[i]='\0';
    i=0;
    lenC=strlen(ConfirmP);
    if(lenp <6 && lenC <6 )
    {
        printf("\nPassword must be greater than or equal to 6 digit ");
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
   else if(symbols==0)
    {
        printf("\nThere must be at least one special character ");
    }

    else if(strcmp(FpassW,ConfirmP)==0)
    {
        printf("\nPassword Changed ");
           char ch;
            FILE *fp;
            fp=fopen("Pwd","wb");
            while(ConfirmP[i]!='\0')/*Hamile Ek Ek wota word ko garnu ra while
                loop ko used gareko ho */
            {
               ch=ConfirmP[i];
               putc(ch+5,fp);/*fprintf also works here */
               i++;
            }

            fclose(fp);

    }
    else
    {
            printf("\nPassword does not match ");
    }
    return;

}
