//SUBLIME TEXT// Printing all subsets of a set
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define ll     		    long long
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
int maxN=100000;
int isprime[100000];
ll dp[100000];
vector<int>vect;
vector<int>vect2;
vector<int>vect3;
void seive(int a,int b)
{
	//int maxN=100;
	// mark all number as prime;
	for(int i=1;i<=maxN;i++)
	{
		isprime[i]=1;  //mark all number as prime
	}
	isprime[0]=isprime[1]=0;  // mark 0 and 1 as not prime
	for(int i=2;i*i<=maxN;i++)
	{
		if(isprime[i])
		{
			for(int j=i*i;j<=maxN;j+=i)
			{
				isprime[j]=0;
			}
		}
	}
	for(int i=a;i<=b;i++)
	{
		if(isprime[i]==1)
		{
			vect.pb(i);
		}
	}
	for(int i=0;i<(int)vect.size();i++)
	{
	  	for(int j=0;j<(int)vect.size();j++)
	  	{
	  		if(vect[i]==vect[j])
	  		  continue;
	  		if(vect[j]%10==vect[j])
	  		{
	  			vect2.push_back(vect[i]*10+vect[j]);
			}
			else
	  		{
	  			vect2.push_back(vect[i]*100+vect[j]);
			}
		}
	}
	
}
ll Fibonacci(int n,int min,int max)
{
	
	dp[1]=min;
	dp[2]=max;
	for(ll i=3;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return(dp[n]);
}
int main()
{
    
	  int a,b;
	  
	  cin>>a>>b;
	  memset(dp,0,sizeof(dp));
	  vector<int>::iterator it;
	  seive(a,b);
	  //cout<<vect2.size();
	  /*
	  
	  */
	  for(auto i:vect2)
	  {
	  	if(isprime[i]==1)
	  	{
	  		vect3.push_back(i);
		}
	  }
	  sort(vect3.begin(),vect3.end());
	  it=unique(vect3.begin(),vect3.end());
	  //remove_Duplicates(vect3);
	  vect3.resize(distance(vect3.begin(),it));
	  int k=vect3.size();
	  int min=*min_element(vect3.begin(),vect3.end());
	  int max=*max_element(vect3.begin(),vect3.end());
      /*
	  for(int i=0;i<vect3.size();i++)
	  {
	  	cout<<vect3[i]<<" ";
	  }
	  */
	  
      //cout<<min<<" "<<max<<" ";
	   cout<<Fibonacci(k,min,max);
	
	   vect.clear();
	   vect2.clear();
	   vect3.clear();
	return 0;
}
