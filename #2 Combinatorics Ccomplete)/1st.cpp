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
int factorial(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 
int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    cin>>N;
    vector<int>vect(N);
    
    for(int i=0;i<N;i++)
    {
    	cin>>vect[i];
	}
	
	if(N==0)
	{
		printf("%.6f\n",float(0));
	}
	else if(N==1)
	{
		printf("%.6f\n",float(1));
	}
	else
	{
		int n=factorial(N);
	int k;
	if(N%2==0)
	{
		k=(n*2)+floor(N/2);
	}
	else if(N%2)
	{
		k=(n*2)-floor(N/2);
	}
	
	//cout<<k<<" "<<n<<endl;
	
	printf("%.6f\n",float(float(k)/float(n)));
		
		
		
	}
	
	return 0;
}

