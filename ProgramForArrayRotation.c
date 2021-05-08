#include<stdio.h>

int main()
{
    int n,d,temp;
    printf("Enter number of Elements in array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter number of Elements to be rotated :");
    scanf("%d",&d);
    printf("Enter Elements of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<d;i++)
    {
        temp=arr[0];
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("Rotated Array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}