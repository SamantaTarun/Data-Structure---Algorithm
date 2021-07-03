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



//Minimum no. of operation require to convert 0 to N;
vector<int>res;
int32_t main()
{
	//s_t_s();
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T;
	res.clear();
	cin>>T;
	int p=T;
	while(T--)
	{
		int N;
		cin>>N;
		int arr[N];
		//arr.clear();
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		int ans=1;
		int diff[N-1];
		
		//diff.clear();
		int k=0;
		for(int i=0;i<N;i++)
		{
			diff[k++]=arr[i]-arr[i+1];
		}
		
		
		
		vi vect;
		vect.clear();
		int cnt=1;
		for(int i=0;i<k-1;i++)
		{
			if(diff[i]==diff[i+1])
			{
				cnt++;
				if(i==k-1)
				{
					vect.pb(cnt);
				}
			}
			else
			{
				vect.pb(cnt);
				cnt=1;
			}
		}
	
		
	
		int it=*max_element(vect.begin(),vect.end());
		
		res.pb(it+1);	
	}
	
	for(int i=1;i<=p;i++)
	{
		cout<<"Case #"<<i<<": "<<res[i-1]<<endl;
	}
	
	
	return 0;
}
