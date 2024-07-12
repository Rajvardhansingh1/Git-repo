/// Code on learning about recursion

#include<stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;

    }
    else 
    {
        return (number * factorial(number-1));
    }
}

int main()
{
    int num;
    printf("Enter the number you wnat the factorial of : ");
    scanf("%d", &num);
    printf("The number of %d is %d", num, factorial(num));

    return 0;
}