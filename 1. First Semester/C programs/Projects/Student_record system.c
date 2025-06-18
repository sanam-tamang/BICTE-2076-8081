
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>


void AddStu();
void SearchStu();
void DeleteID();
void ModifyID();
void Display();
void Check();
void EditPwd();
void PassWD();
void Winmain();

void gotoxy(int x,int y);
int Pflag=0;

struct student_record
{
    char ID[15],address[30],name[30],grade[20],parentN[25],phone[14];

}stu;


int main()
{
   Check();
   Winmain();
   return 0;
}

void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;

    SetConsoleCursorPosition(GetStdHandle((STD_OUTPUT_HANDLE)),coord);
}
void Winmain()
{
    int key;

   system("cls");
   printf("\n----ENTER ID TO----\n");
   printf("\nAdd             [1]");
   printf("\nSearch          [2]");
   printf("\nModify          [3]");
   printf("\nDelete          [4]");
   printf("\nDisplay         [5]");
   printf("\nChange password [6]");
   printf("\nExit Software   [7]");
   printf("\n\nEnter number:  ");

   scanf("%d",&key);
   switch(key)
   {
   case 1:
    AddStu();
    break;
   case 2:
    SearchStu();
    break;
   case 3:
    ModifyID();
    break;
   case 4:
    DeleteID();
    break;
   case 5:
    Display();
    break;
   case 6:
    Pflag=1;
    Check();
    break;
   case 7:
    system("cls");
    printf("\n****Thanks for using our software****\n\n");
    exit(0);
    break;
   default:
    printf("\n\n*****Sorry wrong choice*****");
    getch();
    Winmain();

   }
    return;
}
void AddStu()
{
    system("cls");
    FILE *fp;
    printf("\n------ADD STUDENT INFORMATION------\n");
    fp=fopen("Student_record.txt","ab+");
    if(fp==NULL)
    {
        printf("\nSystem error ");
        exit(0);
    }
    else
    {
    fflush(stdin);
    printf("ID: ");
    gets(stu.ID);

    printf("Full Name: ");
   gets(stu.name);

    printf("Grade: ");
     gets(stu.grade);

    printf("Parent Name: ");
    gets(stu.parentN);

    printf("Address: ");
    gets(stu.address);

    printf("Phone number: ");
    gets(stu.phone);

     fwrite(&stu,sizeof(stu),1,fp);
    printf("\n\nStudent record successfully added \n");

    }
    fclose(fp);
    getch();
   Winmain();
   return;

}

