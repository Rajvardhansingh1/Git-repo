#include <stdio.h>

void main()
{
    int a[3][3], b[3][3],m[3][3];
    int r,c,k,i,j;
    printf("Eneter the numebr of columns: \n");
    scanf("%d %d", &c, &r);
    printf("emnmter first matrix : \n");
    for (i=0; i<r; i++)
    {
        for( j = 0;j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("emnmter second matrix : \n");
    for (i=0; i<r; i++)
    {
        for(j = 0;j<c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i =0; i<r;i++)
    {
        for (j = 0; j<c; j++)
        {
            m[i][j] = 0;
            for( k =0; k<c;k++)
            {
                m[i][j] += a[i][k]*b[k][j];
            }
        }
    }
     for (int i=0; i<r; i++)
    {
        for(int j = 0;j<c; j++)
        {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}