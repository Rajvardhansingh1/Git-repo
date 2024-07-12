#include <stdio.h>

void main()
{
    int Arr[500][500], n, count =0;
    printf("Enter Value of n \n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j =0; j<n;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    int rows = 0,cols = 0 ;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            rows += Arr[i][j];
            cols += Arr[j][i];
        }
    }
    printf("%d %d",rows,cols);
}