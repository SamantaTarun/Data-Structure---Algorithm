#include<bits/stdc++.h>
using namespace std;

struct Node
{

    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if(root!=NULL)
    {

        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}

//Size of a Binary Tree i.e No. of nodes in a Binary Tree

int getSize(Node *root)
{
    if(root==NULL)
        return 0;
    return 1+getSize(root->left)+getSize(root->right);
}

//Maximum Value Node in a Binary Tree

int getMax(Node *root)
{

    if(root==NULL)
        return 0;
    return max(root->key,max(getMax(root->left),getMax(root->right)));
}

//Height Of a Binary Tree->No. of Node From root to leaf Node

int Height(Node *root)
{

    if(root==NULL)
        return 0;
    return max(Height(root->left),Height(root->right))+1;
}

//counting Leaf Nodes ,Node with Degree 1,2
//1. counting Leaf Nodes(degree 0)
int Count_deg_zero(struct Node *p)
{

    int x,y;
    if(p!=NULL)
    {

        x=Count(p->lchild);
        y=Count(p->rchild);
        if(p->lchild==NULL&&p->rchild==NULL)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}
//2. counting Nodes with degree two

int Count_deg_two(struct Node *p)
{

    int x,y;
    if(p!=NULL)
    {

        x=Count(p->lchild);
        y=Count(p->rchild);
        if(p->lchild!=NULL&&p->rchild!=NULL)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

//3. counting Nodes with degree one or two(i.e. all internal Nodes)

int Count_deg_two_one(struct Node *p)
{

    int x,y;
    if(p!=NULL)
    {

        x=Count(p->lchild);
        y=Count(p->rchild);
        if(p->lchild!=NULL||p->rchild!=NULL)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}
//3. counting Nodes with degree exactly one

int Count_deg_two_one(struct Node *p)
{

    int x,y;
    if(p!=NULL)
    {

        x=Count(p->lchild);
        y=Count(p->rchild);
        if((p->lchild!=NULL&&p->rchild==NULL)||(p->lchild==NULL&&p->rchild!=NULL))
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}



int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    cout<<"Inorder Traversal: ";
    inorder(root);

    cout<<"\nPreorder Traversal: ";
    preorder(root);

    cout<<"\nPostorder Traversal: ";
    postorder(root);

    cout<<"\ngetSize: Number Of Nodes: "<<getSize(root);

    cout<<"\nMaximum Value Node: "<<getMax(root);

    cout<<"\nHeight Of the Binary Tree: "<<Height(root);


    return 0;

}
