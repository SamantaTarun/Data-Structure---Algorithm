#include<bits/stdc++.h>
using namespace std;
vector<int>arr[1001];

int n,m;
int indegree[1001];
// Topological sort: parents must be visited(printed) before its children
bool Topological_Sort_KHAN(int src)
{
	queue<int>q;
	// Add all 0 indegree vertices to the q
	for(int i=0;i<n;i++)
	{
		if(indegree[i]==0)
		   q.push(i);
	}
	int cnt=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		//cout<<curr<<" ";
		for(auto child:arr[curr])
		{
			indegree[child]--;
			if(indegree[child]==0)
			   q.push(child);
		}
		cnt++;
	}
	return(cnt!=n);    
}


int main()
{
	
	cin>>n>>m;

	memset(indegree,0,sizeof(indegree));
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[x].push_back(y); // as it is directed graph only
		indegree[y]++;
	}
	
    (Topological_Sort_KHAN(0)==true)?cout<<"The graph has cycle"<<endl:cout<<"The graph doesn't contain any cycle"<<endl;
	
	
	
}
