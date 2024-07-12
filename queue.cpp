#include<iostream>
 #define n 100
 using namespace std;

 class queue{
    private:
    int *arr;
    int front;
    int back;
    public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if(back == n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if(front==-1||back<front)
        {
            cout<<"The queue is Empty no elemnts found"<<endl;
        }
        front++;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"Empty queue"<<endl;
            return -1;
        }
        return arr[front];

    }
    bool empty()
    {
        if(front == -1 || front>back)
        {
            return true;
        }
        return false;
    }
 };

 int main()
 {
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
 }