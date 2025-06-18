


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
    {   OpenOrNot=0;
        gotoxy(x-(x-6),xx-2);
        SetColor(12);
        printf("File does not exist ");
        getch();
      
        Wmain();
          system("cls");
        gotoxy(0,0);
         exit(0);
       

    }
    else
    {

         OpenOrNot=1;
         ifopensaved=1;

    }
      fclose(fp);

      return;


}

