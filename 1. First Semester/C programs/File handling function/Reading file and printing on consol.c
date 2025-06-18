

#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char c;
  fp=fopen("NEPAL.txt","r"); /* To run this program you must create a file name whatever you like
                                            I write their Nepal as file name */
  while(1)
  {
      if(fp==NULL)
      {
          printf("\n file not found ");
          exit(0);
      }

      else
      {
          c=fgetc(fp);

          if(c==EOF)

          {
              break;
          }
          printf("%c",c);
      }
  }

  fclose(fp);
}
