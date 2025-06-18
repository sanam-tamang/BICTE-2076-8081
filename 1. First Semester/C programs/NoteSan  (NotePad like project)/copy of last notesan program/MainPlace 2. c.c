//Expand your terminal to see propely this code width 300 and hight 100

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<dos.h>
#include<dirent.h>/* show directories and files  */

#define r  100
#define c   50
#define xx  45
#define yy  85
#define CTRL_KEYPRESS(k) ((k) & 0x1f)// this is a control key(ctrl) *this key we  use for accessing ctrl key
#define line 10000
#define space 10000

void date();
int writeTheFile();
void gotoxy(int x,int y);
void EnterFileName();
void OpenTheFile();

void EnterNameOfOpenFile();
void AftSaveOpen();
void SaveTheFile();

void Wmain();
void NameOfOpenFile();
void OpeningFilesList();
void Area_Of_Opening();
void Draw_Opening();
void Draw_Area_Of_Note();
void NumOfLine();
void NumOfLineNeg();
void SaveTheOpenFileFirst();
void SetColor(int ForgC);


int i=0,a=0,j=0,k=0,l=0,n=0,m=0,s=0,x=10,y=13,tl=0,tempcount=0,OpenOrNot=0;
int ifsaved=0,ifopensaved=0;

int step=2,lstep=2;
char MapOfO[xx][yy];

char nameoffile[75],openfilename[75],*tempsave,tempsavea[75],*Ovaluesave,Ovaluesavea[75];

char *wr;
int Slen[line],CntAft[space];
#include"tempfilesaver.h"
#include"Date.h"
#include"Wmain.h"
#include"NumOfLine.h"
#include"gotoxy.h"
#include"MapOfNote.h"
#include"WritingPlace.h"
#include"AftSaveOpen.h"
#include"Enterfilename.h"
#include"EnterNameOfOpenFile.h"
#include"OpeningFilesList.h"
#include"MapOfO.h"
#include"OpenTheFile.h"
#include"SaveTheFile.h"
#include"SaveTheOpenFileFirst.h"



int main()
{
   Wmain();
    gotoxy(x-(x-10),y-(y-13)+m);
    writeTheFile();
    return 0;
}

// this is for text color
void SetColor(int ForgC)
{
     WORD wColor;
     ///We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     ///We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
        ///Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
