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

//Overall Complexity: O(n^2)
bool dp[10002][10002];
char arr[10002];
bool isPrime(int n)
{
	if(n==0||n==1)
	  return false;
	else if(n==2)
	   return true;
    else
    {
    	for(int i=2;i*i<=n;i++)
    	{
    		if(n%i==0)
    		  return false;
		}
	}
	return true;
}
int32_t main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	w(t)
	{
		    string s;
		    cin>>s;
		    int n=s.length();
		    //memset(arr,0,sizeof(arr));
			arr[0]='0';
			for(int i=1;i<=n;i++)
			{
				arr[i]=s[i-1];
			}
			
			//initializing the first two rows of DP table for length 0 or length 1 string
			
			for(int i=0;i<=n;i++)
			{
				dp[0][i]=true;
			}
			for(int i=1;i<=n;i++)
			{
				dp[1][i]=true;
			}
			
			//for rest rows
			
			for(int i=2;i<=n;i++)
			{
				for(int j=i;j<=n;j++)
				{
					if(arr[j]==arr[j-i+1] && dp[i-2][j-1]==true)
					  dp[i][j]=true;
					else
					  dp[i][j]=false;
				}
			}
			
			//printing the DP arary
			
			for(int i=0;i<=n;i++)
			{
				for(int j=0;j<=n;j++)
				{
					cout<<dp[i][j]<<" ";
				}
				cout<<endl;
			}
			
			int resL,resE;
			//SIZE OF THE LONGEST PALINDROMIC SUBSTRING
			
			for(int i=n;i>=0;i--)
			{
				int flag=0;
				for(int j=i;j<=n;j++)
				{
					if(dp[i][j]==1)
					{
						resL=i;
						resE=j;
						flag=1;
						break;
					
					}
				}
				if(flag==1)
				  break;
			}
			int k=resE-resL+1;
			for(int i=k;i<=resE;i++)
			{
				cout<<arr[i];
			}
			cout<<endl;
			
            
			
	}
	
	
	
	return 0;
}
