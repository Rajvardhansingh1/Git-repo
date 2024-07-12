#include <stdio.h>

void main()
{
    int n, arr[20], i,pos, element, temp;
    printf("eneter the maximum value in an array \n");
    scanf("%d", &n);
    printf("enter array elements \n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("eneter element to be added \n");
    scanf("%d", &element);

    printf("enter the postion where the array should be added : \n");
    scanf("%d", &pos);

    for (i = n-1; i>pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = element;
    printf("The new array is:  \n");

    for(int i = 0; i<n; i++)
    {
        printf("%d \n", arr[i]);
    }

}