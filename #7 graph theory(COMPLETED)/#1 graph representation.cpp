//SUBLIME TEXT
#include<bits/stdc++.h>
//#define<windows.h>
//prime fctorization
//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define ll      		long long
#define pb    			push_back
#define					REP(i,n) for (int i=1;i<=n;i++)
#define mp    			make_pair
#define pii   			pair<int,int>
#define vi	  			vector<int>
#define vii 			vector<ii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define inf				1e18
#define ps(x,y)			fixed<<setprecision(y)<<x
#define mk(arr,n,type)	type *arr=new type[n];
#define w(x)			int x; cin>>x; while(x--)
const double PI=3.141592653589793238460;
typedef std::complex<double> Complex;
//mt19937					rng(chrono::steady_clock::now().time_since_epoch().count)


/*void s_t_s()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif
}
*/
int visited[100];
int dist[100];
vector<int>arr[100];
void dfs(int v)
{
	visited[v]=1;
	cout<<v<<"->";
	for(int child: arr[v])
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
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,M;
	cout<<"Enter the number of vertices and edges: ";
	cin>>N>>M;
	memset(visited,0,sizeof(visited));

	while(M--)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		//arr[b].push_back(a);

	}
    for(int i=1;i<=N;i++)
    {
    	cout<<i<<"->";
        for(auto child:arr[i])
        {
        	cout<<child<<",";
		}
		cout<<endl;
	}
	cout<<endl;
	//DFS code for counting connected component in tree only
	int count=0;
	for(int i=1;i<=N;i++)
    {
	    if(visited[i]==0)
	    {
	    	dfs(i);
	    	count++;
		}

	}
	cout<<endl<<count;
	cout<<endl;
	//Single Source Shortest path
	for(int i=1;i<=100;i++)
	{
		cout<<dist[i]<<" ";
	}
	return 0;
}
