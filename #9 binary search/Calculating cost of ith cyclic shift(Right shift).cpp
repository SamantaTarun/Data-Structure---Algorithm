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


int arr[50],aux_arr[50];
int cost[50];

void RightShift(int N)
{
   int j=2;
   for(int i=1;i<=N-1;i++)
   {
   	  aux_arr[j++]=arr[i];
   }
   aux_arr[1]=arr[N];
   
   for(int i=1;i<=N;i++)
   {
   	arr[i]=aux_arr[i];
   }
   
  
}
// cost of ith cyclic shift 

void calculate (int N)
{
	for(int i=0;i<N;i++)
	{
		int cnt=0;
		for(int j=1;j<=N;j++)
		if(arr[j]!=j)
		  cnt++;
		  
		cost[i]=cnt;
		RightShift(N);
	}
	
}
int32_t main()
{
	//s_t_s();
	FIO;
	
	w(t)
	{
	  int N;
	  cin>>N;
	  for(int i=1;i<=N;i++)
	  {
	  	cin>>arr[i];
	  }
	  calculate(N);
	  int q;
	  cin>>q;
	  //cost of kth cyclic shitf
	  while(q--)
	  {
	  	int k;
	  	cin>>k;
	  	if(k>=5)
	  	{
	  		cout<<cost[k%N]<<endl;
		}
		else
		{
			cout<<cost[k]<<endl;
		}
	  	
	  }
	}
	return 0;
}
