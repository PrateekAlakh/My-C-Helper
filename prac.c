#include<stdio.h>
#include<math.h>
FILE *in=NULL,*out=NULL;
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
int partition(int* arr, int start, int end)
{
    int pivot_index = start + rand() % (end - start + 1);
    int pivot = arr[pivot_index ];
    int j,i;
    swap(&arr[pivot_index ], &arr[end]);
    pivot_index = end;
    i = start -1;

    for( j = start; j <= end - 1; j++)
    {
        if(arr[j] > pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[pivot_index]);
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void f1(int n,int k,int cae)
{
    int a1,m,i,j,res,h1,h = lastpow(n)+1;
    int **a,**r;
    a = (int**)malloc(h*sizeof(int*));
    for(i=0; i<h; i++)
    {
        j=pow(2,i);
        a[i] = (int*)malloc(sizeof(int)*j);
    }

    a[0][0]=n;
    for(i=1; i<h; i++)
    {
        m=pow(2,i);
        for(j=0; j<m; j+=2)
        {
            if(a[i-1][j/2]%2!=0)
            {
                a[i][j]=(a[i-1][j/2]/2);
                a[i][j+1]=(a[i-1][j/2]/2);
            }
            else
            {
                a[i][j]=((a[i-1][j/2]/2) - 1);
                a[i][j+1]=(a[i-1][j/2]/2);
            }
        }
        if(i!=h-1)
            quickSort(a[i],0,j-1);
    }
    h1= lastpow(k);
    i=k-pow(2,h1);
    res = a[h1][i];
    if(res%2==0)
        fprintf(out,"Case #%d: %d %d\n",cae+1,(res/2),(res/2)-1);
    else
        fprintf(out,"Case #%d: %d %d\n",cae+1,(res/2),res/2);
}

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

int main()
{
    int t,a1,n,k;
    in = fopen("input.in","r");
    out = fopen("output.out","w");
    fscanf(in,"%d",&t);
    for(a1=0; a1<t; a1++)
    {
        fscanf(in,"%d %d",&n,&k);
        if(n>k)
            f1(n,k,a1);
        else
            fprintf(out,"Case #%d: 0 0\n",a1+1);
    }
    fclose(in);
    fclose(out);
    return 0;
}
