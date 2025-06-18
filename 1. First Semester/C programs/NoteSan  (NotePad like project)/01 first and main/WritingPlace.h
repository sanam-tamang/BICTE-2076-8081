

int write()
{
     i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

                Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                                CntAft[space]=countAfter space*/

    wr=malloc(1000*sizeof(char));

    while(1)
    {
        wr[k]=getch();

        if(wr[k]=='\r')
        {   Slen[l]++;
            k++;


           l++;

           m++;

          gotoxy(x,y+m);
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
                 else if(m>0 && Slen[l]==0)/*If Slen[l] == 0 check
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
                               CntAft[s]--;
                               Slen[l]--;
                                k--;
                                CntAft[s]--;
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
                if(CntAft[s]==0)
                        {
                               s--;
                               CntAft[s]--;
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


         else if(n==89 && wr[k]==' ' ||  Slen[l]==89  && wr[k]==' ')
        {/*If it's reached the 85 to 90 last places of the page
                to take a one step down if n does than slen[l] value
                work in case of you press back space*/
           Slen[l]++;
           l++;
           m++;
           gotoxy(x,y+m);
           wr[k]='\n';
           n=0;
        }
        else if(n==90 || Slen[l]==90)
        {   k++;
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


           wr[k]='\n';

        }



        else if(wr[k]==CTRL_KEYPRESS('s'))
        {
            system("cls");
            Wmain();
            if(OpenOrNot==0)
            {
                if(ifsaved==0)
                {
                    wr[k]='\0';
                   SaveTheFile();

                   AftSaveOpen();


                i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

            Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                            CntAft[space]=countAfter space*/



                }
                else
                {   wr[k]='\0';




                    AftSaveOpen();


                    i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

                Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                                CntAft[space]=countAfter space*/



                }

            }
            else if(OpenOrNot==1)
            {

              OpenFileSaveShow();

            }


        }

        else if(wr[k]==CTRL_KEYPRESS('o'))
        {   system("cls");
             Wmain();
             i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

         Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
              OpenOrNot=1;
            OpenTheFile();

        }
        else if(wr[k]==CTRL_KEYPRESS('n'))/*Access of control key  ctrl+n key */
        {       system("cls");

               Wmain();
               i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;
                OpenOrNot=0;
                 ifsaved=0;
            Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
                write();

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

