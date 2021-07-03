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


/*void s_t_s()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif
}
*/

int arr[20001];
int getMin(int n)
{
	int res=INT_MAX;
	
	for(int i=1;i<=n;i++)
	{
		res=min(res,arr[i]);
	}
	
	return res;
}
int32_t main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	w(t)
	{
	   int n;
	   cin>>n;
	   
	   for(int i=1;i<=n;i++)
	   {
	   	 cin>>arr[i];
	   }
	   
	   for(int i=n-3;i>=1;i--)
	   {
	   	  arr[i]+=min(arr[i+1],min(arr[i+2],arr[i+3]));
	   }
	   int t=3;
	   int k=min(n,t);
	   cout<<getMin(k);
	  	    
	}
	
	
	
	return 0;
}
