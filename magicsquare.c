#include <stdio.h>
#include<stdlib.h>


void main()
{
    int n,m, magsqr[100], magsqc[100],count =0 ;
    printf("enter the value of n : \n");
    scanf("%d", &n);
    printf("enter the value of m : \n");
    scanf("%d", &m);
    int arr[n][m];
    printf("enter the value in the array \n");
    for (int i = 0; i<n; i++)
    {
        for (int j =0; j<m;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if(m!=n)
    {
        exit(0);
    }
    else
    {
        for (int i =0; i<n; i++)
        {
            for (int j = 0; j<m; j++)
            {
                magsqr[i] += arr[i][j];
            }
        }
        for (int i =0; i<n; i++)
        {
            for (int j = 0; j<m; j++)
            {
                magsqc[i]+= arr[j][i];
            }
        }
    }
    for (int i = 0; i<3;i++)
    {
        if(magsqr[i]==magsqc[i])
        {
            count++;
        }
    }
    if (count == 3)
    {
        printf("it is a magic square \n");
    }
    else
    {
        printf("It is not a magic square \n");
    }
    
}
