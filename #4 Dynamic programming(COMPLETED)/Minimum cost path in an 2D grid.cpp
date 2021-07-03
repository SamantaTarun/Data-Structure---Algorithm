//Minimum cost path in an 2D grid
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define int     		long long
#define pb    			push_back
#define	REP(i,n) 		for(int i=0;i<n;i++)
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
int arr[50][50],dp[51][51];
int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	
	
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
		   cin>>arr[i][j];	
		}
		
	}
	int n=a+1;
	int m=b+1;
	//Initillization
	for(int i=n,j=1;j<=n;j++)
	{
		dp[i][j]=inf;
	}
	
	for(int j=m,i=1;i<=n-1;i++)
	{
		dp[i][j]=inf;
	}
	
	dp[n][m-1]=dp[n-1][m]=0;
	
	//Now compte as per table and condition
	
	for(int i=a;i>=1;i--)
	{
		for(int j=b;j>=1;j--)
		{
			dp[i][j]=arr[i][j]+min(dp[i+1][j],dp[i][j+1]);
		}
	}
	
	cout<<dp[1][1]<<endl;
	
	
	
	    
	return 0;
}
