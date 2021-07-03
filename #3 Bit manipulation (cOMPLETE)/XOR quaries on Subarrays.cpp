

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
// minimum flips required too ake A OR B equal C
vector<int> arr;
vector<vector<int>> q;
vector<int> xorQuaries(vector<int>& arr, vector<vector<int>>& q)
{
	int n=arr.size();
	int pre[n];
	
	pre[0]=arr[0];
	
	for(int i=1;i<=n;i++)
	{
		pre[i]=pre[i-1] ^ arr[i];
	}
	
	vector<int> res;
	
	for(int i=0;i<q.size();i++)
	{
		int L=q[i][0];
		int R=q[i][1];
		
		if(L==0)  res.pb(pre[R]);
		
		else   res.pb(pre[R] * pre[L-1]);
		
	}
	
	return res;
}

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
      w(t)
      {
      	 arr={1,3,4,8};
	  }
	
	return 0;
}

