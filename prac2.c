#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k,l,c=0,j,flag=0;
    char *a = (char*)malloc(sizeof(char)*125600);
    scanf("%s",a);
    for(l=0;a[l]!='\0';l++);
    scanf("%d",&k);
    for(i=0;i<l-k+1;i++)
    {
        if(a[i]=='-')
        {
            for(j=i;j<i+k;j++)
            {
                if(a[j]=='-')
                    a[j]='+';
                else
                    a[j]='-';
            }
            c++;
        }
    }
    for(;i<l;i++)
    {
        if(a[i]=='-'){
            printf("INSOMNIA\n");
            flag=1;
            break;
            }
    }
    if(flag==0)
        printf("%d\n",c);
    return 0;
}
