#include<iostream>
using namespace std;

struct circularQueue
{
    int front = 0;
    int rear = 0;
    int arr[10];
    int size = 10;
};

int isEmpty(struct circularQueue * q)
{
    if(q->front == q->rear)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if((q->rear+1)%q->size == q->front)
        return 1;
    return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if(isFull(q))
    {
        cout<<"\nQueue Overflowed";
        return;
    }
    if(isEmpty(q))
    {
        q->arr[q->rear] = val;
        q->rear = (q->rear+1)%q->size;
        return;
    }
    else
    {
        q->arr[q->rear] = val;
        q->rear = (q->rear+1)%q->size;
    }
}

int dequeue(struct circularQueue *q)
{
    int val = -1;
    if(isEmpty(q))
    {
        cout<<"\nQueue Underflowed";
    }
    else
    {
        val = q->arr[q->front];
        q->front = (q->front+1)%q->size;
    }
    return val;
}

void display(struct circularQueue* q)
{
    if(isEmpty(q))
    {
        cout<<"Queue is Empty";
        return;
    }
    for(int i = q->front; i<q->rear; i++)
    {
        cout<<"\nElement : "<<q->arr[i];
    }
    return;
}

int main(){
    struct circularQueue q;
    // // cout<<"1: Enter your Choice : "
    return 0;
}