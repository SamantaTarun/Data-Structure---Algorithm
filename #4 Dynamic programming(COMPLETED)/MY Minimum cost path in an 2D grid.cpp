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
int arr[50][50];
int Grid(int n,int m)
{
	int dp[n+1][m+1];
	//initialization
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0&&j==0)
		     dp[i][j]=inf;
			else if(i==0 && j!=0)
			  dp[i][j]=inf;
			else if(j==0 && i!=0)
			  dp[i][j]=inf;
			
		}
	}
	dp[1][1]=arr[1][1];
	//initialize the first row
    for(int i=1,j=1;j<=m;j++)
    {
    		if(i==1&&j==1)
    		   continue;
    		else
    		   dp[i][j]=dp[i][j-1]+arr[i][j];
	}
	//rest logic
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(dp[i][j-1]<dp[i-1][j])
			{
				dp[i][j]=dp[i][j-1]+arr[i][j];
			}
			else if(dp[i][j-1]>=dp[i-1][j])
			{
				dp[i][j]=dp[i-1][j]+arr[i][j];
			}
		}
	}
	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	return(dp[n][m]);
}
int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	
	
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
			   cin>>arr[i][j];	
			}
			
		}
		cout<<Grid(n,m);
		
	return 0;
}
