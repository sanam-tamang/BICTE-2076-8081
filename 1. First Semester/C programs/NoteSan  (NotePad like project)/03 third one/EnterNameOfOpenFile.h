


void NameOfOpenFile()
{
     FILE *fp;

    printf("Open File Name ");
    fflush(stdin);
    gets(openfilename);
    tempsave=strcpy(tempsavea,openfilename);
    Ovaluesave=tempsave;
    fp=fopen(openfilename,"rb");
    if(fp==NULL)
    {  OpenOrNot=0;
        gotoxy(x-(x-6),xx-2);
        printf("%s file does not exist ",openfilename);
        getch();
    }
    else
    {
         OpenOrNot=1;

    }
      fclose(fp);

}

