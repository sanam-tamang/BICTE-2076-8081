

/*this program have some kinds of bugs so have to accurate this next time -*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define r 55
#define c 110

#define line 1000
#define space 1000
#define UP 72 /*This four keyboard already define in system to control  */
#define DOWN 80
#define LEFT 75
#define RIGHT 77
int write();

void Draw_AreaOfNote();
void AreaOfNote();
void gotoxy(int x,int y);
void OpenTheFile();
void WritingPlace();
void ControlOfWritingPlace();
void ControlOfWritingPlace2();
void ControlKey();
void SaveTheFile();
void Wmain();
int i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0,x=10,y=12,dirX,dirY;
char MapOfNote[r][c];
char nameoffile[65],ch[50];

char* wr;

int Slen[line],CntAft[space];/*countAfter space*/


int main()
{
   AreaOfNote();
Draw_AreaOfNote();
    gotoxy(x-3,y-5);
   printf("Save ESC Key ");
   gotoxy(x-3,y-4);
   printf("Open shift-~ ");
    gotoxy(x,y);

write();
return 0;
}

void Wmain()
{
   AreaOfNote();
Draw_AreaOfNote();
    gotoxy(x-3,y-5);
   printf("Save ESC Key ");
   gotoxy(x-3,y-4);
   printf("Open shift-~ ");
    gotoxy(x,y);
}

/*
void ControlKey()
{

   Key=getch();

   if(Key==UP)
      {

         dirX=0;
        dirY=-1;

      }
   else if(Key==DOWN)
    {
         dirX=0;
         dirY=1;
    }
    else if(Key==LEFT)
    {

        dirX=1;
        dirY=0;
    }


    else if(Key==RIGHT)
    {   dirX=-1;
        dirY=0;

    }
    else
    {
        return;
    }
    return;

}
/*
void ControlOfWritingPlace()
{ /** not build_up all
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
              switch(MapOfNote[i][j])
              {
              case ' ':
                   if(MapOfNote[i+dirX][j+dirY]==' ')
                   {
                ControlOfWritingPlace2();
                return;

                   }
                break;
              }





        }
    }

}*/
void ControlOfWritingPlace2()
{
    char temp=MapOfNote[i][j];
    MapOfNote[i][j]=MapOfNote[i+dirX][j+dirY];
    MapOfNote[i+dirX][j+dirY]=temp;

}

void OpenTheFile()
{
  char openfilename[65],ch;
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
  m=0;
  l=0;
  Slen[l]=0;
  wr[k]==0;
    gotoxy(x,y+m);
 fp=fopen(openfilename,"r+");
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

        if(n==89 && wr[k]==' ' ||  Slen[l]==89  && wr[k]==' ')
        {
           l++;
           m++;
           gotoxy(x,y+m);
           wr[k]='\n';
           n=0;
        }
       else if(wr[k]=='\n' || wr[k]=='\r' || ch=='\n' || ch=='\r')
        {

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
           wr[k]='\n';
           n=0;

         }

             printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;

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


void Draw_AreaOfNote()
{
   for(i=0;i<r;i++)
   {  gotoxy(5,i+5);
       for(j=0;j<c;j++)
       {
          printf("%c",MapOfNote[i][j]);
       }
   }
   return;
}


void AreaOfNote()
{

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(i==0 || i==r-1 || i==r/10)
           {
               MapOfNote[i][j]=176;
           }
           else if(j==0 || j==c-1)
           {
             MapOfNote[i][j]=176;
           }
           else
           {
               MapOfNote[i][j]=' ';
           }
        }
    }
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
    printf("File name ");
    fflush(stdin);
    scanf("%s",&nameoffile);
    fp=fopen(nameoffile,"r");

    if(fp==NULL)
    {

         fp1=fopen(nameoffile,"w");


       while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp1);
          k++;

          }
          fclose(fp1);

    }
    else
    {

        fp2=fopen(nameoffile,"a+");
         while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp2);
          k++;

          }

          fclose(fp2);


    }
     fclose(fp);
   return;
}




int write()
{
    wr=malloc(1000*sizeof(char));

    while(1)
    {
        wr[k]=getch();

        if(wr[k]=='\r')
        {  Slen[l]++;
           l++;
           m++;
          gotoxy(x,y+m);
          wr[k]='\n';
           n=0;
        }



        else if(wr[k]=='\b')
        {
            if(n==0 )
            {

                 if(m<=0)
                {
                  ;
                }
                 else if(m>0 && Slen[l]==0)/*If Slen[l] == 0 check
                    every line if Slen[l] is 0r not */
                {

                    m--;
                    l--;

                    gotoxy(x+Slen[l],y+m);

                }

                    if(Slen[l]>=1)
                        {
                            if(CntAft[s]==0)
                            {
                               s--;
                               CntAft[s]--;


                            }
                            else
                            {
                               gotoxy(x+Slen[l],y+m);
                                Slen[l]--;
                                k--;
                                CntAft[s]--;
                                printf("\b \b");
                            }



                        }

                }



            else
            {
                if(CntAft[s]==0)
                        {
                               s--;
                               CntAft[s]--;

                        }
                        else
                        {
                           printf("\b \b");
                           k--;
                           n--;
                           Slen[l]--;
                           CntAft[s]--;
                        }

            }

        }


         else if(n==89 && wr[k]==' ' ||  Slen[l]==89  && wr[k]==' ')
        {/*If it's reached the 85 to 90 last places of the page
                to take a one step down if n does than slen[l] value
                work in case of you press back space*/
           Slen[l]++;
           l++;
           m++;
           gotoxy(x,y+m);
           wr[k]='\n';
           n=0;
        }
        else if(n==90 || Slen[l]==90)
        {
            Slen[l]++;
           l++;
           m++;
            n=0;
           gotoxy(x,y+m);
           printf("%c",wr[k]);/*last value to print if this execute
           else value does not work so printf work*/
           k++;
           n++;
           Slen[l]++;

           wr[k]='\n';

        }




        else if(wr[k]=='')
        {   wr[k]='\0';
            SaveTheFile();
        }

        else if(wr[k]=='~')
        {   system("cls");
             Wmain();
            OpenTheFile();

        }


        else
        {

            if(wr[k]==' ') /*After space increase this */
            {
                s++;

            printf("%c",wr[k]);


            }/**
            else if(CntAft[s]>=1 && Slen[l]>=1 && Slen[l]<=91 && Slen[l]==90)
            {/* this have to shift but I have to use
            another way to do so
            int a;
               l++;
               m++;
                     a=Slen[l]-CntAft[s];
                strcpy(ch,wr);
                printf("%s ",ch+a);
               gotoxy(x,12+m);
               wr[k]='\n';
               n=0;
            }*/
            else/*if there is not space */
            {
                 printf("%c",wr[k]);

                  CntAft[s]++;


                /**
                Check the each
                space value  *
            gotoxy(x+Slen[l],12+m);
            printf("%d",CntAft[s]);
             gotoxy(20,6);
            gotoxy(x+Slen[l],12+m);
            */


            }

           k++;
           n++;
           Slen[l]++;
        }

    }

    return 0;
}

