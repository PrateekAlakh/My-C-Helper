#include<stdio.h>
#include<string.h>

char* fun(char* num)
{
    int i,len;
    int j,k;
    for(len=0;num[len]!='\0';len++);
    i=len-1;
    j=i-1;
    while(j>=0)
    {
        if(num[j]>num[i])
        {
            num[j]=(char)(num[j]-1);
            num[i]='a';
        }
        i--;
        j--;
    }
    for(i=0; i<len; i++)
    {
        if(num[i]=='a')
        {
            for(k=i; k<len; k++)
            {
                num[k]='9';
            }
        }
    }

    if(num[0]=='0')
    {
        char* str=num;
        return str+1;
    }
    else
    {
        char* str=num;
        return str;
    }
}


int main()
{
    int i,j,n,t,c,k;
    char *a = (char*)malloc(125600*sizeof(char));
    scanf("%d ",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",a);
        a = fun(a);
        printf("Case #%d: %s\n",i+1,a);
    }
    return 0;
}
