//Graph Representation

#include<bits/stdc++.h>
using namespace std;

vector<int>vect[1001];
int dist[1000];
int visited[1001];

void DFS(int node)
{
	visited[node]=1;
	cout<<node<<"->";
	for(auto child:vect[node])
	{
		if(!visited[child])
		{
			dist[child]=dist[node]+1;
			DFS(child);
		}
		 
	}
	
}
int main()
{
	int N,M;
	cout<<"Enter the number of vertices and no. of edges: ";
	cin>>N>>M;
	memset(visited,0,sizeof(visited));
	int a,b;
	while(M--)
	{
		cin>>a>>b;
		vect[a].push_back(b);
		vect[b].push_back(a);
	}
	
	//Displaying the graph
	
	for(int i=1;i<=N;i++)
	{
	   cout<<i<<"->";
	   for(auto child:vect[i])
	   {
		 cout<<child<<",";
	   }
	   cout<<endl;
	}
	
	cout<<endl;
	
	//DFS
	int count=0;
	for(int i=1;i<=N;i++)
	{
		if(visited[i]==0)
		{
			count++;
			DFS(i);
		}
	}
	cout<<endl;
	cout<<"Number of Connected Componenet: "<<count<<endl;
	//Printing Distant from each node
	
	for(int i=1;i<=N;i++)
	{
		cout<<dist[i]<<" ";
	}
	return 0;
}
