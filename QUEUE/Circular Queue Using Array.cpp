#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
        cout<<"Quueu is Full"<<endl;
    else
        {
            q->rear=(q->rear+1)%q->size;
            q->Q[q->rear]=x;

        }
}

int dqueue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
        cout<<"Queue is Empty"<<endl;
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];

    }

    return x;
}

void Dispaly(struct Queue q)
{
    int i=q.front+1;
    do{
        cout<<q.Q[i]<<" ";
        i=(i+1)%q.size;
    }
    while(i!=(q.rear+1)%q.size);

    cout<<"\n";
}
int main()
{
    struct Queue q;
    Create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);

    Dispaly(q);

    cout<<dqueue(&q)<<endl;

    return 0;
}
