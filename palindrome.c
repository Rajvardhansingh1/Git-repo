#include <stdio.h>

void main()
{
    int num, rem, sum, temp;
    printf("enter a a number \n");
    scanf("%d",&num);
    temp=num;
    sum = 0;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
        printf("%d \n",sum);

    }
    printf("\n %d",sum);
    if(num == sum)
    {
        printf("palindfdfrom");
    }
    else
    {
        printf("not palindrom");
    }
}