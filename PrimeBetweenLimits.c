/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    int lowLim,highLim;
    printf("Enter low limit : \n");
    scanf("%d", &lowLim);
    printf("enter higher limt: \n");
    scanf("%d", &highLim);
    while (lowLim<= highLim)
    {
        if (lowLim % 2 != 0)
        {
            printf("\n %d", lowLim);
        }
        lowLim++;
    }

    return 0;
}