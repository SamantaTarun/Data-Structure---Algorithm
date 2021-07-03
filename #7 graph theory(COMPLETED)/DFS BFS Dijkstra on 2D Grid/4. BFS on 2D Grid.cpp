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

//DFS on 2D Grid
int N,M;
int arr[1001][1001];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool visited[1001][1001];
int dist[1001][1001];

bool isValid(int x,int y)
{
	if(x<1||y<1||x>N||y>M)
	{
		return false;
	}
	if(visited[x][y]==true)
	  return false;
	  
	return true;
}

//BFS on 2D Grid
void BFS(int srcX,int srcY)
{
	queue<pair<int,int> >q;
	
	q.push({srcX,srcY});
	
	visited[srcX][srcY]=true;
	
	dist[srcX][srcY]=0;
	
	while(!q.empty())
	{
		int currX=q.front().first;
		
		int currY=q.front().second;
		
		q.pop();
		
		for(int i=0;i<4;i++)
		{
			if(isValid(currX+dx[i],currY+dy[i]))
			{
				int newX=currX+dx[i];
				
				int newY=currY+dy[i];
				visited[newX][newY]=true;
				
				dist[newX][newY]=dist[currX][currY]+1;
				q.push(mp(newX,newY));
			}
		}
	}
	
	//Printing Distanc e Array
	
	cout<<"Distance Array: "<<endl;
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
	
	/*
	if(isValid(x-1,y))
	{
		DFS(x-1,y);  //up
		
	
	}
	if(isValid(x,y+1))
	{
		DFS(x,y+1); //Right
	
	}
	if(isValid(x+1,y))
	{
		DFS(x+1,y); //Down
		
	}
	if(isValid(x,y-1))
	{
		DFS(x,y-1);//Left
		
	}
	*/
}

int32_t main()
{
	//s_t_s();

	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	
	int x,y;
	cin>>N>>M;
	
	cin>>x>>y;
	
	BFS(x,y);
	
     
	return 0;
}

