#include <stdio.h>

void main()
{
    
    int a = 76;
    int ptra = &a;
    printf("The value of a is %d\n",&a);
    printf("%d \n",&ptra);
    printf("%d \n",ptra);
    
   /*
    int a =2;
    a++;
    int *ptra = &a;
    ptra++;
    printf("%d \n",a);
    printf("%d\n", &a);
    printf("%d \n",&ptra);
    printf("%d \n",ptra);
    printf("%d \n",*ptra);
    printf("%d", sizeof(int));
    */
}