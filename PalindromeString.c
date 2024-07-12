#include <stdio.h>
#include <string.h>

void main()
{
    char s[200], s1[200] = {}, temp;
    int i,a;
    printf("Enter String : ");
    scanf("%s",s);
    for (i=0; s[i] != '\0'; i++);
    printf("%d", i);
    for (int j = 0; j <= i/2; j++)
    {
        temp = s[i];
        s[i] = s1[j-1-i];
        s1[j-i-1] = temp;
    }
    a = strcmp(s,s1);
    if(a==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not Plaindrome %s %s", s,s1);
    }
}