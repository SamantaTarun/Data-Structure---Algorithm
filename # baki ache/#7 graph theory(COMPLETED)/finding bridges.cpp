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
vi arr[100001];
int in[100001], low[100001], vis[100001];
int timer;
void dfs(int node, int par)
{
	vis[node]=1;
	in[node]=low[node]=timer;
	timer++;
	
	for(auto child: arr[node])
	{
		if(child==par) continue;
		
		
		if(vis[child]==1)
		{
			//edge node- child is a back edge
			low[node]=min(low[node], in[child]);
		}
		else
		{
			//edge node- child is a forward edge
			dfs(child,node);
			
			if(low[child]>in[node])
            cout<<node<<" - "<<child<<" is a bridge"<<endl;
            
            low[node]=min(low[node],low[child]);
				
				
			
		}
	}
}
int32_t main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	int a,b,m,n,src,d,q;
	cin>>n>>m;
	

    while(m--)
    {
    	cin>>a>>b, arr[a].pb(b), arr[b].pb(a);
    	dfs(1,-1);
	}
	return 0;
}

