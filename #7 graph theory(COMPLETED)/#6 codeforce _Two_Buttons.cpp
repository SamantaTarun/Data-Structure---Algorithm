#include<bits/stdc++.h>
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
int visited[100001];


int32_t main()
{
	//s_t_s();

	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
   
    	ll m,n;
    	cin>>n>>m;
    	memset(visited,0,sizeof(visited));
    	queue<int>q;
    	
    	q.push(n);
    	int level=0;
    	int ans=-1;
    	int i,p=0;
    	while(!q.empty())
    	{
    	    int cnt=q.size();
    		for(i=0;i<cnt;i++)
    		{
    			
    			int temp=q.front();
    			
    			q.pop();
    			
    			visited[temp]=1;
    			
    			if(temp==m)  
    			{
    				ans=level;
    				break;
				}
				if(temp<m && visited[2*temp]==0)
				{
					q.push(2*temp);
				}
				if(temp>0 && visited[temp-1]==0)
				{
					q.push(temp-1);
				}
			}
			
			if(ans!=-1) {
				
				break;
				
			}
		    level++;
			
			
			
			
	    }
		cout<<ans<<endl;
    	
    	
    	
    	
    	
	
	return 0;
}

