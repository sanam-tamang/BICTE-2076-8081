
int writeTheFile()

{
    int line1=1;
     SetColor(13);
    wr=malloc(10000*sizeof(char));// allocate the memory by using malloc

     while(1)

      {
          SetColor(13);

      wr[k]=getch();
        if(wr[k]=='\r') // for pressing enter key

        {

           Slen[l]++;
           k++;
           l++;
           tl++;
           NumOfLine(); // increase number of lines
           m++;
          gotoxy(x-(x-10),y-(y-13)+m);//goes one step down
           n=0;
           if(tl==(c-14)*line1)
           {/**this will creates new map
               if the line is greater than when c is 40 and -14 is 
               26,52,78 and so on */
                m=m+4;
                l=l+4;
                tl=tl+4;
                gotoxy(x-(x-10),y-(y-13)+m);
               line1++;
              tempcount=tempcount+(c-14);
              Draw_Area_Of_Note();

           }


        }

        else if(wr[k]=='\b') // for pressing back space in the program

        {

        if(Slen[l]>=0)

            {

                if(m<=0)

                {
                    /*if line is less than or equal to
                    0 there won't happen anything*/

                    ;

                }
                if(m>=1 && Slen[l]==0 )
                    /*If Slen[l] == 0 check
                    every line if Slen[l] is 0r not */

                {
                   m--;
                    l--;
                    gotoxy(x-(x-10)+Slen[l],y-(y-13)+m);

                            tl--;

                            NumOfLineNeg();


                }
                if(Slen[l]==1  )

                        {
                            // if each line have only one character
                               gotoxy(x-(x-10)+Slen[l],y-(y-13)+m);
                                Slen[l]--;
                                CntAft[s]--;
                                printf("\b \b");

                        }



                else if(Slen[l]>=2 && Slen[l]<=(r-6) )

                        {
                            // if each line have more than one character
                               gotoxy(x-(x-10)+Slen[l],y-(y-13)+m);
                                Slen[l]--;
                                CntAft[s]--;
                                printf("\b \b");

                        }

            }

            else{


                ;

            }



        }

        else if(Slen[l]==(r-12))

        {
                 SetColor(13);
            /*if the character goes at the end of the map
             it automatically come in this place and creates
             a new line */

            Slen[l]++;
           tl++;
           NumOfLine();
           m++;
            n=0;
             l++;
             SetColor(13);
           gotoxy(x-(x-10),y-(y-13)+m);
           printf("%c",wr[k]); // last character to print we use this
           k++;
           n++;
           Slen[l]++;

        }

        else if(wr[k]>=CTRL_KEYPRESS('a') &&  wr[k]<=CTRL_KEYPRESS('z') &&
                wr[k]!=CTRL_KEYPRESS('o') && wr[k]!=CTRL_KEYPRESS('n') &&
                 wr[k]!=CTRL_KEYPRESS('q') && wr[k]!=CTRL_KEYPRESS('s') ||
                wr[k]>=CTRL_KEYPRESS(0) &&  wr[k]<=CTRL_KEYPRESS(9))
                {
                    /*if other key press out of o n s and q in control_keypress
                    this will be execute but I don't know how
                    m is not execute this place */
                    printf("\a");
                }


        else if(wr[k]==CTRL_KEYPRESS('s')) // for ctrl+s key to save the file

        {
            if(OpenOrNot==0)

            {
                // if another new file created this place is executed
                if(ifsaved==0)

                {
                    // if file is not saved at this block is executed

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
                    // if file is executed this block of code is executed

                      wr[k]='\0';

                     SaveTheFile();
                    // TempFileSaver(); to work in future I will keep it 

                }

            }

            else if(OpenOrNot==1)

            {
                // if file is opened this place is executed

                     wr[k]='\0';

                      SaveTheOpenFileFirst();

                      Slen[l]=0,CntAft[s]=0;

                        i=0,j=0,k=0,n=0,s=0;
            }

        }

        else if(wr[k]==CTRL_KEYPRESS('o'))

        {
            // open the files
                OpenOrNot=0;

                  i=0,j=0,k=0,l=0,n=0,m=0,s=0;

                  Slen[l]=0,CntAft[s]=0,tl=0,tempcount=0;

                OpenOrNot=0;
                 Area_Of_Opening();
                 Draw_Opening();
                  OpeningFilesList();
                    gotoxy(x-(x-6),xx-3);
                 NameOfOpenFile();
                 OpenTheFile();

                 i=0,j=0,k=0,n=0,s=0;
                  Slen[l]=0,CntAft[s]=0;

        }

        else if(wr[k]==CTRL_KEYPRESS('n'))/*Access of control key  ctrl+n key */

        {
            // create a new window

                OpenOrNot=0;
                 ifsaved=0;
                  i=0,j=0,k=0,l=0,n=0,m=0,s=0;
                  Slen[l]=0,CntAft[s]=0,tl=0,tempcount=0;

               Wmain();
                SetColor(13);

        }  
        else if(wr[k]=='' )//if ESC key is press it will exit the program

        {
            // to exit from program
            gotoxy(0,0);

         
            system("cls");
            
            exit(0);
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
