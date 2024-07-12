#include <stdio.h>

int binarysearch( int arr[], int size, int element)
{
    int low,mid,high;
    low = 0;
    high = size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
    
        if(arr[mid]==element)
        {
            return mid+1;
        }
        else if(arr[mid]<element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

void main()
{
    int n;
    printf("enTER N : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of an array \n");
    for (int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int element = 65;
    int index = binarysearch(arr,n,element);
    printf("POstion of the element is : %d", index);
}