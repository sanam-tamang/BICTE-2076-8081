

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
           tl++;
           NumOfLine();
           m++;
          gotoxy(x-(x-6),y-(y-13)+m);
          wr[k]='\n';
           n=0;
        }


        else if(wr[k]=='\b')
        {
            if(n==0 )
            {
                if(m>=1 && Slen[l]==0)/*If Slen[l] == 0 check
                    every line if Slen[l] is 0r not */
                {

                         tl--;
                NumOfLineNeg();

                    m--;
                    l--;

                    gotoxy(x-(x-6)+Slen[l],y-(y-13)+m);

                }

                    if(Slen[l]>=1)
                        {
                                                           gotoxy(x-(x-6)+Slen[l],y-(y-13)+m);
                                Slen[l]--;
                                k--;
                                CntAft[s]--;
                                printf("\b \b");




                        }

                }



            else
            {

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


        else if(n==(r-8) || Slen[l]==(r-8))
        {
            Slen[l]++;
           l++;
           tl++;
           NumOfLine();
           m++;
            n=0;
           gotoxy(x-(x-6),y-(y-13)+m);
           printf("%c",wr[k]);
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

                  gotoxy(x-(x-6),xx-3);
                    EnterFileName();

                   SaveTheFile();

                   AftSaveOpen();

                }
                else
                {
                      wr[k]='\0';
                     SaveTheFile();

                }

            }
            else if(OpenOrNot==1)
            {

              wr[k]='\0';

             OpenedFileSave();



            }


        }

        else if(wr[k]==CTRL_KEYPRESS('o'))
        {

                OpenOrNot=0;
                 i=0,j=0,k=0,l=0,n=0,m=0,s=0;
                  Slen[l]=0,CntAft[s]=0,tl=0,tempcount=0;

                 Area_Of_Opening();
                 Draw_Opening();
                  OpeningFilesList();
                    gotoxy(x-(x-6),xx-3);
                 NameOfOpenFile();
                OpenTheFile();
                /*
                ifthis is open nxt is execute
                I mean
                openedFileSave's
                comment should be
                open and non_comment value
                should be in comment value
                i=0,j=0,k=0,l=0,n=0,m=0,s=0;
                  Slen[l]=0,CntAft[s]=0;*/



        }
        else if(wr[k]==CTRL_KEYPRESS('n'))/*Access of control key  ctrl+n key */
        {
                OpenOrNot=0;
                 ifsaved=0;
                  i=0,j=0,k=0,l=0,n=0,m=0,s=0;
                  Slen[l]=0,CntAft[s]=0,tl=0,tempcount=0;

               Wmain();

        }
        else if(wr[k]==CTRL_KEYPRESS('q'))
        {   gotoxy(0,0);
            return printf("Thanks");

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

