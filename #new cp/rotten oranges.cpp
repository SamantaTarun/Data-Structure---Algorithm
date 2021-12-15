class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int> >rotten;
        
        int r=grid.size(), c=grid[0].size(), fresh=0, time=0;
        
        
        // Inserting al  rotten oranges in the queue
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)  rotten.push({i,j});
                else if(grid[i][j]==1)  fresh++;
            }
        }
        while(!rotten.empty())
        {
            int num=rotten.size();
            for(int i=0;i<num;i++)
            {
                int x=rotten.front().first;
                int y=rotten.front().second;
                
                rotten.pop();
                
                // checking for left,right,top,down
                
                if(x>0 && grid[x-1][y]==1) {
                    grid[x-1][y]=2;
                    fresh--;
                    rotten.push({x-1,y});
                }
                if(y>0 && grid[x][y-1]==1) {
                    grid[x][y-1]=2;
                    fresh--;
                    rotten.push({x,y-1});
                }
                if(x<r-1 && grid[x+1][y]==1) {
                    grid[x+1][y]=2;
                    fresh--;
                    rotten.push({x+1,y});
                }
                if(y<c-1 && grid[x][y+1]==1) {
                    grid[x][y+1]=2;
                    fresh--;
                    rotten.push({x,y+1});
                }
            }
            
            if(!rotten.empty()) time++;
        }
        return (fresh==0) ? time : -1;
    }
};
