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
vi ar[1001];
const int maxN=10;
int level[1001], LCA[1001][maxN+1];


/*
int LCA(int a, int b)
{
	if(level[b]<level[a]) swap(a,b);
	
	int d=level[b]-level[a];
	
	while(d>0)
	{
		b=par[b];
		d--;
	}
	
	if(a==b) return a;
	
	while(par[a]!=par[b])
	a=par[a], b=par[b];
	
	return par[a];
}
*/

void dfs(int node, int lvl, int par)
{
	level[node]=lvl;
	
	LCA[node][0]=par;
	for(int child: ar[node])
	{
		if(child!=par)
		{
			dfs(child,lvl+1,node);
		}
	}
}
void init(int n)
{
	dfs(1,0,-1);
	for(int i=1;i<=maxN;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(LCA[j][i-1]!=-1)
			{
				int par=LCA[j][i-1];
				LCA[j][i]=LCA[par][i-1];
			}
		}
	}
}
int getLCA(int a, int b)
{
	if(level[b]<level[a])
	{
		swap(a,b);
	}
	int d=level[b]-level[a];
	
	while(d>0)
	{
		int i=log2(d);
		b=LCA[b][i];
		
		d-=1<<i;
	}
	if(a==b) return a;
	
	for(int i=maxN;i>=0;i--)
	{
		if(LCA[a][i]!=-1 && (LCA[a][i] != LCA[b][i]))
		{
			a=LCA[a][i], b=LCA[b][i];
		}
	}
	
	return LCA[a][0];
}

//Calculating distance between two nodes

int getDist(int a, int b)
{
	int lca= getLCA(a,b);
	return level[a]+level[b]- 2*level[lca];
}

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);      
	int n,a,b,q;
	
	
	cin>>n;
	
	for(int i=1;i<=maxN;i++)
	{
		for(int j=0;j<=n;j++)
		{
			LCA[i][j]=-1;
		}
	}
	
	for(int i=1;i<=n-1;i++)
	{
		cin>>a>>b, ar[a].pb(b), ar[b].pb(a);
	}
	init(n);
	
	cin>>q;
	
	while(q--)
	{
		cin>>a>>b;
		cout<<getDist(a,b)<<endl;
	}
	
	return 0;
}

