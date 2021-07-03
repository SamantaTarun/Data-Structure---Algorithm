
/*
373. Find K Pairs with Smallest Sums
Medium

1676

117

Add to List

Share
You are given two integer arrays nums1 and nums2 sorted in ascending order and an integer k.

Define a pair (u,v) which consists of one element from the first array and one element from the second array.

Find the k pairs (u1,v1),(u2,v2) ...(uk,vk) with the smallest sums.

Example 1:

Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]] 
Explanation: The first 3 pairs are returned from the sequence: 
             [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
Example 2:

Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2
Output: [1,1],[1,1]
Explanation: The first 2 pairs are returned from the sequence: 
             [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]
Example 3:

Input: nums1 = [1,2], nums2 = [3], k = 3
Output: [1,3],[2,3]
Explanation: All possible pairs are returned from the sequence: [1,3],[2,3]

*/

class Solution {
public:
    struct compare{
        bool operator()(pair<int,int>const &lhs,pair<int,int>const &rhs)
        {
            return lhs.second+lhs.first>rhs.first+rhs.second;
        }
    };
   
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
       
     
       unordered_map<int,vector<int>>myMap;
       myMap.clear();
       
       for(auto i:nums1){
           for(auto j:nums2){
               myMap[i].push_back(j);
           }
       }
        /*
        for(auto i:myMap)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
                cout<<j<<" ";
        }
        */
        
       priority_queue<pair<int,int>,vector<pair<int,int>>,compare>q;
        
       
        //int k=0;
       vector<vector<int>>vect;
       //int m=0,n=0,v=0;
       for(auto i:myMap)
       {
           for(auto j:i.second)
           {
               
              q.push({i.first,j});
               //vect[m][0]=i.first;
               //vect[m++][1]=j;
              // vect.push_back({i.first,j});
               //v++;
           }
               
          
       }
       while(!q.empty()&&k!=0)
       {
           vect.push_back({q.top().first,q.top().second});
           q.pop();
           k--;
       }
       return vect;
    }
};
