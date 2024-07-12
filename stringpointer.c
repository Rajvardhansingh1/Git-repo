#include <stdio.h>

void main()
{
    char *sports[5] = {"Golf,Hockey,Football,Cricket,Shooting"};
    for (int i=0; i<=5; i++)
    {
        printf("%s \n",*(sports[0] + 2));
    }
}