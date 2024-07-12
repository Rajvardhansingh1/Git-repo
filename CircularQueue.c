#include <stdio.h>
#include <stdlib.h>
#define size 10

int arr[size];
int f=-1;
int r = -1;

void enqueue(int value)
{
    if((r+1)%size == f)
    {
        printf("Queue is overflow \n");
    }
    else
    {
        r = (r+1)%size;
        arr[r] = value;
    }
}

int dequeue()
{
    if(f==r)
    {
        printf("Empty Queue");
    }
    else{
        f = (f+1)%size;
        return arr[f];
    }
}

int main()
{
    enqueue(100);
    enqueue(50);
    enqueue(5);
    enqueue(7);
    printf("%d \n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    enqueue(77);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
}