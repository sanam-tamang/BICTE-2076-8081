
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

    int i,j,temp,num,decimal,inc;
    printf("\nEnter number of binary sets ");
    scanf("%d",&num);
    int binary[num];
    printf("\nEnter binary code separated with space ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&binary[i]);
    }

    printf("Decrypted binary code\n");
    for(j=0;j<num;j++)
    {
        temp=binary[j];
        inc=0;
        decimal=0;
        while(temp!=0)
        {
            i=temp%10;
            decimal=decimal+(i*pow(2,inc));
            temp=temp/10;
            inc++;
        }
        printf("%c",decimal);

    }
    return 0;
}
