#include<stdio.h>
void selectionSort(int *A, int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
void main()
{
    int n;
    printf("enter the value of n : \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    selectionSort(arr,n);

    for(int i=0;i<n;i+=2)
    {
        printf("even elements : %d\n",arr[i]);
    }
    for(int i=1;i<n; i+=2)
    {
        printf("Odd elemenets : %d\n ",arr[i]);

    }
}