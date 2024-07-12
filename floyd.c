#include <stdio.h>

void main()
{
    int a,j,i,k =1, num;
    printf("enter number of terms ");
    scanf("%d",&num);
    for (i = 0; i<=num; i++)
    {
        for (j=0; j<=i; j++)
        {
            printf("%d \t", k++);
        }
        printf("\n");
    }



}