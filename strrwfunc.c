#include <stdio.h>

struct book
{
    char title;
    int pages;
    char author;
    int cost;
};

void read (struct book b[])
{
    for (int i=0; i<2;i++)
    {
        scanf("%s%d%s%d",b[i].title,&b[i].pages,b[i].author,&b[i].cost);
    }
}

void main()
{
    struct book b1[2];
    read(b1);
    for (int i=0; i<2;i++)
    {
        printf("%s%d%s%d",b1[i].title,b1[i].pages,b1[i].author,b1[i].cost);
    }

}
