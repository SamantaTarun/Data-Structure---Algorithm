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
int arr[3];
int I[3][3], T[3][3];

void mul(int A[3][3],int B[3][3],int dim)
{
	int res[dim+1][dim+1];
	for(int i=1;i<=dim;i++)
	{
		for(int j=1;j<=dim;j++)
		{
			res[i][j]=0;
			for(int k=1;k<=dim;k++)
			{
				int x=(A[i][k] * B[k][j])%mod;
				res[i][j]=(res[i][j]+x)%mod;
			}
		}
	}
	
	REP(i,dim)  REP(j,dim)  A[i][j]=res[i][j];
}
int getFib(int n)
{
	if(n<=2)
	  return arr[n];
	  
	I[1][1]=I[2][2]=1;
	I[1][2]=I[2][1]=0;
	
	T[1][1]=0;
	T[2][1]=T[2][2]=T[1][2]=1;
	
	n=n-1;  //we have to calcullate T^(n-1)
	
	while(n)
	{
		if(n%2!=0)
		{
			mul(I,T,2), n--;
		}
		else
		{
			mul(T,T,2), n/=2;
		}
	}
	
	//Final answer
	
	int Fn=(arr[1] * I[1][1] + arr[2] * I[2][1])%mod;
	return Fn;
	
}

int32_t main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	w(t)
	{
	  int n;
	   cin>>arr[1]>>arr[2]>>n; 
	   n++;               //INCREMENTING n so it becomes 1 based indexing
	   cout<<getFib(n)<<endl;
	}
	return 0;
}
