#include <stdio.h>

void main()
{
    int a[][2] = {{12,22},{33,44}};
    int (*p)[2];
    p=a;
    for (int i=0; i<2;i++)
    {
        for (int j =0; j<2; j++)
        {
            printf("%d \n",*(*(p+i)+j));
        }
    }
    
}