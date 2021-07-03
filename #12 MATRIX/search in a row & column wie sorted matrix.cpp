 bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //Algorithm
        // 1. if target<matrix[0][0] or target>matrix[r-1][c-1] then return -1;

         //2. Begin from Bottom right corner mat[0][c-1];

        //3. if target is same . return true

        //4. if target is smaller, moves to the left
        //5. if target is graeter, moves to down

        int r=matrix.size(),c=matrix[0].size();
        if(target<matrix[0][0]||target>matrix[r-1][c-1])
            return false;

        int i=0, j=c-1;

        while(i<r && j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(target<matrix[i][j])
                j--;
            else
                i++;
        }
        return false;
    }
};
