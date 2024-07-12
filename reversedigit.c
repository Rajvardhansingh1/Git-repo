#include <stdio.h>
void main()
{
    int n, rem=0, rd;
    scanf("%d",&n);
    while (n!=0)
    {
        rd= n%10;
        n = n/10;
        rem = rem*10 + rd;
    }
    printf("%d",rem);
}