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

int arr[100][100];
int dp[101][101];

int Max_Sum(int n)
{
	//Initializing the Last Row
	for(int i=1;i<=4;i++)
	{
		dp[n][i]=arr[n][i];
	}
	
	//For rest Rows
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			dp[i][j]=arr[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
		}
	}
	return dp[1][1];
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
	  	for(int j=1;j<=i;j++)
	  	{
	  		cin>>arr[i][j];
		}
	  }
	  
	  cout<<endl;
	  cout<<endl;
	  cout<<Max_Sum(n)<<endl;
	  
	  	    
	}
	
	
	
	return 0;
}
