//Bishu & his girlfriend

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
int visited[10001];
int dist[10001];
vi arr[10001];
int col[10001];
vector<int>suspecious;
bool dfs(int v,int par)
{
	visited[v]=1;
	for(int child : arr[v])
	{
		if(visited[child]==0)
		{
			if(dfs(child,v)==true)
            {
                //return true;
                suspecious.push_back(child);
                 suspecious.push_back(v);
            }

		}
		else
        {
            if(child!=par)
           {
            //return true;
             suspecious.push_back(child);
             suspecious.push_back(v);
           }
        }



	}

	//return false;

}
int main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,a,b;
	cin>>n>>m;
	memset(visited,0,sizeof(visited));
	memset(col,0,sizeof(col));

	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);

	}


    if(dfs(1,-1)==true)
    {
    	cout<<"The given graph contains cycle\n";
	}
	else
	   cout<<"The given graph not contains any cycle\n";

    for(auto i:suspecious)
    {
        cout<<i<<" ";
    }
	return 0;
}

