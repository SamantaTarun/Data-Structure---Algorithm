#include<bits/stdc++.h>
using namespace std;
int parent[10001],Rank[10001];
// union by rank to reduce time complexity
// Here n number of friends are given and tell if a parson is friend of another

void initialize(int n)
{
    //By default , every node is disjoint so it itself parent of it
    for(int i=0;i<=n;i++){
        parent[i]=i;
        Rank[i]=0;
    }

     //initialize all ranks



}

//Return the representative of a particular set
int find(int x)
{
    if(parent[x]==x)
        return x;
    parent[x]=find(parent[x]);

    return parent[x];
}

// Combining two sets and update its representative
void Union(int x,int y)
{

    int x_rep=find(x);
    int y_rep=find(y);

    //Check if they belong to same
    if(x_rep==y_rep)
        return ;

    //make parent of y to the representative of x
    // making smaller tree as subtree of bigger tree

    if(Rank[x_rep]<Rank[y_rep])
        parent[x_rep]=y_rep;

    else if(Rank[y_rep]<Rank[x_rep])
        parent[y_rep]=x_rep;

    else
    {
        parent[y_rep]=x_rep;
        Rank[x_rep]++;
    }

}
int main()
{
    int n,q;

    cin>>n>>q;

    initialize(n);
    while(q--)
    {

        int x,y;
        char c;
        cin>>x>>y>>c;

        // c==m means making x,y in a single set
        //c==q means query to know if x is friend of y
        if(c=='m')
        {
            Union(x,y);

        }


       else if(c=='q')
       {
            if(find(x)==find(y))
               cout<<x<<" and "<<y<<" are "<<"friend of each other"<<endl;
            else
              cout<<x<<" and "<<y<<" not "<<"friend of each other"<<endl;

       }
    }



    return 0;
}
