#include<bits/stdc++.h>
using namespace std;

vector<int>arr[10001];
int visited[10001],dist[10001];

void BFS(int src)
{
    queue<int>q;
    q.push(src);

    visited[src]=1;

    dist[src]=0;

    while(!q.empty())
    {
        int curr=q.front();

        q.pop();

        for(int child:arr[curr])
        {
            if(visited[child]==0)
            {
                q.push(child);
                dist[child]=dist[curr]+1;
                visited[child]=1;
            }
        }
    }
}
int main()
{
    int n,m,a,b,t;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m;
    	for(int i=1;i<=n;i++) arr[i].clear(), visited[i]=0;

    	while(m--) cin>>a>>b, arr[a].pb(b), arr[b].pb(a);

    	BFS(1);

    	for(int i=0;i<n;i++)
            cout<<dist[i]<<" ";
    	//cout<<dist[n]<<endl;
    return 0;
}
