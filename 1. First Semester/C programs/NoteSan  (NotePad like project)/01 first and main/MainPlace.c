

/*this program have some kinds of bugs so have to accurate this next time -*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define r 55
#define c 110

#define CTRL_KEYPRESS(k) ((k) & 0x1f)
#define line 1000
#define space 10000

int write();
void gotoxy(int x,int y);
void OpenTheFile();

void WritingPlace();
void AftSaveOpen();

void SaveTheFile();

void OpenFileSaveShow();

void Wmain();
int i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0,x=10,y=12,OpenOrNot=0,ifsaved=0;
char MapOfNote[r][c];
char nameoffile[65],openfilename[65];

char* wr;

int Slen[line],CntAft[space];/*countAfter space*/
#include"AftSaveOpen.h"
#include"MapOfNote.h"
#include"WritingPlace.h"
#include"OpenFileSaveShow.h"




int main()
{
   Wmain();
    gotoxy(x,y);

write();
return 0;
}

void Wmain()
{
    AreaOfNote();
Draw_AreaOfNote();
    gotoxy(x-3,y-6);
   printf("New     Ctrl+N ");
   gotoxy(x-3,y-5);
   printf("Open    Ctrl+O ");
   gotoxy(x-3,y-4);
   printf("Save    Ctrl+S ");

    gotoxy(x,y);
}


void OpenTheFile()
{
  char ch;

  printf("Enter file name ");
  scanf("%s",&openfilename);
  FILE *fp;
  fp=fopen(openfilename,"rb");
  if(fp==NULL)
  {
      printf("File Does not Exist ");
      getch();
      system("cls");
      main();
  }
  fclose(fp);


  system("cls");
  Wmain();
    gotoxy(x,y+m);
 fp=fopen(openfilename,"rb");
 if(fp!=NULL)
 {

      while(1)
      {
          ch=fgetc(fp);
          if(ch==EOF)
          {
              break;
          }
          else
          {

        if(n==89 && wr[k]==' ' ||  Slen[l]==89  && ch==' ')
        {
           l++;
           m++;
           gotoxy(x,y+m);

           n=0;
        }
       else if(wr[k]=='\n' || wr[k]=='\r' || ch=='\n' || ch=='\r')
        {
          k++;
          Slen[l]++;

           l++;
           m++;
          gotoxy(x,y+m);
           n=0;
        }

       else if(n==90 || Slen[l]==90)
        {

           l++;
           m++;

           gotoxy(x,y+m);

            printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;

           n=0;

         }
         else
         {

             printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;
         }


        }

      }
      write();

   }
   else
   {
        printf("Err_opening file  ");
   }
   fclose(fp);

 return;

}




void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

void SaveTheFile()
{  char ch;
    FILE *fp,*fp1,*fp2;
    k=0;

    if(OpenOrNot==0)
    {  OpenOrNot=1;
       printf("File name ");
    fflush(stdin);
    scanf("%s",&nameoffile);
    fp=fopen(nameoffile,"rb");
      if(fp!=NULL)
      {
        printf("Sorry %s file already exist ",nameoffile);
        getch();
        Wmain();
        write();

      }
    else
    {
         fp1=fopen(nameoffile,"wb");
        while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp1);
          k++;

          }



    }
    fclose(fp);
     fclose(fp1);

  }

  else
  {

      fp2=fopen(openfilename,"ab+");
         while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp2);
          k++;

          }

          fclose(fp2);
  }
  system("cls");
  Wmain();

   return;
}



