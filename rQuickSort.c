#include<stdio.h>
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
    swap(&arr[pivot_index ], &arr[end]); // swap random pivot to end.
    pivot_index = end;
    i = start -1;

    for( j = start; j <= end - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[pivot_index]); // place the pivot to right place

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

int main()
{
    int a[5]= {5,4,3,2,1};
    int i;
    quickSort(a,0,4);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