void SearchStu()
{
    system("cls");
    FILE *fp;
    char id[15];
    int idfound=0;
     printf("Search student id: ");
        fflush(stdin);
         gets(id);

    fp=fopen("Student_record.txt","rb");

        while(fread(&stu,sizeof(stu),1,fp)==1)
        {

            if(strcmp(id,stu.ID)==0)
            {
                idfound=1;
                break;
            }
        }
        if(idfound==1)
        {
            printf("----ID FOUND----\n");
            printf("\nId: %s",stu.ID);
            printf("\nName: %s",stu.name);
            printf("\nGrade: %s",stu.grade);
            printf("\nParent Name: %s",stu.parentN);
            printf("\nAddress: %s",stu.address);
            printf("\nPhone_no: %s",stu.phone);

        }
        else
        {
            printf("\nSorry no record found in database ");

        }
    fclose(fp);
    getch();
    Winmain();
    return;

}
void ModifyID()
{
    system("cls");
    char id[15];
    int idfound=0;
    FILE *fp;
    printf("\n*****MODIFY ID*****\n\n");
    printf("\nEnter ID: ");
        fflush(stdin);
         gets(id);

    fp=fopen("Student_record.txt","rb+");

        while(fread(&stu,sizeof(stu),1,fp)==1)
        {
            if(strcmp(id,stu.ID)==0)
            {
                printf("\n**ID found**\n");
                idfound=1;
                  break;
            }

        }
        if(idfound==1)
        {

    fflush(stdin);
    printf("ID: ");
    gets(stu.ID);

    printf("Full Name: ");
   gets(stu.name);

    printf("Grade: ");
     gets(stu.grade);

    printf("Parent Name: ");
    gets(stu.parentN);

    printf("Address: ");
    gets(stu.address);

    printf("Phone number: ");
    gets(stu.phone);
    fseek(fp,-sizeof(stu),SEEK_CUR);///sets back by n bytes
    fwrite(&stu,sizeof(stu),1,fp);
    printf("\n\nStudent record successfully modified \n");

        }
        else
            {
                printf("\nSorry ID not found in database to modify ");

            }
        fclose(fp);
        getch();
         Winmain();

}
void DeleteID()
{
system("cls");
    FILE *fp,*tm;
    char id[15];
    int flag=0;
    printf("\n*****Delete ID*****\n");
     printf("\nEnter ID: ");
        fflush(stdin);
         gets(id);
      fp=fopen("Student_record.txt","rb+");
      tm=fopen("temp_record.txt","wb");

        while(fread(&stu,sizeof(stu),1,fp)==1)
        {   flag=1;
            if(!(strcmp(id,stu.ID))==0)
            {  /* enter id not to be save in temp file */
                fwrite(&stu,sizeof(stu),1,tm);

            }

        }

        fclose(fp);
        fclose(tm);
        remove("Student_record.txt");
        rename("temp_record.txt","Student_record.txt");/**oldname,*newname
        rename change the name of a file from oldname to newname*/
        if(flag==1)
        {
         printf("\nID successfully deleted from the database");
        }
        else
        {
            printf("\nsorry file not found in  database ");
        }

        getch();
        Winmain();

}
void Display()
{
    system("cls");
    printf("****Displaying Total ID****\n\n");
  int i=0;
   FILE *fp;
   fp=fopen("Student_record.txt","rb");
   if(fp==NULL)
   {
       printf("\nFile not found\n");
       getch();
       Winmain();
       return;
   }

    gotoxy(1,2);
    printf("ID");
    gotoxy(8,2);
    printf("Name");
    gotoxy(35,2);
   printf("Grade");
    gotoxy(50,2);
    printf("Parents Name");
    gotoxy(72,2);
    printf("address");
    gotoxy(96,2);
    printf("phone_no");
    for(i=1;i<107;i++)
    {
    gotoxy(i,3);
    printf("-");
    }

   i=0;
   while(fread(&stu,sizeof(stu),1,fp))
   {
      ++i;
       gotoxy(1,3+i);
      printf("%s",stu.ID);
        gotoxy(8,3+i);
      printf("%s",stu.name);
       gotoxy(35,3+i);
      printf("%s",stu.grade);
       gotoxy(50,3+i);
      printf("%s",stu.parentN);
      gotoxy(72,3+i);
      printf("%s",stu.address);
       gotoxy(96,3+i);
      printf("%s",stu.phone);

   }

   printf("\n\n***Total saved ID found in database is %d***\n",i);
   fclose(fp);
   getch();
   Winmain();
}

void Check()
{
    FILE *fp;

    fp=fopen("Security Expert","rb");
    if(fp==NULL)
    { /* first time log in this program that time file is not created
        this place is executed  */
        EditPwd();
        return;
    }
    else
    { /* after file created this path is executed */
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
   printf("\n\a   WARNING ! WARNING !! WARNING !!!");
  printf("\n->You are using password protected Software ");
  printf("\n->If you forgot your password you can not access it again ");
 // ->To get access again delete this password protected file

   printf("\n\n*****PASSWORD PROTECTION*****\n\n");
   gotoxy(1,8);
   printf("New password: ");

    printf("\nConfirm password: ");
    gotoxy(15,8);

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
    gotoxy(18,9);
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
            {      i--;
                printf("\b \b");
            }
            else{
                printf("\a");
            }
        }
        else
        {
              i++;

           printf("*");
        }
    }
    confirm[i]='\0';

        lenP=strlen(pass);
        lenC=strlen(confirm);
        if(lenP<6 && lenC<6)
          {
            printf("\n\n*****Password should be greater than or equal to 6 digit*****\n\n");
            getch();
            EditPwd();
            return;
        }
        else if(lenP>20 && lenC>20)
          {
            printf("\n\n*****Password should not be greater 20 digit*****\n\n");
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
            while(confirm[i]!='\0')
            {
               ch=confirm[i];
               putc(ch+8,fp);
               i++;
            }
            fclose(fp);
            Winmain();

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
        system("cls");
        FILE *fp;
        int count=0;
        fp=fopen("Security Expert","rb");
        if(fp==NULL)
        {
            printf("\n\n****SOMEONE DELETED THE FILE*****\n\n");
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

            Fcheck[i]=ch-8;
            i++;
        }
        Fcheck[i]='\0';

        if(strcmp(Fcheck,Fpass)==0)
        {
           printf("\n\nAccess Granted \n");
           getch();
           system("cls");
            if(Pflag==1)
            {
               EditPwd();
               /* Pflag is global variable
               so first time log in the file you can not
               enter this place because Pflag initialize 0
               and if you want to change your password
               Plag is 1 so this place is executed */
               return;
            }
        }
        else
        {
            printf("\n\nPassword does not match\n\n");
             getch();
             system("cls");
             PassWD();
            return;
        }

       fclose(fp);
       return;
}

