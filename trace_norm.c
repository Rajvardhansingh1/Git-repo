#include <stdio.h>
#include <math.h>

void main()
{
    int mat[3][3], trace = 0, norm = 0, sum=0;
    
    for (int i=0; i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i=0; i<3;i++)
    {
        trace += mat[i][i];
    }

    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            sum += mat[i][j]*mat[i][j];
        }
    }
    norm = sqrt(sum);

    printf("The trace and norm of the matrix are : %d %d\n", trace, norm);

}