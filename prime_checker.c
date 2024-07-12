#include <stdio.h>

void main()
{
    int number, flag = 0;
    printf("enter a numbe : \n");
    scanf("%d", &number);
    for (int i = 2; i<=number/2; i++)
    {
        if(number%i == 0)
        {

            flag = 1;
            break;
        }
        else 
        {
            flag = 0;
        }        
    }
    if (flag == 1)
    {
        printf("not a prime number");
    }
    else
    {
        printf("prime number");
    }
}