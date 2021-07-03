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
#define BLOCK			555 // Square Root of maximum array size
#define MAX_N			100005
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
//KMP algorithm
int reset[MAX_N];



// Preparaing the RESET Table
void KMPpreprocess(string pat)
{
	int i=0, j=-1;
	reset[0]=-1;
	
	while(i<pat.size())
	{
		// Check for resetting
		while(j>=0 and pat[i]!=pat[j])
		{
			j=reset[j];
		}
		i++;
		j++;
		reset[i]=j;
	}
	for(int i=0;i<pat.size();i++)
	{
		cout<<reset[i]<<" ";
	}
	cout<<endl;
}

// matching

void KMPsearch(string str, string pat)
{
	KMPpreprocess(pat);
	int i=0, j=0;
	
	while(i<str.size())
	{
		while(j>=0 and str[i]!=pat[j])
		{
			j=reset[j];
			
		}
		i++,j++;
		
		if(j==pat.size())
		{
		   cout<<"Pattern is found at "<<i-j<<endl;
		   j=reset[j];
		}
	}
}

int32_t main()
{
	//s_t_s();
   //FIO;
	
	memset(reset,-1,sizeof(reset));
	string str,pat;
	cin>>str>>pat;
	
	KMPsearch(str,pat);
	
	return 0;
}
