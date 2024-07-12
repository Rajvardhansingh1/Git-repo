#include <stdio.h>

void main()
{
    char name[15];
    char *cptr = name;
    printf("Enter some word to find its length \n");
    scanf("%s",name);
    while (*cptr != '\0')
    {
        cptr++;
    }
    printf("Lenght = %d", cptr-name);
}