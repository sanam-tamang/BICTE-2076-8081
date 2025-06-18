
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

#define r 50
#define c 100


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
int Slen[10],i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,BodyOfMap[r][2],dirX,dirY;
char MapOfNote[1000][1000],Key,PressKey;
char nameoffile[65];



int main()
{  gotoxy(0,0);
   printf("Save File ESC Key  \n\n");
   printf("Open File shift-~ \n\n\n");
   AreaOfNote();
Draw_AreaOfNote();
gotoxy(10,13+m);
WritingPlace();


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

}*/

void ControlOfWritingPlace()
{ /** not build_up all */
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

                   ControlOfWritingPlace2();
                      return;

        }
    }

}
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
           if(i==0 || i==r-1 || j==0 || j==c-1)
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
{
   char ch;

    k=0;
    l=0;
    FILE *fp;
    printf("File name ");
    fflush(stdin);
    scanf("%s",&nameoffile);
    fp=fopen(nameoffile,"w");

    if(fp==NULL)
    {
        printf("\nErr_Opening file ");
        exit(1);
    }
    else
    {

         while(MapOfNote[k][l]!='\0')
         {
          ch=MapOfNote[k][l];
          putc(ch,fp);
          k++;
          l++;

          }

    }
    fclose(fp);
}
void WritingPlace()
{
     while(1)
     {

      MapOfNote[l][k]=getch();


    if(MapOfNote[k][l]=='\r')
        {   m++;
           gotoxy(10,13+m);
           p++;
           Slen[p]=strlen(MapOfNote[k]);
           printf("value of Mapofnote is %d ",Slen[p]);
            n=0;
            o=0;


        }

        else if(MapOfNote[k][l]=='\b')
        {
            if(n==0 && o==0)
            {
                for(int a=p;a>=1;a--)
                {
                   gotoxy(Slen[i],13+m);
                   printf("value of  slen[i]=%d ",Slen[i]);
                   printf("\b \b");
                }

              /*I have to use gotoxy function in this
              if the enter keyword is void or null
              be I should have to check the length of every line
              and I can do my best to do yeah that is very funny thing to do
              yeah that is not major program to do but I want to do something
              big so I am doing so but still many program of intermediate
              and high level of programing I can't handle it so
              I have to try it oh my pc is getting low so
              I have to charge it don't be fool in any kinda
              bad things to do now programing is my favorite thing
              to do I have to make passion of my life oh that so
              the sector of programing is big now days so I have to do
              my best to do yeah sure but there is always a big problem
              in it */
            }
            else
            {
               k--;
               l--;
               n--;
               o--;
            printf("\b \b");
            }


        }

        else if(MapOfNote[k][l]=='')
        { MapOfNote[k][l]='\0';
           SaveTheFile();
           return;
        }

        else if(MapOfNote[k][l]=='~')
        {
             OpenTheFile();
             return;

        }


    else
       {
          printf("%c",MapOfNote[k][l]);
           l++;
           k++;
           n++;
           o++;

        }
     }



return;
}


/*
int write()
{
    char wr[1000],nameoffile[65];
   int k=0,l=6,m=0;

    while(1)
    {
        wr[k]=getch();
        Slen=strlen(wr);

        if(wr[k]=='\r')
        {   m++;
           gotoxy(8,12+m);
           wr[k]='\n';


        }
        else if(wr[k]=='5')
        {
               gotoxy(10,3);

             continue;
        }

        else if(wr[k]=='\b')
        {
            printf("\b \b");
               k--;


        }

        else if(wr[k]=='')
        {
            break;
        }

        else if(wr[k]=='~')
        {
             OpenTheFile();

        }

        else
        {
           printf("%c",wr[k]);
           k++;

        }

    }
    wr[k]='\0';
    k=0;

    char ch;

    FILE *fp;
    printf("File name ");
    fflush(stdin);
    scanf("%s",&nameoffile);
    fp=fopen(nameoffile,"w");

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
    return 0;
}
*/
