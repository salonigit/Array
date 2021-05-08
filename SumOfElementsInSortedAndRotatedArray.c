#include<stdio.h>

int sumOfPair(int arr[],int sum,int n)
{
    int i,count;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        break;
    }
    int h=i;
    int l=(i+1)/n;
    while(l!=h)
    {
        if(arr[h]+arr[l]==sum)
        count++;
    }
}

int main()
{
    int n,sum;

    printf("Enter number of Elements in array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Sum of Pair : ");
    scanf("%d",&sum);

    printf("Number of pairs whose sum is %d = %d",sum,sumOfPair(arr,sum,n));

    return 0;
}