/*
378. Kth Smallest Element in a Sorted Matrix
Medium

3096

164

Add to List

Share
Given a n x n matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

Example:

matrix = [
   [ 1,  5,  9],
   [10, 11, 13],
   [12, 13, 15]
],
k = 8,

return 13.
Note:
You may assume k is always valid, 1 = k = n2.

*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       priority_queue<int,vector<int>,greater<int>>pq;
        int i,j;
        int n=matrix.size();
        for( i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
        pq.push(matrix[i][j]);
        }
        }
        for( i=0;i<k-1;i++)
        {
        pq.pop();
        }
        return pq.top();
        


        
    }
};
