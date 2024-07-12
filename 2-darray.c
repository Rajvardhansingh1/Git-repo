#include <stdio.h>

void main()
{
    int arr[3][3];
    for (int i=0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("printing 2-D array");
    for (int i=0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

}