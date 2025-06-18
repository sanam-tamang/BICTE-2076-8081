
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

#define r 50
#define c 100

#define line 1000
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
int i=0,j=0,k=0,l=0,n=0,m=0,x=10,dirX,dirY;
char MapOfNote[r][c],Key,PressKey;
char nameoffile[65];

char* wr;
char nameoffile[65];
int Slen[line];


int main()
{  gotoxy(0,0);
   printf("Save File ESC Key  \n\n");
   printf("Open File shift-~ \n\n\n");
   AreaOfNote();
Draw_AreaOfNote();

gotoxy(x,12+m);
write();
return 0;
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
  printf("Enter file name to open ");
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
  else{
      while(1)
      {
          ch=fgetc(fp);
          if(ch==EOF)
          {
              break;
          }
          else
          {
             printf("%c",ch);

          }

      }
  }
  getch();
  system("cls");
  main();

}


void Draw_AreaOfNote()
{
   for(i=0;i<r;i++)
   {  gotoxy(5,i+10);
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
           if(i==0 || i==r-1 )
           {
               MapOfNote[i][j]='-';
           }
           else if(j==0 || j==c-1)
           {
             MapOfNote[i][j]='|';
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
    FILE *fp;
    k=0;
    printf("File name ");
    fflush(stdin);
    scanf("%s",&nameoffile);
    fp=fopen(nameoffile,"w+");

    if(fp==NULL)
    {
        printf("\nErr_Opening file ");
        exit(1);
    }
    else
    {

         while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp);
          k++;

          }

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
        {

            l++;
           m++;
           gotoxy(x,12+m);
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
                    gotoxy(x+Slen[l],12+m);

                }

                    if(Slen[l]>0)
                        {

                                gotoxy(x+Slen[l],12+m);
                                Slen[l]--;
                                k--;
                                printf("\b \b");

                        }

                }



            else
            {
               printf("\b \b");
               k--;
               n--;
               Slen[l]--;

            }

        }


         else if(n>=85 && wr[k]==' ' && n<90 ||  Slen[l]>=85 &&  Slen[l]<90 && wr[k]==' ')
        {/*If it's reached the 85 to 90 last places of the page
                to take a one step down if n does than slen[l] value
                work in case of you press back space */

           l++;
           m++;
           gotoxy(x,12+m);
           wr[k]='\n';
           n=0;
        }
        else if(n==90 || Slen[l]==90)
        {

           l++;
           m++;
            n=0;
           gotoxy(x,12+m);
           printf("%c",wr[k]);/*last value to print if this execute
           else value does not work so printf work */
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
        {
             OpenTheFile();


        }


        else
        {
           printf("%c",wr[k]);
           k++;
           n++;
           Slen[l]++;

        }

    }

    return 0;
}

