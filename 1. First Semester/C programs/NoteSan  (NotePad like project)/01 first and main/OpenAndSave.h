
void OpenAndSave()
{   char ch;
    k=0;
    wr[k]='\0';
    FILE *fp;
    fp=fopen(openfilename,"a");
         while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp);
          k++;

          }

          fclose(fp);

}
