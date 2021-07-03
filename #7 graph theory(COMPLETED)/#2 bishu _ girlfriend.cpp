//Bishu & his girlfriend

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
#define inf				1000000000
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
int visited[1001];
int dist[1001];
vi arr[1001];
void dfs(int node,int d)
{
	visited[node]=1;
	printf("%d ",node);
	dist[node]=d;
	//cout<<node<<" ";
	for(int child : arr[node])
	{
		if(visited[child]==0)
		{
			dfs(child, dist[node]+1);
		}
	}
	
		  
}
int main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,q,a,b;
	cin>>n;
	memset(visited,0,sizeof(visited));
	
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
		
	}
    
	dfs(1,0);
	int ans=-1, min_dist=inf;
	cin>>q;
	while(q--)
	{
		int girl_city;
		cin>>girl_city;
		if(dist[girl_city]<min_dist)
		  min_dist=dist[girl_city], ans=girl_city;
		else
		{
			if(dist[girl_city]==min_dist && girl_city<ans)
			{
				ans=girl_city;
			}
		}
		
	}
	cout<<endl<<ans<<endl;
	return 0;
}

