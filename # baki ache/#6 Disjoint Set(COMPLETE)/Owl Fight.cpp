//Diameter of a Tree or length of the longest path

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

//OWl fight
int arr[100001];

int find(int a)
{
	if(arr[a]<0)  return a;
	
	return arr[a]=find(arr[a]);
}

void Union(int a,int b)
{
	arr[a]=min(arr[a],arr[b]);
	
	arr[b]=a;
}
int32_t main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);       
	int n,m,q,a,b,x,y;
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		arr[i]=-i;
	}
	
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		
		a=find(a);
		b=find(b);
		
		if(a!=b) 
		  Union(a,b);
	}
	
	cin>>q;
	
	while(q--)
    {
    	cin>>a>>b;
    	x=a,y=b;
    	a=find(a),b=find(b);
    	
    	if(a==b)
    	  cout<<"TIE"<<endl;
    	  
    	else
    	{
    		if(arr[a]<arr[b])
    		  cout<<x<<endl;
    		else
    		  cout<<y<<endl;
		}
	}
	return 0;
}

