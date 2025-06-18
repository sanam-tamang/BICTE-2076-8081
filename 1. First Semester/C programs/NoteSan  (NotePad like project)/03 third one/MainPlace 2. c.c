/*I am trying to get bugs
but I can't find so*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<dirent.h>/* show directories and files  */

#define r  125
#define c   68
#define xx  45
#define yy  85
#define CTRL_KEYPRESS(k) ((k) & 0x1f) // this is for control key(ctrl) 
#define line 10000 // number of lines
#define space 10000 // number of spaces 

int writeTheFile();
void gotoxy(int x,int y);
void EnterFileName();
void OpenTheFile();
void SaveTheOpenFile();
void EnterNameOfOpenFile();
void AftSaveOpen();
void SaveTheFile();
void OpenFileSaveShow();
void OpenedFileSave();
void Wmain();
void NameOfOpenFile();
void OpeningFilesList();
void Area_Of_Opening();
void Draw_Opening();
void Draw_Area_Of_Note();
void NumOfLine();
void NumOfLineNeg();


int i=0,a=0,j=0,k=0,l=0,n=0,m=0,s=0,x=10,y=13,tl=0,tempcount=0,OpenOrNot=0;
int ifsaved=0,ifopensaved=0;
int step=2,lstep=2;
char MapOfO[xx][yy];

char nameoffile[75],openfilename[75],*tempsave,tempsavea[75],*Ovaluesave,Ovaluesavea[75];

char* wr;
int Slen[line],CntAft[space];

// these all are header file that I have created
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
#include"SaveTheOpenFile.h"

int main()
{
    Wmain();
    gotoxy(x-(x-6),y-(y-13)+m);
    writeTheFile();
    return 0;
}

