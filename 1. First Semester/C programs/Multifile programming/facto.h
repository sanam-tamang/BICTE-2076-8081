
#define MAX 16
int fact(int n)
{
    int result=1;
    int i;
    if(n==0)
    {
        return 1;
    }
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}


