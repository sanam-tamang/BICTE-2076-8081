
void EnterFileName()
{
    FILE *fp;
    printf("File name ");
    fflush(stdin);
    scanf("%s",&nameoffile);
    fp=fopen(nameoffile,"rb");
      if(fp!=NULL)
      {
        printf("%s file is already exist ",nameoffile);
        getch();
        Wmain();
        writeTheFile();

      }
      fclose(fp);
}
