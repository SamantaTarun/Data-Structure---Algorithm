class Solution {
public:
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int Max=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    Max=max(Max,DFS(grid,i,j));
                    
                }
            }
        }
        return Max;
        
    }
     int DFS(vector<vector<int>>& grid,int i,int j)
    {
        // Checking if valid coordinates or not
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1)
            return 0;
        
        //marking that it is already viisted
        grid[i][j]=2;
        int cnt=1;
        //Calling DFS recursively for top bottom doun up
        
        cnt+= DFS(grid,i-1,j);//top
        cnt+=DFS(grid,i+1,j);//bottom
        cnt+=DFS(grid,i,j-1);//left
        cnt+=DFS(grid,i,j+1);//right
        
        return cnt;
        
        
    }
};
