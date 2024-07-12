#include <stdio.h>

void func(int *A, int n)
{
    printf("Enter values in the array : \n");
    for (int i =0; i<n; i++)
    {
        scanf("%d" , &A[i]);

    }
}
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
void funcprint(int *A, int n)
{
    printf("prining values in the array : \n");
    for (int i =0; i<n; i++)
    {
        printf("\n %d \n" , A[i]);

    }
}
void main()
{
    int n;
    printf("enter value of n \n");
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    func(arr,n);
    selectionSort(arr,n);
    for(int i = 0; i<n;i++)
    {
        even[i] = 0;
        odd[i] = 0;
        if(i%2 == 0)
        {
            even[i] = arr[i];
        }
        else
        {
            odd[i] = arr[i];
        }
    }
    funcprint(arr,n);
    funcprint(even,n);
    funcprint(odd,n);


}