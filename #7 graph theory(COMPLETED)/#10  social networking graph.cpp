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
int level[100001],dist[100001],visited[100001];


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
				dist[child]=dist[curr]+1;
				
				q.push(child);
				visited[child]=1;
				level[dist[child]]++;
			}
		}
	}
}


int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	int n,m,a,b,q,src,d;
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);
	}
	
	cin>>q;
	while(q--)
	{
		cin>>src>>d;
		
		for(int i=0;i<=n;i++) level[i]=0, visited[i]=0;
		
		
		BFS(src);
		
		cout<<level[d]<<endl;
	}
	
	return 0;
}

