#include<bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    struct Node *next;
}*first=NULL;


void Create(int A[],int n)
{
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));

    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {

        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}

void Display(struct Node *q)
{
    while(q)
    {

        cout<<q->data<<" ";
        q=q->next;
    }

   // cout<<endl;
}

void RDisplay(struct Node *q)
{
    if(q!=NULL)
    {

        cout<<q->data<<" ";
        RDisplay(q->next);
    }
    //cout<<endl;
}

//Insert after a given position

void insert(struct Node *p,int key,int pos)
{

    //move q for pos-1 times

    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));

    t->data=key;
    t->next=NULL;
    for(int i=0;i<pos-1;i++)
      p=p->next;

    t->next=p->next;
    p->next=t;
}

//Middle of a linked list

int Middle(struct Node *p)
{
    //slow moves one node at a time
    //fast moves  two nodes at a time

    if(p==NULL)
        return -1;
    struct Node *slow=p;
    struct Node *fast=p;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;


}

//Check Loop in a linked list

bool isLoop(struct Node *p)
{
    struct Node *slow=p;
    struct Node *fast=p;
    //slow pointer moves one node at a time and fast pointer moves 2 nodes at
    //a time if they meet at any point of time then the linked list has loop

    //else if one of them became null, then the linked list is linear
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;

}

int main()
{

    int A[]={3,5,7,10,15};

    Create(A,5);

    Display(first);
    cout<<endl;
    insert(first,12,4);
    Display(first);

    cout<<endl;

    cout<<Middle(first)<<endl;

    cout<<isLoop(first)<<endl;

    return 0;


}
