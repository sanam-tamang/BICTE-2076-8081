
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void Check();
void Winmain();
void savePwd();
void EditPwd();
void PassWD();
int main()
{
  printf("\n*****This Password protection software is made by Sanam Tamang*****\n");
  Check();
  Winmain();
  return 0;

}
 void Winmain()
{
    system("cls");
    int key;
    printf("\nChange password    -->> 1 ");

    printf("\nExit               -->> 2 ");
    printf("\n\nChoose number ");
    key=getchar();
    if(key==1)
    {
        EditPwd();
        return;
    }

    else if(key==2)
    {
        printf("\nThanks for using our software \n");
        return EXIT_SUCCESS;
    }
    else
     {
        printf("\nSorry! wrong choice \n");
        return EXIT_SUCCESS;
     }
     Winmain();
}
void Check()
{
    FILE *fp;
    fp=fopen("Security Expert","rb");
    if(fp==NULL)
    {
        EditPwd();
        return;
    }
    else
    {
        PassWD();
        return;
    }
    return;
}

void EditPwd()
{
    system("cls");
   char pass[20]={0},confirm[20]={0};
   int i=0,lenP,lenC;

   printf("\n\n*****PASSWORD PROTECTION*****\n\n");
   printf("New password: ");

   while(1)
   {       pass[i]=getch();
            if(pass[i]=='\r')
               {
                /*if u heat enter then this works*/
                break;
               }
               else if(pass[i]=='\b')
               {
                if(i!=0)
                    {
                        i--;
                        printf("\b \b");
                     }

                else{
                        printf("\a");///Bell or beep \a
                    }
               }
               else
               {
                   i++;
                   printf("*");
               }
   }
     pass[i]='\0';

    i=0;
    printf("\nConfirm password: ");
    while(1)
    {
        confirm[i]=getch();
        if(confirm[i]==13)/// value of \r is 13
        {
            break;
        }
        else if(confirm[i]==8) /// value of \b is 8
        {
            if(i!=0)
            {       i--;
                printf("\b \b");
            }
            else{
                printf("\a");
            }
        }
        else
        {   i++;
           printf("*");
        }
    }
    confirm[i]='\0';

        lenP=strlen(pass);
        lenC=strlen(confirm);
        if(lenP<6 && lenC<6)
          {
            printf("\n\n*****Password should be greater than or equal to 6 digits*****\n\n");
            getch();
            EditPwd();
            return;
        }
        else if(lenP>20 && lenC>20)
          {
            printf("\n\n*****Password should not be greater 20 digits*****\n\n");
            getch();
            EditPwd();
            return;
        }
        else if(strcmp(pass,confirm)==0)
        {   i=0;
            printf("\n\n*****PASSWORD IS VERIFIED*****\n");
            FILE *fp;
            char ch;
            fp=fopen("Security Expert","wb");
            if(fp==NULL)
            {
                printf("\n\nSystem Error\n\n");
                exit(0);
            }
            i=0;
            while(confirm[i]!='\0')
            {
                ch=confirm[i];
                putc(ch+1,fp); /*
                       putc(ch+1,fp); To save another value like
                       if my password is a it saves b  that show
                        putc(ch+2,fp) if my password is a it saves c */
                i++;
                savePwd();

            }

            fclose(fp);
            return;
        }
        else{
            printf("\n\n*****PASSWORD DOESNOT MATCH*****\n");
             getch();
            EditPwd();
            return;
        }
            return;
}
void PassWD()
{

        FILE *fp;
        fp=fopen("Security Expert","rb");
        if(fp==NULL)
        {
            printf("\n\n*****SORRY FILE NOT FOUND \n SOMEONE DELETED THE FILE*****\n\n");
            exit(0);
        }
        char Fpass[20]={0},ch,Fcheck[20]={0};
        int i=0;
        printf("\n*****PASSWORD PROTECTION*****\n\n");
       printf("Enter password: ");
        while(1)
        {
            Fpass[i]=getch();
            if(Fpass[i]=='\r')
            {
                break;
            }
            else if(Fpass[i]=='\b')
            {
                if(i!=0)
                {   i--;
                    printf("\b \b");
                }
                else{
                    printf("\a");
                }

            }
            else
            {
                printf("*");
                i++;
            }
        }
        Fpass[i]='\0';
        i=0;

        while(1)
        {
            ch=fgetc(fp);
            if(ch==EOF)
            {
               break;
            }

            Fcheck[i]=ch-1;
            i++;
        }
        Fcheck[i]='\0';

        if(strcmp(Fcheck,Fpass)==0)
        {
           printf("\n\nAccess Granted \n");
           getch();
           system("cls");
           savePwd();
           return;

        }
        else
        {
            printf("\n\nAccess denied\n\n");
             getch();
             system("cls");
            PassWD();

            return;
        }

        fclose(fp);
        return;
}

void savePwd()
{
    FILE *fp,*fpp;
    int i=0;
    char ch,ch2,Sav[10];
     fpp=fopen("SavePass","rb");
    if(fpp==NULL)
        {
    printf("\nDo you want to save your password to next time to login (Y/N) ");
    scanf("%c",&ch2);
    if(ch2=='Y' || ch2=='y')
    {
        fp=fopen("SavePass","wb");
        if(fp==NULL)
        {
            printf("\nSorry system error ");
            return EXIT_SUCCESS;
        }
      fprintf(fp,"Y");

        fclose(fp);
    }
    else
    {
      Winmain();
      return;
    }

   }
   else{

     Winmain();


   }


    fclose(fpp);
    return;
}
