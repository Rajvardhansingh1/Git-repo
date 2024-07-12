#include <stdio.h>


void printArray (int *arr, int n)
{
    printf("The array is : \n");
    for (int i = 0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
} 
void bubleSort(int *arr, int n)
{
    int temp;
    for (int i =0; i<n-1; i++)
    {
        for (int j= 0; j=n-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i<n;i++)
    {
        printf("the sorted array is : %d \t", arr[i]);
    }
}

void main()
{
    int n, temp;
    printf("Enter number");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }    
    bubleSort(A,n);
    printArray(A,n);
}