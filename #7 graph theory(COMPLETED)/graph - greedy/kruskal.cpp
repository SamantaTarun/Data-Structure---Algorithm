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


struct edge
{
	int a;
	int b;
	int w;
};

edge ar[100000];
int par[10000];


bool comp(edge m,edge n)
{
	if(m.w<n.w)
	  return true;
	return false;
}
int find(int a)
{
	if(par[a]==-1)
	  return a;
	return par[a]=find(par[a]);
}
void merge_union(int a,int b)
{
	
	par[a]=b;
}
int main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);       
	int n,m,a,b,w;
	int sum=0;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++) par[i]=-1;
	
	for(int i=0;i<m;i++)
	{
		cin>>ar[i].a>>ar[i].b>>ar[i].w;
	}
	
	sort(ar,ar+m,comp);
	
	for(int i=0;i<m;i++)
	{
		a=find(ar[i].a);
		b=find(ar[i].b);
		
		if(a!=b)
		{
			sum+=ar[i].w;
			merge_union(a,b);
		}	  	
	}
	
	cout<<sum;
	return 0;
}

