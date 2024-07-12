#include <stdio.h>

void main()
{
    int Arr[500], n, count =0;
    printf("Enter Value of n \n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(int i =0;i<n;i++)
    {
        for(int j =2; j<=Arr[i]/2;j++)
        {
            if(Arr[i]%2 == 0)

            {
                count = 1;
                break;
            }
            else
            {
                count =0;
            }
        }
        if(count==1)
        {
            printf("Prime number are: %d \n", Arr[i]);
        }
    }
}
