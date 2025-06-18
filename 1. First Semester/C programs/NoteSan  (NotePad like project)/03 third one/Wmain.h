
void Wmain()
{
   system("cls");
   Draw_Area_Of_Note();
   if(ifsaved==0 && OpenOrNot==0)
   {
      gotoxy(x-(x-6),y-(y-6));
       printf("Untitled");

   }
   else if(OpenOrNot==1)
   {
      gotoxy(x-(x-6),y-(y-6));
       printf("%s",tempsave);
   }
   else if(ifsaved==1)
   {
      gotoxy(x-(x-6),y-(y-6));
       printf("%s",nameoffile);
   }
    gotoxy(x-(x-6),y-(y-8));
   printf("New     Ctrl+N ");
   gotoxy(x-(x-6),y-(y-9));
   printf("Open    Ctrl+O ");
   gotoxy(x-(x-6),y-(y-10));
   printf("Save    Ctrl+S ");
    gotoxy(x-(x-6),y-(y-11));
   printf("Exit    Ctrl+Q ");
    gotoxy(0,y-(y-13));
    NumOfLine();

   gotoxy(x-(x-6),y-(y-13)+m);
}