
void AftSaveOpen()
{
SetColor(13);
    i=0,j=0,k=0,l=0,n=0,m=0,s=0,tempcount=0,a=0,tl=1;

Slen[l]=0,CntAft[s]=0;
int templ=0;
  char ch={0};

  FILE *fp;

fp=fopen(nameoffile,"rb");
 if(fp==NULL)
 {
      ;
 }
 else
 {
     while(1)
     {
         ch=fgetc(fp);
         if(ch==EOF)
         {
             break;
         }
         else
         {
            if(ch=='\r' || ch=='\n')

           {

                 tempcount++;
                 tl++;
                 templ=0;

           }

           else if(templ==(r-8))
           {
               tl++;
               tempcount++;
               templ=0;
           }
           else{
                templ++;

           }

        }
     }

 }
 fclose(fp);

if(tempcount<=52)
{
    tempcount=0;
}

   Wmain();
   gotoxy(x-(x-10),y-(y-13)+m);


 fp=fopen(nameoffile,"rb");
 if(fp!=NULL)
 {

      while(1)
      {
          ch=fgetc(fp);
          if(ch==EOF)
          {
              break;
          }
          else
          {

     if(ch=='\r')
        {

          Slen[l]++;
          k++;

           l++;
           m++;
           gotoxy(x-(x-10),y-(y-13)+m);

           n=0;
        }


       else if(Slen[l]==(r-12))
        {
           Slen[l]++;
           l++;
           m++;

          gotoxy(x-(x-10),y-(y-13)+m);
            printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;

           n=0;

         }
         else
         {

             printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;
         }

        }

      }

   }

   fclose(fp);

 return;

}



