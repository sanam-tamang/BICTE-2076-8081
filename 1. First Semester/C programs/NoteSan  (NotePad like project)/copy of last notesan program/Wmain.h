

void Wmain()


{

   system("cls");

   Draw_Area_Of_Note();// after clear the screen this map also clear so again map to show

   if(ifsaved==0 && OpenOrNot==0)

   {

      gotoxy(2,y-(y-6));

      SetColor(12);

       printf("Untitled - NoteSan");

   }

   else if(OpenOrNot==1)

   {

      gotoxy(2,y-(y-6));

      SetColor(9);

       printf("%s - NoteSan",tempsave);

   }

   else if(ifsaved==1)

   {

      gotoxy(2,y-(y-6));

      SetColor(9);

       printf("%s -NoteSan",nameoffile);

   }

   gotoxy(r-25,y-(y-6));

   date();

  SetColor(14);

    gotoxy(2,y-(y-8));
    SetColor(10);

   printf("New     Ctrl+N ");
   SetColor(11);

   gotoxy(2,y-(y-9));

   printf("Open    Ctrl+O ");
   SetColor(13);

   gotoxy(2,y-(y-10));

   printf("Save    Ctrl+S ");

    gotoxy(2,y-(y-11));
    SetColor(12);

   printf("Exit    Shift+ESC ");

    gotoxy(2,y-(y-13)+tl);

    NumOfLine();
   gotoxy(x-(x-10),y-(y-13)+m);

}

