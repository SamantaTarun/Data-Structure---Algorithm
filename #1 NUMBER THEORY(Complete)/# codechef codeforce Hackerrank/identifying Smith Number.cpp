//Bishu & his girlfriend

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
#define vii 			vector<ii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define inf				1000000000
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
//Identifying Smith Number

int digSum(int n)
{
	int res=0;
	while(n>0)
	{
		res+=n%10;
		n/=10;
	}
	
	return res;
}

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	w(t)
	{
		int n;
		cin>>n;
		
		//Digitsum of n 
		int x=digSum(n);
		
		//finding prime divisor of the number
		int y=0;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				{
					y+=digSum(i);
					n/=i;
				}
			}
			
		}
		if(n>1)
		{
		  	y+=digSum(n);
		}
		
		if(x==y)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
		
	}
	
	return 0;
}

