//SUBLIME TEXT
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
#define inf				10000000000007
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
#define maxN 12000000000
int isPrime[maxN];
int arr[maxN];
void prime_Seive()
{
	//int maxN=1000001;
	//mark all numbers as prime
    for(int i=0;i<=maxN;i++)
    {
    	isPrime[i]=1;
	}
	isPrime[0]=isPrime[1]=0;//mark 0 and 1 as not prime
	for(int i=2;i*i<=maxN;i++)
	{
		if(isPrime[i])
		{
			for(int j=i*i;j<=maxN;j+=i)
			{
				isPrime[j]=0;
			}
		}
	}
	int j=0;
	for(int i=2;i<=maxN;i++)
	{
		if(isPrime[i]==1)
		  arr[j++]=i;;
	}
}

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 //memset(arr,0,sizeof(arr)); 
     prime_Seive();
     int n;
     cin>>n;
     int ans=0;
     int cnt=0;
     for(int i=0;i<n-1;i+=2)
     {	
     	ans+=arr[i]+arr[i+1];
	    if(isPrime[ans]==1&&ans<=n)
	    {
	     	cnt++;	
		}
		else if(ans>n)
		{
			break;
		}

     	
	 }
	  cout<<cnt<<endl;
     
	return 0;
}
