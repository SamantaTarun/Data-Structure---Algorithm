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
#define	FIO				ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
int Power(int a,int n,int d)
{
	int res=1;
	
	while(n)
	{
		if(n%2==1)
		{
			res=((res%d)*(a%d))%d;
			n--;
		}
		else
		{
			a=((a%d)*(a%d))%d;
			n/=2;
		}
	}
	return res;
}
int GCD(int A,int B,int n)
{
	if(A==B)  //the second argument of GCD will be 0, so return first element
	{
		return (Power(A,n,mod) + Power(B,n,mod))%mod;
	}
	int candidate=1;
	int num=A-B;
	for(int i=1;i*i<=num;i++)
	{
		if(num%i==0)
		{
			int temp=(Power(A,n,i) + Power(B,n,i))%i;
			if(temp==0)  candidate=max(candidate,i);
			
			temp=(Power(A,n,num/i) + Power(B,n,num/i)) % (num/i);  // i is a divisor of number then n/i is also adivisor of a number
			
			if(temp==0) candidate=max(candidate,num/i);
		}
	}
	return candidate%mod;
	
	
}

int32_t main()
{
	//s_t_s();
 	//FIO;
	
	int A,B,n,t;
	
	cin>>t;
	
	while(t--)
	{
		cin>>A>>B>>n;
		cout<<GCD(A,B,n)<<endl;
	}
	return 0;
}
