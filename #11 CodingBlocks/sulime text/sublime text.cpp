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

int arr[100001], st[400004];

//Building the segment tree

void build(int si,int ss,int se)
{
	//Base case- For leaf nodes
	if(ss==se)
	{
		st[si]=ss;
	}
	
	mid=(ss+se)/2;
	//Building the left subtree
	build(2*si,ss,mid);
	
	//Building the right asubtree
	
	build(2*si+1,mid+1,se);
	
	st[si]=min(st[2*si],st[2*si+1]);
}

void query(int si, int ss, int se,int qs,int qe)
{
	//Completely outside
	
	if(ss>qe&&se<qs)
	{
		return inf;
	}
	
	//completely inside
	
	if(ss>=qs && se<=qe)
	{
		return st[si];
	}
	
	int min=(ss+se)/2;
	
	return min(query(2*si,ss,mid,qs,qe),query(2*si+1,mid+1,qe,qs,qe));
}
int32_t main()
{
	//s_t_s();
	FIO;
	
	int n,q,l,r;
	cin>>n;
	
	for(int i=1;i<=n;i++) cin>>arr[i];
	
	build(1,1,n);
	
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		
		cout<<query(1,1,n,l+1,r+1)<<endl;  // l+1, r+1 because of 0 based index int the query
	}
	return 0;
}
