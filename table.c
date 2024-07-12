#include <stdio.h>

void main()
{
    int n, k;
    printf("enter a number ");
    scanf("%d",&n);
    printf("enter number of terms ");
    scanf("%d", &k);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=k; j++)
        {
            printf("%d x %d = %d \n", i,j, i*j);
        }
    }
}