
void NumOfLine()
{

         for(a=1;a<=tl+1;a++)
                {
                   gotoxy(0,y-(y-12)+a);
                   printf("%d",a);
                }

         gotoxy(x-(x-6)+Slen[l],y-(y-13)+m);

}

void NumOfLineNeg()
{
            if(l<1000)
            {
            gotoxy(0,y-(y-12)+tl+2);
            printf("   ");
            }
           else if(l>=1000)
                {
                    gotoxy(0,y-(y-12)+tl+2);
                    printf("    ");
                }


         gotoxy(x-(x-6)+Slen[l],y-(y-13)+m);
}
