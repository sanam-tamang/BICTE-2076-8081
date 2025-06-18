
void NumOfLine()
{
    // this count or increase num of lines
    SetColor(59);


         for(a=0;a<=tl;a++)
                {
                   gotoxy(1,y-(y-12)+a+1);
                   printf("%d",a+1);
                }

         gotoxy(x-(x-10)+Slen[l],y-(y-13)+m);

}

void NumOfLineNeg()
{
// this discrease the num of lines
    SetColor(59);

            if(tl>=0 || l>=0)
            {

            gotoxy(1,y-(y-12)+tl+2);
            printf("       ");
            }

         gotoxy(x-(x-10)+Slen[l],y-(y-13)+m);
}
