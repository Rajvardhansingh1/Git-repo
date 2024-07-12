// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[50];
    gets(a);
    int i = 0, count = 0;
    while (a[i]!='\0')
    {
        if (a[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("%d",++count);
    return 0;
}