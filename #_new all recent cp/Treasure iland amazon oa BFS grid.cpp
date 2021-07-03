#include<bits/stdc++.h>
using namespace std;
char ar[1001][1001];
bool vis[1001][1001];
int dist[10001][1001];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
int N;
bool isValid(int x , int y)
{
	if(x > N || x < 1 || y > N || y < 1) return false;
	
	if(vis[x][y] || ar[x][y] == 'D') return false;
	
	return true;
}
void bfs(int srcX , int srcY)
{
	queue< pair<int,int> > q;
	q.push( {srcX , srcY} );
	dist[srcX][srcY] = 0;
	vis[srcX][srcY] = 1;
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		int d = dist[x][y];
		q.pop();
		
		for(int i=0;i<4;i++)
		{
			int newX = x + dx[i];
			int newY = y + dy[i];
			
			if(isValid(newX , newY))
			{
				dist[newX][newY] = d + 1;
				vis[newX][newY] = 1;
				q.push( {newX , newY} );
			}
		}
	}
	
}
 
int main()
{
    int endX,endY;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
             cin>>ar[i][j];
            if(ar[i][j]=='X')
            {
                endX=i;
                endY=j;
            }
        }
           
    }
   
    bfs(1,1);
    cout<<dist[endX][endY]<<endl;
    return 0;
}
