#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{

    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
        cout<<"Stack overflow"<<endl;
   else
   {
      t->data=x;
      t->next=top;
      top=t;
   }
}

int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL)
        cout<<"Stack underflow"<<endl;
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }

    return x;

}
void Display()
{
    struct Node *p;
    p=top;

    while(p!=NULL){

        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}
int peek(int pos)
{
    int x=-1;
    Node *p=top;

    for(int i=0;i<pos-1&&p!=NULL;i++)
        p=p->next;
    if(p!=NULL)
        return p->data;
    else
        return -1; //Position is Invalid
}

int stackTop()
{

    if(top)
        return top->data;
    return -1;
}

int isEmpty()
{
    if(top==NULL)
        return 1;
    return 0;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    Display();

    cout<<pop()<<endl;

    cout<<peek(2)<<endl;
    cout<<stackTop()<<endl;
    cout<<isEmpty()<<endl;

    return 0;
}
