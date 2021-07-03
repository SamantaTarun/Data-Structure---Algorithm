#include<bits/stdc++.h>
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

int visited[100001],cc[100001];

int curr_cc;

void DFS(int node)
{
	visited[node]=1;
	
	cc[node]=curr_cc;
	
	for(int child:arr[node])
	{
		if(visited[child]==0)
		{
			DFS(child);
		}
	}
}

int32_t main()
{
	//s_t_s();

	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	int n,k,a,b;
	
	//cin>>t;
	
	string op;
	
    w(t)
    {
		 cin>>n>>k;
		 curr_cc=0;
		 vector<pii>edgelist;
		 for(int i=1;i<=n;i++)
		 {
		 	arr[i].clear();
			visited[i]=0;
		 }
		 
		 for(int i=1;i<=k;i++)
		 {
		 	cin>>a>>op>>b;
		 	
		 	if(op=="=")
		 	{
		 	  arr[a].pb(b);
		 	  arr[b].pb(a);
			  	
			}
			else
			{
				edgelist.pb({a,b});
			}
		 }
		 
		 
		 for(int i=1;i<=n;i++)
		 {
		 	if(visited[i]==0)
		 	{
		 		curr_cc++;
		 		DFS(i);
			}
		 }
		 bool flag=true;
		 for(int i=0;i<edgelist.size();i++)
		 {
		 	a=edgelist[i].ff;
		 	b=edgelist[i].ss;
		 	
		 	if(cc[a]==cc[b])
		 	{
		 	   flag=false;
			   break;	
			}
		 }
		
		 if(flag==true)
		 	cout<<"YES"<<endl;
		 
		 else if(flag==false)
		 	cout<<"NO"<<endl;
		 	
	}
	return 0;
}

