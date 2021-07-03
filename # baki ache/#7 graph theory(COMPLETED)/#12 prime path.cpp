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
vi arr[100001];
vi primes;
int dis[100001], vis[100001];
bool isValid(int a,int b)
{
	int cnt=0;
	
	while(a>0)
	{
		if(a%10!=b%10)  cnt++;
		
		a/=10, b/=10;
	}
	if(cnt==1) return true;
	else return false;
}
bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)  return false;
	}
	return true;
}
void BuildGraph()
{
	for(int i=1000;i<=9999;i++)
	{
		if(isPrime(i))
		{
			primes.pb(i);
		}
	}
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			int a=primes[i];
			int b=primes[j];
			
			if(isValid(a,b))
			{
				arr[a].push_back(b);
				arr[b].pb(a);
			}
		}
	}
}
void bfs(int src)
{
	queue<int>q;
	q.push(src);
	
	dis[src]=0;
	vis[src]=1;
	
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		
		for(int child: arr[curr])
		if(vis[child]==0)
		{
			vis[child]=1;
			dis[child]=dis[curr]+1;
			q.push(child);
		}
	}
}
int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	int a,b;
	BuildGraph();  
	w(t)
	{
	
	   cin>>a>>b;
	   
	   
	   for(int i=1000;i<=9999;i++)  dis[i]=-1, vis[i]=0;
	   bfs(a);	
	   
	   if(dis[b]==-1)
	   {
	   	  cout<<"Impossible";
	   }
	   else
	   {
	   	  cout<<dis[b]<<endl;
	   }
    }
    
	return 0;
}

