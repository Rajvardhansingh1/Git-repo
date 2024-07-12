#include <stdio.h>

struct book
{
    char title[20];
    char author[20];
    int pages;
    float price;
};

void main()
{
    struct book b[2];
    printf("Enter values \n");
    for (int i = 0; i<3;i++)
    {
        scanf("%s%s%d%f",b[i].title, b[i].author,&b[i].pages,&b[i].price);
    }
    printf("Printing the values \n");
    for (int i=0;i<3;i++)
    {
        printf("Printing about book %d",i);
        printf("%s\n %s\n %d\n %f\n",b[i].title, b[i].author,b[i].pages,b[i].price);

    }
}