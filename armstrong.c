#include <stdio.h>

void main()

{
    int number, rev, sum = 0,temp;
    printf("enter the number : \n");
    scanf("%d", &number);
    temp = number;
    while (temp!=0)
    {
        rev = temp%10;
        sum = rev*rev*rev + sum;
        temp = temp/10;

    }
    if (sum == number)
    {
        printf("Armstrong number");

    }
    else
    {
        printf("not armstrong");
    }
    
}