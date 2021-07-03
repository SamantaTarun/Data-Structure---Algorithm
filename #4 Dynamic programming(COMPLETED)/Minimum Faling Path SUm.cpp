//Diameter of a Tree or length of the longest path

#include<bits/stdc++.h>
//#define<windows.h>
//prime fctorization  
//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define int      		long long
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
#define Max				100
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
int arr[Max][Max];
int Min_Fall_Sum(int n)
{
	//Dp array of size n*n
	
	int dp[n][n];
	
	
	//filling the bootom most row
	for(int i=n,j=1;j<=n;j++)
	{
		dp[i][j]=arr[i][j];
	}
	
	// filling from bottom to top
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1)
			{
				dp[i][j]=arr[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
			}
			else if(j==n)
			{
				dp[i][j]=arr[i][j]+min(dp[i+1][j],dp[i+1][j-1]);
			}
			else
			{
				dp[i][j]=arr[i][j]+min(min(dp[i+1][j-1],dp[i+1][j]),dp[i+1][j+1]);
			}
			
		}
	}
	int min=INT_MAX;
	for(int i=1,j=1;j<=n;j++)
	{
		if(dp[i][j]<min)
		   min=dp[i][j];
	}
	
	
	
	return min;
}
int32_t main()
{
	//s_t_s();
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);   
    
     
     
     int n;
     cin>>n;
     memset(arr,0,sizeof(arr));
     for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=n;j++)
     	{
     		cin>>arr[i][j];
		}
	 }
	 cout<<Min_Fall_Sum(n);
	    
	return 0;
}

