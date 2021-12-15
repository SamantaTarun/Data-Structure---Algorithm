class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    DFS(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
    void DFS(vector<vector<char>>& grid,int i,int j)
    {
        // Checking if valid coordinates or not
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!='1')
            return;
        
        //marking that it is already viisted
        grid[i][j]='2';
        
        //Calling DFS recursively for top bottom doun up
        
        DFS(grid,i-1,j);//top
        DFS(grid,i+1,j);//bottom
        DFS(grid,i,j-1);//left
        DFS(grid,i,j+1);//right
        
        
    }
};
