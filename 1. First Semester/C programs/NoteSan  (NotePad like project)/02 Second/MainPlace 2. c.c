/*in this program openfile function and other value is some
error tyasma alikati show ko problem xa tyasaiile tyaslaii banaunu
xa so I should have to
check all this */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<dirent.h>/*to show directory of files  */

#define r  60
#define c  110

#define CTRL_KEYPRESS(k) ((k) & 0x1f)
#define line 10000
#define space 10000
/*
int writeTheFile();
void gotoxy(int x,int y);
void EnterFileName();
void OpenTheFile();
void SaveTheOpenFile();
void EnterNameOfOpenFile();
void AftSaveOpen();
void SaveTheFile();
void OpenFileSaveShow();
void AftSaveAndSave();
void OpenedFileSave();
void Wmain();
void NameOfOpenFile();
void OpeningFilesList();
void Area_Of_Opening();
void Draw_Opening();*/
int xx=45,yy=100;
int i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0,x=10,y=12,t=0,OpenOrNot=0,ifsaved=0,ifopened=0;
char MapOfNote[r][c],MapOfO[r][c];

char nameoffile[65],openfilename[65],*tempsave,tempsavea[65],*Ovaluesave,Ovaluesavea[65];

char* wr;
int Slen[line],CntAft[space];
#include"Wmain.h"
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
    gotoxy(x,y+m);
    writeTheFile();
    return 0;
}


