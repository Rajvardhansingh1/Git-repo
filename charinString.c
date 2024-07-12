#include <stdio.h>

void main()
{
    int count = 0, i = 0;
    char a[100];
    printf("enter a string : \n");
    gets(a);
    while (a[i] != '\0')
    {
        count++;
        
        if(a[i] == ' ')
        {
            count--;
        }
        i++;
    }
    printf("the number of charecter in the string are : %d \n",count);
}