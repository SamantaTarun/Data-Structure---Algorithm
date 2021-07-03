//SUBLIME TEXT
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define ll     		long long
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
int dp[1001][1001];
int KnapSack(int val[],int wt[],int W,int n)
{
	if(n==0||W==0)
	{
		return 0;
	}
	else if(dp[n][W]!=-1)
	{
		return dp[n][W];
	}	  
	else if(wt[n-1]<=W)
	{
		return dp[n][W]=max(val[n-1]+KnapSack(val,wt,W-wt[n-1],n-1),KnapSack(val,wt,W,n-1));
	}
	else if(wt[n-1]>W)
	{
		return dp[n][W]=KnapSack(val,wt,W,n-1);
	}
}

int main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(dp,-1,sizeof(dp));
	int n,W;
	cout<<"Enter the Number of items: ";
	cin>>n;
	cout<<"\nEnter the total weight of the Knapsack: ";
	cin>>W;
	int val[n],wt[n];
	cout<<"\nEnter the value of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	cout<<"\nEnter the Weight of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
	}
	KnapSack(val,wt,W,n);
	cout<<dp[n][W];
	return 0;
}
