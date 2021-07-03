#include<bits/stdc++.h>
using namespace std;


int visited[100];
int dist[100];

vector<int>arr[100];

void dfs(int v)
{
    visited[v]=1;

    cout<<v<<"->";
    for(int child:arr[v])
    {
        if(visited[child]==0)
        {
            dist[child]=dist[v]+1;
            dfs(child);
        }
    }
}
int main()
{
    int N,M;
    cout<<"Enter Number of vertices  and edges: ";

    cin>>N>>M;

    memset(visited,0,sizeof(visited));
    int a,b;

    while(M--)
    {
        cin>>a>>b;
        arr[a].push_back(b);

    }

    int cnt=0;
    for(int i=1;i<=N;i++)
    {
        if(visited[i]==0)
        {
            cnt++;
            dfs(i);
        }
    }

    cout<<"Number of Connected Component: "<<cnt<<endl;

    return 0;
}
