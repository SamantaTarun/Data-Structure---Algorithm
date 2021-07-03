//SUBLIME TEXT
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
#define vii 			vector<ii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define inf				1e18
#define N				101
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
int arr[N][N], I[N][N];
void printMat(int A[][N],int dim)
{
	REP(i,dim) 
	{
		 REP(j,dim)
	    {
		cout<<A[i][j]<<" ";
		
     	}
     	cout<<endl;
	}
	
}
int mul(int A[][N], int B[][N],int dim)
{
	int res[dim+1][dim+1];
	REP(i,dim) REP(j,dim)
	{
		res[i][j]=0;
		REP(k,dim) 
		res[i][j]+=A[i][k]*B[k][j];
	}
	REP(i,dim) REP(j,dim)  A[i][j]=res[i][j];
}
void power(int A[][N],int dim,int n)
{
	REP(i,dim) REP(j,dim)
	{
		if(i==j)
		  I[i][j]=1;
		else
		  I[i][j]=0;
	}
	/*
	REP(i,n)
	mul(I,A,dim);
	 */
	while(n)
	{
		if(n%2)
		  mul(I,A,dim), n--;
		else
		  mul(A,A,dim), n/=2;
	}
	REP(i,dim) REP(j,dim) A[i][j]=I[i][j];
}
int main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int dim,n;
	w(t)
	{
	   cin>>dim>>n;
	   REP(i,dim) REP(j,dim) cin>>arr[i][j];
	   
	   power(arr,dim,n);
	   printMat(arr,dim);
	}
	return 0;
}
