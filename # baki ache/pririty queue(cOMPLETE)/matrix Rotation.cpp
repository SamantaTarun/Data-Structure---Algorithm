//Diameter of a Tree or length of the longest path

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

/*
void compute(priority_queue<int,vector<int>>qp)
{
	int k=qp.size();
	int product=1;
	if(k>=3)
	{
       for(int i=0;i<3;i++)
	   {
		 product*=qp.top();
		 qp.pop();
	   }	
	}
	else
	{
		product=-1;
	}
	
	vect2.pb(product);
}
*/
int32_t main()
{
	//s_t_s();
  //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);   
	int N;
	cin>>N;
	
	int arr[N][N];
	int arr1[N][N];
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cin>>arr[i][j];
		}
	}
	int m=1;
	int n=1;
	for(int i=1;i<=N;i++)
	{
		n=1;
		for(int j=N;j>=1;j--)
		{
			arr1[m][n++]=arr[j][i];
		}
		m++;
	}
	/*
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			arr1[i][j]=arr1[j][i];
		}
	
	}
	*/
	
	cout<<endl<<endl;
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

