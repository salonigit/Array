#include<stdio.h>

int binarySearch();
int findpivot();
int sortedandrotatedsearch(int arr[],int n, int key)
{
    int pivot=findpivot(arr ,0 , n-1);

    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);
 
    if (arr[pivot] == key)
        return pivot;
    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);
    return binarySearch(arr, pivot + 1, n - 1, key);
}

int findpivot(int arr[],int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
    if (arr[low] >= arr[mid])
        return findpivot(arr, low, mid - 1);
    return findpivot(arr, mid + 1, high);
}

int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
    return binarySearch(arr, low, (mid - 1), key);
}

int main()
{
    int n,key,index;

    printf("Enter number of Elements in array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Key to be searched : ");
    scanf("%d",&key);

    index= sortedandrotatedsearch(arr,n,key);
    printf("Index of %d = %d",key,index);

    return 0;
}