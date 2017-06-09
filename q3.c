#include<stdio.h>
#include<string.h>
#include<math.h>

int lastpow(int a)
{
    int c=0;
    while(a!=0)
    {
        a=a>>1;
        c++;
    }
    return c-1;
}

int isPower(int n)
{
    int c = pow(2,lastpow(n+1));
    if(c==n+1)
        return 1;
    return 0;
}

int main()
{
    int i,n,k,j,c[20],e,r,o,d,a1;
    scanf("%d %d",&n,&k);
    if(isPower(n))
    {
        j = lastpow(k);
        r = (n)/(pow(2,j+1));
        printf("%d %d\n",r,r);
    }
    else
    {
        j = lastpow(k);
        for(a1=0;a1<=k;a1++)
        {

            if(n%2==0)
            {

            }
        }

        if(n%2==0)
            printf("%d %d",n+1,n);
        else
            printf("%d %d",n-1,n-1);

        /*j = lastpow(k);
        r = (n)/(pow(2,j+1));

        printf("%d %d\n",r+1,r);*/
    }
    return 0;
}
