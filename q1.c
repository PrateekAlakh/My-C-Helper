#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,t,l,c,k,i1,flag;
    char *a = (char*)malloc(1200*sizeof(char));
    scanf("%d",&t);
    for(i1=0; i1<t; i1++)
    {
        flag=1;
        c=0;
        scanf("%s",a);
        for(l=0; a[l]!='\0'; l++);
            scanf("%d",&k);
        for(i=0; i<l-k+1; i++)
        {
            if(a[i]=='-')
            {
                for(j=i; j<i+k; j++)
                {
                    if(a[j]=='-')
                        a[j]='+';
                    else
                        a[j]='-';
                }
                c++;
            }
        }
        for(; i<l; i++)
        {
            if(a[i]=='-')
            {
                printf("Case #%d: IMPOSSIBLE\n",i1+1);
                flag=0;
                break;
            }
        }
        if(flag)
            printf("Case #%d: %d\n",i1+1,c);
    }
    free(a);
    return 0;
}
