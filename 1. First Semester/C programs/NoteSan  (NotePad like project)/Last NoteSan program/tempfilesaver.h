

void TempFileSaver(){

// this is not good to keep temp file saving method 
//so I do it in for later after finishing my examination
	 char ch;
    FILE *fp1;
    k=0;

       fp1=fopen("temp","w");
       if(fp1==NULL)
       {
           printf("Unable to save temp file ");
       }
       else
       {
        while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp1);
          k++;

          }

       }

    fclose(fp1);
	return;
	}
