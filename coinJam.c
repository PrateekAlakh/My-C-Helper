#include<stdio.h>
#include<string.h>
#include<math.h>
int isPrime(int a)
{
    int i;
    if(a==2)
        return 1;
    if(a==1 || a%2==0)
        return 0;
    for(i=3;i<a/3;i+=2)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int baseVal(int a,int b)
{
    int i,sum=0;
    for(i=0;a!=0;a=a/10,i++)
    {
        sum+=(a%10)*pow(b,i);
    }
    return sum;
}
int coinJam(int a)
{
    int i;
    for(i=2;i<=10;i++)
    {
        int t = baseVal(a,i);
        if(!isPrime(t))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i,j,n,t,c;
    FILE *in = fopen("B-large-practice.in","r");
    FILE *out = fopen("output.out","w");
    char *a = (char*)malloc(125600*sizeof(char));
    fscanf(in,"%d",&t);
    printf("%d\n",t);
    a=(int*)malloc(10*sizeof(int));
    for(i=0;i<t;i++)
    {
        fscanf(in,"%d %d",);
    }
    fclose(out);
    fclose(in);
    return 0;
}
