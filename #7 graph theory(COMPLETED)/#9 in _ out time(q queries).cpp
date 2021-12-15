//SUBLIME TEXT
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define int     		long long
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

void s_t_s()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif
}

vi arr[10001];
int in[10001],out[10001];
int visited[10001];
int timer=1;
// constructing in and out time array
bool DFS(int v)
{
	visited[v]=1;
	in[v]=timer++;
	
	for(int child:arr[v])
	{
		if(visited[child]==0)
		{
			DFS(child);
		}
	}
	out[v]=timer++;
}
int32_t main()
{
	s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,q,a,b;
	
	
	cin>>n>>q;
	
    for(int i=1;i<=n-1;i++)
    {
    	cin>>a>>b;
    	arr[a].pb(b);
    	arr[b].pb(a);
	}
	
	DFS(1);
	for(int i=1;i<=n;i++)
	{
		cout<<in[i]<<" ";
	}
	cout<<endl;
	
	for(int i=1;i<=n;i++)
	{
		cout<<out[i]<<" ";
	}
	
	cout<<endl;
	//Whether one node lies in the subtree of other node
	while(q--)
	{
		cin>>a>>b;
		if(in[a]>in[b] && out[a]<out[b])
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
