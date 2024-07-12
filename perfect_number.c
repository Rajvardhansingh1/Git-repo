#include <stdio.h>

void main()
{
    int number, sum=0;
    printf("Enter a number: ");
    
    scanf("%d", &number);
    for (int i =0; i>=number/2; i++)
    {
        if (number%i == 0)
        {
            sum+=i;

        }
    }
    if (sum == number)
    {
        printf("The Numbner %d is perfect ", number);
    }
    else
    {
        printf("The number %d is not perfect", number);
    }
}