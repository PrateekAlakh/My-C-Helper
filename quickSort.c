#include<stdio.h>
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1),j;
    for(j = low; j <= high- 1; j++)
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

int main()
{
    int a[5]= {1,2,3,6,5};

    int i;
    quickSort(a,0,4);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
