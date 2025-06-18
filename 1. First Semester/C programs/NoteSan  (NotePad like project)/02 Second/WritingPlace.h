
int writeTheFile()
{


    wr=malloc(10000*sizeof(char));

    while(1)
    {
        wr[k]=getch();

        if(wr[k]=='\r')
        {
           Slen[l]++;
           k++;

           l++;
           m++;

          gotoxy(x,y+m);
          wr[k]='\n';


           n=0;
        }


        else if(wr[k]=='\b')
        {
            if(n==0 )
            {

                 if(m<=0)
                {
                  ;
                }
                if(Slen[l]<0)
                {
                    ;
                }
                 else if(m>=1 && Slen[l]==0)/*If Slen[l] == 0 check
                    every line if Slen[l] is 0r not */
                {

                    m--;
                    l--;

                    gotoxy(x+Slen[l],y+m);

                }

                    if(Slen[l]>=1)
                        {
                            if(CntAft[s]==0)
                            {
                               s--;

                               Slen[l]--;
                                k--;

                                printf("\b \b");



                            }
                            else
                            {
                               gotoxy(x+Slen[l],y+m);
                                Slen[l]--;
                                k--;
                                CntAft[s]--;
                                printf("\b \b");
                            }



                        }

                }



            else
            {
                if(n<0)
                {
                     ;
                }

                if(CntAft[s]==0)
                        {
                                s--;
                                printf("\b \b");
                               k--;
                               n--;
                               Slen[l]--;


                        }
                        else
                        {
                           printf("\b \b");
                           k--;
                           n--;
                           Slen[l]--;
                           CntAft[s]--;
                        }

            }

        }


        else if(n==(c-12) || Slen[l]==(c-12))
        {
            Slen[l]++;
           l++;
           m++;
            n=0;
           gotoxy(x,y+m);
           printf("%c",wr[k]);/*last value to print if this execute
           else value does not work so printf work*/
           k++;
           n++;
           Slen[l]++;



        }



        else if(wr[k]==CTRL_KEYPRESS('s'))
        {


            if(OpenOrNot==0)
            {
                if(ifsaved==0)
                {
                      wr[k]='\0';

                     Area_Of_Opening();
                 Draw_Opening();
                  OpeningFilesList();
                  gotoxy(x,xx-3);
                    EnterFileName();

                   SaveTheFile();

                   AftSaveOpen();

                }
                else
                {
                      wr[k]='\0';
                     SaveTheFile();
                    AftSaveOpen();

                }

            }
            else if(OpenOrNot==1)
            {

              wr[k]='\0';

             OpenedFileSave();
             OpenTheFile();


            }


        }

        else if(wr[k]==CTRL_KEYPRESS('o'))
        {


             i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

         Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
                 OpenOrNot=1;

                 Area_Of_Opening();
                 Draw_Opening();
                  OpeningFilesList();
                  gotoxy(x,xx-3);
                 NameOfOpenFile();
                OpenTheFile();
                writeTheFile();


        }
        else if(wr[k]==CTRL_KEYPRESS('n'))/*Access of control key  ctrl+n key */
        {

               Wmain();
               i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;
                OpenOrNot=0;
                 ifsaved=0;
            Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
                 writeTheFile();

        }
        else if(wr[k]==CTRL_KEYPRESS('q'))
        {   gotoxy(x,110);
            exit(EXIT_SUCCESS);

        }



        else
        {

            if(wr[k]==' ') /*After space increase this */
            {
                s++;

            printf("%c",wr[k]);


            }
            else/*if there is not space */
            {

                 printf("%c",wr[k]);

                  CntAft[s]++;


                /**
                Check the each
                space value  *
            gotoxy(x+Slen[l],12+m);
            printf("%d",CntAft[s]);
             gotoxy(20,6);
            gotoxy(x+Slen[l],12+m);
            */


            }

              k++;
               n++;
               Slen[l]++;




        }

    }

    return 0;
}

