#include <stdio.h>

void main()
{
    int num, sum, temp, rem;
    printf("entrer number:");
    scanf("%d",&num);
    while(num>=10)
    {
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        if(sum>=10)
        {
            num = sum;
        }
    }
    printf("number is %d",sum);
}