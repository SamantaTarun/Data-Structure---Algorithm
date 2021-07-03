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


int main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int n;
     cin>>n;
     string b;
     
     cin>>b;
     
     string g;
     cin>>g;
     b.c_str();
     g.c_str();
     int cnt=0;
     int flag=0;
     int i,j;
     for(i=0;b[i]!='\0';i++)
     {
     	for(j=0;g[j]!='\0';j++)
     	{
     		if(b[i]==g[j])
     		{
     			cnt++;
     			g[j]='k';
     			break;
			}
			else if(b[i]!=g[j] && j==n-1)
			{
				flag=1;
				break;
			
			}

		 }
		 if(flag)
		   break;
	 }
	 
	 cout<<n-cnt<<endl;
     
     
     
	return 0;
}
