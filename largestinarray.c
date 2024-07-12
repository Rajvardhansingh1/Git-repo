#include <stdio.h>

void main()
{
    int Arr[500], n, largest,smallest;
    printf("Enter Value of n \n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
    }
    largest = Arr[0];
    for (int i=0;i<n;i++)
    {
        if(Arr[i]>largest)
        {
            largest = Arr[i];
        }
    }
    smallest = Arr[0];
    for (int i=0;i<n;i++)
    {
        if (Arr[i]<smallest)
        {
            smallest = Arr[i];
        }
    }
    printf("smallest and largest = %d %d", smallest, largest);

}