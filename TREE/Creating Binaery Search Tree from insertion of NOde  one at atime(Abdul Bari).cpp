#include<bits/stdc++.h>
using namespace std;

struct Node{
  struct Node *lchild;
  int data;
  struct Node *rchild;

}*root=NULL;


void Insert(int key)
{
    struct Node *t=root;
    struct Node *r=NULL,*p;
    //If this is a very first Node
    if(root==NULL)
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    //Searching the Place where to insert && iF THE kEY IS PRESENT OR NO NOT
    while(t!=NULL)
    {
        r=t;  //Hera r is a trailing pointer
        if(key==t->data)
            return;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;

    }
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;

    if(key<r->data)
        r->lchild=p;
    else
        r->rchild=p;

}

struct Node *RInsert(struct Node *p,int key)
{
    struct Node *t=NULL;

    if(p==NULL)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }

    if(key<p->data)
        p->lchild=RInsert(p->lchild,key);
    else if(key>p->data)
        p->rchild=RInsert(p->rchild,key);

    return p;

}

struct Node *Search(int key)
{
    struct Node *t=root;

    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return NULL;
}

int Height(struct Node *p)
{
    int x,y;
    if(p==NULL) return 0;

    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;

}

struct Node *InPre(struct Node *p)
{
    while(p && p->rchild!=NULL)
        p=p->rchild;
    return p;
}
struct Node *InSuc(struct Node *p)
{
    while(p && p->lchild!=NULL)
        p=p->lchild;
    return p;
}
struct Node *Delete(struct Node *p,int key)
{
    struct Node *Q;

    if(p==NULL)
        return NULL;
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
            root==NULL;
        free(p);
        return NULL;
    }
   if(key<p->data)
        p->lchild=Delete(p->lchild,key);
   else if(key>p->data)
        p->rchild=Delete(p->rchild,key);
   else
   {
       if(Height(p->lchild)>Height(p->rchild))
       {
           Q=InPre(p->lchild);
           p->data=Q->data;

           p->lchild=Delete(p->lchild,Q->data);
       }
       else
       {
           Q=InSuc(p->rchild);
           p->data=Q->data;
           p->rchild=Delete(p->rchild,Q->data);
       }

   }
}

void Inorder(struct Node *p){

  if(p!=NULL)
  {
      Inorder(p->lchild);
      cout<<p->data<<" ";
      Inorder(p->rchild);
  }
}
int main()
{
    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);
    RInsert(root,19);


    Inorder(root);

    cout<<endl;
    struct Node *temp;
    temp=Search(20);
    if(temp!=NULL)
        cout<<"Key Found: "<<temp->data<<endl;
    else
        cout<<"Key Not Found: "<<temp->data<<endl;

    Delete(root,30);
    Inorder(root);

    return 0;
}
