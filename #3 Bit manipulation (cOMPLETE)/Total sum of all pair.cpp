

#include<bits/stdc++.h>
//#define<windows.h>
//prime fctorization  
//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define ll      		long long
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
// is a given number a power of two
mk(vect,1001,int);

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,res;
       
      w(t)
      {
      	 cin>>n;
      	 for(int i=1;i<=n;i++)
      	 {
      	    cin>>vect[i];
		 }
		 
		 
		 for(int i=0;i<31;i++)
		 {
		 	int cntZ=0, cnt1=0;
		 	
		 	for(int j=1;j<=n;j++)
		 	{
		 		if(vect[j] & (1<< i))
		 		  cnt1++;
				else
				  cntZ++;
			 }
			 int p=cntZ*cnt1;
			 
			 res+=(1<<i)*p;
		 }
		 
		 cout<<res<<endl;
		 
      	 
	  }
	
	return 0;
}

