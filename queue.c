#include <stdio.h>
#include <stdlib.h>
#define size 100

int arr[size];
int f = -1;
int r=-1;

int isEmpty()
{
    if (f==r)
    return 1;
    else 
    return 0;
}

int isFull()
{
    if(r==size-1)
    return 1;
    else
    return 0;
}

void enqueue(int value)
{
    if(isFull())
    {
        printf("Queue is FUll");
    }
    else{
        if(f == -1)
        {
            f=0;
        }
        r++;
        arr[r] = value;
    }
}

int dequeue()
{
    if(isEmpty())
    {
        printf("queue is empty cannot dequeue");
    }
    int element = arr[f];
    f++;
    return element;
}

int main()
{
    enqueue(15);
    enqueue(14);
    printf("\n%d \n",dequeue());
    printf("\n%d \n", dequeue());
}