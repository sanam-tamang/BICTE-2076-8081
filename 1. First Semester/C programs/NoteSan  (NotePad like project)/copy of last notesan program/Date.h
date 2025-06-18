
void date()
{
    time_t t;
    t=time(NULL);
   SetColor(10);
    printf("%s",ctime(&t));
    return;

}
