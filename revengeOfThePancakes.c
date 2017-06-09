#include<stdio.h>
#include<string.h>
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
        c=0;
        fscanf(in,"%s",a);
        for(n=0;a[n]!='\0';n++);
        for(j=0;j<n-1;j++)
        {
            if(a[j]!=a[j+1])
            {
                a[j]=a[j+1];
                c++;
            }
        }
        if(a[j]=='-')
            c++;
        fprintf(out,"Case #%d: %d\n",i+1,c);
    }
    fclose(out);
    fclose(in);
    return 0;
}
