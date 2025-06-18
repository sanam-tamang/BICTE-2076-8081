
void EnterFileName()
{
    FILE *fp;
    printf("File name ");
    fflush(stdin);
    gets(nameoffile);
    fp=fopen(nameoffile,"rb");
      if(fp!=NULL)
      {
        gotoxy(x-(x-6),xx-2);
        printf("%s file is already exist ",nameoffile);
        getch();

      }
      fclose(fp);
}
