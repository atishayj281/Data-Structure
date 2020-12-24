#include <iostream>
using namespace std;

struct Queue
{
    int data;
    int size = 5;
    int front = -1;
    int rear = -1;
    int arr[5];
};

int isEmpty(struct Queue *Q)
{
    if (Q->front == -1 && Q->rear == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Queue *Q)
{
    if (Q->front == 0 && Q->rear == Q->size - 1)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct Queue *Q, int val)
{
    if (isEmpty(Q))
    {
        Q->front++;
        Q->rear++;
        Q->arr[Q->front] = val;
        return;
    }
    if (!isFull(Q))
    {
        if (Q->rear == Q->size - 1)
        {
            int dif = Q->front;
            int i;
            for (i = Q->front; i <= Q->rear; i++)
            {
                Q->arr[i - dif] = Q->arr[i];
            }
            Q->front = 0;
            Q->rear = i - dif + 1;
            Q->arr[Q->rear] = val;
            return;
        }
        else
        {
            Q->rear = Q->rear + 1;
            Q->arr[Q->rear] = val;
            return;
        }
    }
    else
    {
        cout << "Queue Overflowed";
        return;
    }
}

int dequeue(struct Queue *Q)
{
    if(isEmpty(Q))
    {
        cout<<"\nCan't Dequeue";
        return -1;
    }
    int val = Q->arr[Q->front];
    Q->front += 1;
    if(Q->front > Q->rear)
    {
        Q->front = -1;
        Q->rear = -1;
    }
    return val;
}

void display(struct Queue * Q)
{
    if(Q->front == -1 && Q->rear == -1)
    {
        cout<<"\nQueue is empty";
        return;
    }
    for(int i = Q->front; i<= Q->rear; i++)
    {
        cout<<"\nElement : "<<Q->arr[i];
    }
}

int main()
{
    struct Queue *Q;
    Q->front = -1;
    Q->rear = -1;
    display(Q);
    Enqueue(Q, 1);
    Enqueue(Q, 2);
    Enqueue(Q, 3);
    Enqueue(Q, 4);
    Enqueue(Q, 5);
    Enqueue(Q, 6);
    cout<<"\n";
    display(Q);
    Enqueue(Q, 7);
    cout<<"\n";
    dequeue(Q);
    display(Q);
    cout<<"\n";
    Enqueue(Q, 8);
    display(Q);
    
    
    return 0;
}