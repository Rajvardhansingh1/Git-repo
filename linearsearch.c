#include <stdio.h>

void main()
{
    int n,found = 0,pos =0;
    printf("enter the value of n : \n");
    scanf("%d", &n);
    int arr[n], key;
    for (int i = 0; i<n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("enter search elemtns");
    scanf("%d", &key);
    for (int i = 0; i<n;i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            pos = i+1;
            break;
        }
    }
    if(found==1)
    {
        printf("element found in %d position ", pos);

    }
    else
    {
        printf("element not found");
    }
}