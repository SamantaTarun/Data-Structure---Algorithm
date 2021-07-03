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
#define	FIO				ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define BLOCK			555 // Square Root of maximum number of elements
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


struct Query
{
	int l;
	int r;
	int i;
};

Query Q[200001];
int arr[30001], ans[200001];
int fre[10000001];
int cnt=0;
bool comp(Query a, Query b)
{
	
	if(a.l/BLOCK != b.l/BLOCK)
	 return a.l/BLOCK < BLOCK;
	 
	return a.r<b.r;
}

void add(int pos)
{
	fre[arr[pos]]++;
	
	if(fre[arr[pos]]==1)
	cnt++;
}

void remove(int pos)
{
	fre[arr[pos]]--;
	
	if(fre[arr[pos]]==0)
	cnt--;
}
int32_t main()
{
	//s_t_s();
	FIO;
	
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>Q[i].l>>Q[i].r;
		
		Q[i].i=i, Q[i].l--, Q[i].r--;
	}
	
	sort(Q, Q+q, comp);
	
	
	int ML=0, MR=-1;
	
	for(int i=0;i<q;i++)
	{
		int L=Q[i].l;
		int R=Q[i].r;
		
		while(ML>L)
		ML--, add(ML);
		
		while(MR<R)
		MR++, add(MR);
		
		while(ML<L)
		 remove(ML),ML++;
		
		while(MR>R)
		remove(MR),MR--;
		
		ans[Q[i].i]=cnt;
	}
	
	for(int i=0;i<q;i++)
	  cout<<ans[i]<<"\n";
	return 0;
}
