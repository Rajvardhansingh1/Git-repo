#include <stdio.h>

void scanArray(int *A, int n)
{
    printf("enter array elementds : \n");
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }printf("\n");
}

void printArray(int *A, int n)
{
    for (int i =0; i<n; i++)
    {
        printf("%d \t", A[i]);
    }printf("\n");
}

void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    printf("Running selection sort : \n");
    for (int i = 0; i<n-1 ;i++)
    {
        indexOfMin = i;
        for (int j = i+1; j<n; j++)
        {
            if(A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
            
            
        }
        // swaping values
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
        
    }
}
    
void main()
{
    int n;
    printf("Enter the number of elements in the array : \n");
    scanf("%d", &n);
    int A[500];
    scanArray(A,n);
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
}