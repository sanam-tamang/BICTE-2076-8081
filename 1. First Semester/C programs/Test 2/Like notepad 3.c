

/*this program have some kinds of bugs so have to accurate this next time -*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include"MapOfNote"
#define r 55
#define c 110

#define CTRL_KEYPRESS(k) ((k) & 0x1f)
#define line 1000
#define space 10000

int write();


void gotoxy(int x,int y);
void OpenTheFile();
void WritingPlace();
void SaveTheFile();
void Wmain();
int i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0,x=10,y=12;
char MapOfNote[r][c];
char nameoffile[65],ch[50];

char* wr;

int Slen[line],CntAft[space];/*countAfter space*/


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


  system("cls");
  Wmain();
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
        {   Slen[l]++;
            k++;


           l++;

           m++;

          gotoxy(x,y+m);
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
                               Slen[l]--;
                                k--;
                                CntAft[s]--;
                                printf("\b \b");



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
                                printf("\b \b");
                               k--;
                               n--;
                               Slen[l]--;


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
        {   k++;
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



        else if(wr[k]==CTRL_KEYPRESS('s'))
        {   wr[k]='\0';
            system("cls");
            Wmain();

            SaveTheFile();
        }

        else if(wr[k]==CTRL_KEYPRESS('o'))
        {   system("cls");
             Wmain();
             i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

         Slen[line]={0},CntAft[space]={0};/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/

            OpenTheFile();

        }
        else if(wr[k]==CTRL_KEYPRESS('n'))/*Access of control key  ctrl+n key */
        {       system("cls");

               Wmain();
               i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

            Slen[line]={0},CntAft[space]={0};/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
                write();

        }



        else
        {

            if(wr[k]==' ') /*After space increase this */
            {
                s++;

            printf("%c",wr[k]);


            }
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

