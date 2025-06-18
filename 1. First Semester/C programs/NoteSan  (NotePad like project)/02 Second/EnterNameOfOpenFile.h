


void NameOfOpenFile()
{
     FILE *fp;
    printf("Open File Name ");
    fflush(stdin);
    gets(openfilename);
    tempsave=strcpy(tempsavea,openfilename);
    Ovaluesave=tempsave;
    fp=fopen(openfilename,"rb");

      fclose(fp);

}

