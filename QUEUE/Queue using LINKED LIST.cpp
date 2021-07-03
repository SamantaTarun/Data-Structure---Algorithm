#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *next;

}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));

    if(t==NULL)
        cout<<"Queue is Full"<<endl;
    else
    {
        t->data=x;
        t->next=NULL;
        //If it is first node
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }
    }

}

int dequeue()
{
    int x=-1;

    struct Node *t;

    if(front==NULL)
        cout<<"Queue is Empty"<<endl;
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p=front;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    Display();

    cout<<dequeue()<<endl;
    return 0;
}
