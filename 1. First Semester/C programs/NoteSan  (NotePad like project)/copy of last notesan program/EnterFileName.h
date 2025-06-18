
void EnterFileName()
{  char key;
      FILE *fp;
    printf("File name ");
    fflush(stdin);
    gets(nameoffile);

    fp=fopen(nameoffile,"rb");
      if(fp!=NULL)
      {
        gotoxy(x-(x-6),xx-2);
        printf("%s file is already exist. DO you want to replace this file (y/n)",nameoffile);
        key=getch();
        if(key=='y'|| key=='Y')
        {
            ;
        }
        else if(key=='n' || key=='N')
        {
            return;
        }

      }
      fclose(fp);
}
