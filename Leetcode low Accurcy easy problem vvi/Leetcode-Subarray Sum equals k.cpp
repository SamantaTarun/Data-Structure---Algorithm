
/*
560. Subarray Sum Equals K
Medium

6151

212

Add to List

Share
Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals to k.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107

*/
class Solution {
public:
    
    

    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_map<int,int>mymap;
        
        int currSum=0;
        int i=0;
        int count=0;
        
        while(i<n)
        {
            currSum+=nums[i];
            if(currSum==k)
                count++;
            if(mymap.find(currSum-k)!=mymap.end())
                count+=mymap[currSum-k];
            
            mymap[currSum]+=1;
            i++;
        }
        return count;
    }
};
