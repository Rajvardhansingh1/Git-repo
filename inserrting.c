#include <stdio.h>

void main()
{
    int a[100], n,i, pos, ele;
    scanf("%d",&n); // number of elements
    printf("\nEnter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the element and position of insertion:");
    scanf("%d %d",&ele,&pos);
    for (int i =n-1; i<pos; i--)
    {
        a[i++] = a[i];
    }
    a[pos-1] = ele;
    printf("printing the array");
    for (int i =0 ; i<n ; i++)
    {
        printf("%d \n", a[i]);
    }
}