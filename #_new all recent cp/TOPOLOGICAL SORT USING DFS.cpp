#include<bits/stdc++.h>
using namespace std;
vector<int>arr[1001];
int visited[1001];

stack<int>st;
// Topological sort: parents must be visited(printed) before its children
void Topological_Sort_DFS(int src)
{
	visited[src]=1;
	
	for(auto child:arr[src])
	{
		if(visited[child]==0)
		{
			Topological_Sort_DFS(child);
		}
	}
	st.push(src);
}

void PrintTopological_Sort()
{
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[x].push_back(y); // as it is directed graph only
	}
	for(int i=0;i<n;i++)
	{
		if(visited[i]==0)
		   Topological_Sort_DFS(i);
	}
	
	PrintTopological_Sort();
}
