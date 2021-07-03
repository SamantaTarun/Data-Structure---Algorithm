#include<bits/stdc++.h>
using namespace std;


struct Node{

  int key;
  Node *left,*right;

  Node(int k)
  {

      key=k;
      left=right=NULL;
  }

};

void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";

        preorder(root->left);

        preorder(root->right);
    }
}

//Recursive Implementation Of Search Function
bool RSearch(Node *root,int x)
{
    if(root==NULL)
        return false;
    else if(root->key==x)
        return true;
    else if(root->key>x)
        return RSearch(root->left,x);
    else
        return RSearch(root->right,x);
}

//Iterative Implementation Of Search Function

bool ISearch(Node *root,int x)
{
    while(root!=NULL)
    {
        if(root->key==x)
            return true;
        else if(root->key<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}

//Recursive Insert Function

Node *Recursive_Insert(Node *root,int x)
{
    if(root==NULL)
        return new Node(x);
    else if(root->key<x)
        root->right=Insert(root->right,x);
    else if(root->key>x)
        root->left=Insert(root->left,x);

    return root;

}

Node *Iterative_Insert(Node *root,int x)
{


}


int main()
{
    Node *root;
    root=new Node(15);
    root->left=new Node(5);

    root->right=new Node(20);
    root->left->left=new Node(3);

    root->right->left=new Node(18);
    root->right->right=new Node(80);
    root->right->left->left=new Node(16);

    preorder(root);

    cout<<endl;

    ISearch(root,80)?cout<<"Key Found\n":cout<<"Key Not Found\n";

    cout<<endl;
    Iterative_Insert(root,8);
    preorder(root);


    return 0;
}
