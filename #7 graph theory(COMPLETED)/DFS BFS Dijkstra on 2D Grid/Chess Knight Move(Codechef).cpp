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
int vis[10][10];
int dist[10][10];
int targetX,targetY;

int dx[]={-2,-1,1,2,2,1,-1,-2};

int dy[]={1,2,2,1,-1,-2,-2,-1};
//DFS on 2D Grid

bool isValid(int x,int y)
{
	if(x<1 || x>8 || y<1 || y>8)  return false;
	
	if(vis[x][y]==1)  return false;
	
	return true;
}
int getX(char a)
{
	return a-'a'+1;
}
int BFS(int x,int y)
{
	queue<pair<int,int>>q;
	
	
	dist[x][y]=0;
	
	vis[x][y]=1;
	
	q.push({x,y});
	
	if(x==targetX && y==targetY)
	  return dist[x][y];
	  
	  
	while(!q.empty())
	{
		int curr_x=q.front().first;
		
		int curr_y=q.front().second;
		
		q.pop();
		
		for(int i=0;i<8;i++)
		{
			if(isValid(curr_x+dx[i],curr_y+dy[i]))
			{
				x=curr_x + dx[i];
				y=curr_y + dy[i];
				
				dist[x][y]=1+dist[curr_x][curr_y];
				
				vis[x][y]=1;
				
				q.push({x,y});
				
				if(x==targetX && y==targetY)
				  return dist[x][y];
			}
		}
	}
}
int32_t main()
{
	//s_t_s();

	
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	
	int x,y,q;
	
	cin>>q;
	
	while(q--)
	{
		char a,b;
		
		for(int i=1;i<=8;i++)
		{
			for(int j=1;j<=8;j++)
			{
				vis[i][j]=0;
			}
		}
		
		cin>>a>>b;
		
		x=getX(a);
		y=b - '0';
		
		cin>>a>>b;
		targetX=getX(a);  //getX() convert char to integer based on 1 indexing
		targetY=b - '0';
		
		cout<<BFS(x,y)<<endl;
	}
	
	
	
     
	return 0;
}

