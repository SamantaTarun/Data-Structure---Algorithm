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

int dp[201][201];
int N,M;

int32_t main()
{
	//s_t_s();
    
    cin>>N>>M;
    for(int i=1;i<=M;i++)  dp[N][i]=1;
    for(int i=1;i<=N;i++)  dp[i][M]=1;
    
    for(int i=N-1;i>=1;i--)
    {
    	for(int j=M-1;j>=1;j--)
    	{
    		dp[i][j]=dp[i+1][j]+dp[i][j+1];
		}
	}
	
	REP(i,N)
	{
		REP(j,M) cout<<dp[i][j]%mod<<" ";
		cout<<endl;
	}
	
	cout<<endl<<endl<<endl;
	
	cout<<"Unique No. of Ways: "<<dp[1][1]%mod;
	
	return 0;
}
