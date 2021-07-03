#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*Head=NULL;

void Create(int A[],int n)
{
    struct Node *t,*last;

    Head=(struct Node *)malloc(sizeof(struct Node));

    Head->data=A[0];
    Head->next=Head;

    last=Head;

    for(int i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p)
{

    do{

        cout<<p->data<<" ";
        p=p->next;
    }while(p!=Head);

    cout<<endl;
}

int length(struct Node *p)
{
    int len=0;
    do{

        len++;
        p=p->next;
    }while(p!=Head);

    return len;
}

//Insert ->before First Node
//At any given position

void Insert(struct Node *p,int index,int x)
{
    struct Node *t;


    //Index is valid or not

    if(index<0||index>length(p))
        return ;

    //insert Before First Node

    if(index==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;

        if(Head==NULL)
        {
            Head=t;
            Head->next=Head;
        }
        else
        {

            while(p->next!=Head ) p=p->next;


            p->next=t;
            t->next=Head;
            Head=t;

        }
    }
    else
    {
        for(int i=0;i<index-1;i++) p=p->next;

        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->next=p->next;
        p->next=t;


    }

}

//Delete ->Head Node
//Any Other Node
int Delete(struct Node *p,int index)
{

    struct Node *q;

    int x;

    if(index<0||index>length(Head))
        return -1;

    if(index==1)
    {

        while(p->next!=Head)p=p->next;
        x=Head->data;
        if(Head==p)
        {
            free(Head);
            Head=NULL;
        }
        else
        {
            p->next=Head->next;

            free(Head);
            Head=p->next;

        }
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        q=p->next;

        p->next=q->next;

        x=q->data;
        free(q);
    }
    return x;
}

int main()
{
    int A[]={2,3,4,5,6};

    Create(A,5);

    Display(Head);

    Insert(Head,3,10);

    cout<<endl;
    Display(Head);

    cout<<endl;

    cout<<Delete(Head,4)<<endl;

    return 0;
}
