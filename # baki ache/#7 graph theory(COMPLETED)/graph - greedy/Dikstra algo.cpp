//Diameter of a Tree or length of the longest path

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
#define vii 			vector<pii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define INF				1000000000
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
vii adj[1001];

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);       
	int n,m,a,b,w;
	
	cin>>n>>m;
	
	while(m--)
	{
		cin>>a>>b>>w;
		adj[a].pb({b,w});
		adj[b].pb({a,w});
	}
	
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	
	vector<int> dist(n+1, INF);
	
	pq.push({0,1});
	
	dist[1]=0;
	
	while(!pq.empty())
	{
		int curr=pq.top().second;
		int curr_d=pq.top().first;
		pq.pop();
		
		for(pair<int,int> edge: adj[curr])
		{
			if(curr_d+edge.second<dist[edge.first])
			{
				dist[edge.first]=curr_d+edge.second;
				pq.push({dist[edge.first],edge.first});
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<dist[i]<<" ";
	}
	
	
	return 0;
}

