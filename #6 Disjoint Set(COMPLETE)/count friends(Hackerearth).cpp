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
//Count friends

int par[100001];
int R[100001];

int find(int a)
{
	if(par[a]==-1)
	{
		return a;
	}
	return par[a]=find(par[a]);
}

//merge using union by rank because in this problem we need size of the set
void merge(int a,int b)
{
	a=find(a);
	b=find(b);
	
	if(a==b) return;
    if(R[a]>R[b])
    {
    	par[b]=a;
    	R[a]+=R[b];
	}
	else
	{
		par[a]=b;
		R[b]+=R[a];
	}
	
	
}

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);       

    int n,m;
    int u,v;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++)
    {
    	par[i]=-1;
		R[i]=1;
    }
    for(int i=0;i<m;i++)
    {
    	cin>>u>>v;
    	merge(u,v);
	}
	
	//printing the number of friend of each person
	
	for(int i=1;i<=n;i++)
	{
		int p=find(i);  //Only parent rank was updated
		
		cout<<R[p]-1<<" ";   // vvi line
	}
	
	
	return 0;
}

