#include <stdio.h>

void swap(int *x,int *y)
{
    int c=*x;
    *x=*y;
    *y=c;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
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

void printArray(int arr[], int size)
{
    int i,sum=0;
    for (i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
        sum+=arr[i];
    }
    printf("%d ",sum);
}
int main()
{
    int n,i,i1=0,i2=0,j;
    scanf("%d",&n);
    int *even=(int*)malloc(sizeof(int)*n);
    int *odd=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(j%2==0)
            even[i1++]=j;
        else
            odd[i2++]=j;
    }
    quickSort(even,0,i1-1);
    quickSort(odd,0,i2-1);
    printArray(even,i1);
    printArray(odd,i2);
    return 0;
}