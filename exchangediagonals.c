#include<stdio.h>

void main()
{
    int mat[3][3],temp;
    for (int i=0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("printing 2-D array : \n");
    for (int i=0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

    for (int i =0; i<3;i++)
    {
        for (int j=0; j<3;j++)
        {
            temp = mat[i][i];
            mat[i][i] = mat[i][3-1-i];
            mat[i][3-1-i] = temp;
        }
    }
    
    printf("printing 2-D array : \n");
    for (int i=0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
}