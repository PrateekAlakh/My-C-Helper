#include<stdio.h>
int main()
{
    int i,j,n,f1,t,*a,tmp,f,k;
    FILE *in = fopen("A-large-practice.in","r");
    FILE *out = fopen("abcd.out","w");
    fscanf(in,"%d",&t);
    printf("%d\n",t);
    a=(int*)malloc(10*sizeof(int));
    for(i=0;i<t;i++)
    {
        for(j=0;j<10;j++)
        {
            a[j]=0;
        }
        fscanf(in,"%d",&n);
        f1=0;
        for(k=1;k<=10000;k++)
        {
            tmp = n*k;
            f=0;
            for(;tmp!=0;tmp=tmp/10)
            {
                a[tmp%10]=1;
            }
            if(a[0]==0 || a[1]==0 || a[2]==0 || a[3]==0 || a[4]==0 || a[5]==0 || a[6]==0 || a[7]==0 || a[8]==0 || a[9]==0)
                f=1;
            else
            {
                fprintf(out,"Case #%d: %d\n",i+1,n*k);
                f1=1;
                break;
            }
        }
        if(f1==0)
        {
            fprintf(out,"Case #%d: INSOMNIA\n",i+1);
        }
    }
    fclose(out);
    fclose(in);
    return 0;
}
