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


//N Queen problem
bool isSafe(int board[][100],int i,int j,int n)
{
	//You can for check col
	
	for(int row=0;row<i;row++)
	{
		if(board[row][j]==1)
		{
			return false;
		}
	}
	
	//you can check for left diagonal;
	
	int x=i;
	int y=j;
	
	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y--;
	}
	
	//you can check for Right diagonal;
	
	x=i;
	y=j;
	
	while(x>=0 && y<n)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y++;
	}
	
	//The position is now safe, col and diagonal
	
	return true;
}
bool solveNQueen(int board[][100],int i,int n)
{
	//Base case
	if(i==n)
	{
		//you have sucessfully place queens in a rows (0.....n-1)
		//print the boards;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(board[i][j]==1)
				{
					cout<<"Q ";
				}
				else
				{
					cout<<"_ ";
				}
			}
			cout<<endl;
		}
		
		return true;
	}
	//recursive case
	//Try to place the queen in the current row and call on the remaining part which
	
	for(int j=0;j<n;j++)
	{
		//I have to check if i,j th position is safe to place the queen or not.
		
		if(isSafe(board,i,j,n)){
			//Place the queen - assuming i,j is the right pos
			board[i][j]=1;
			
			bool nextQueenRakhPaye=solveNQueen(board,i+1,n);
			if(nextQueenRakhPaye)
			{
				return true;
			}
		} 
		//Means i,j is not the right position- Assumption is wrong
		
		board[i][j]=0;  //Backtracking   
	}
	//You have tried for all position in the current row but coudn't place a queen 
	return false;
}


int32_t main()
{
	//s_t_s();
	FIO;
	int n;
    cin>>n;
    int board[100][100]={0};
	
	solveNQueen(board,0,n);	
	
	
	
	return 0;
}
