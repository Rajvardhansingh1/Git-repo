#include <stdio.h>

void main()
{
    int number,temp,rev = 0, new = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    temp = number;
    while(temp!=0)
    {
        rev = temp%10;
        new = new*10+rev;
        temp = temp/10;

    }
    if (new == number)
    {
        printf("palindrome");

    }
    else{
        printf("Not palindrome");
    }
}