/*
347. Top K Frequent Elements
Medium

4157

246

Add to List

Share
Given a non-empty array of integers, return the k most frequent elements.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
Note:

You may assume k is always valid, 1 = k = number of unique elements.
Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.
You can return the answer in any order.
*/
class Solution {
public:
    
    struct compare{
        bool operator()(pair<int,int>const &lhs,pair<int,int>const &rhs)
        {
            return lhs.second<rhs.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp.clear();
        
        for(auto i:nums)
        {
            mp[i]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare>q;
        
        for(auto x:mp)
        {
            q.push({x.first,x.second});
        }
    
    vector<int>res;
    
    while(k && q.empty()==false)
    {
        res.push_back(q.top().first);
        q.pop();
        k--;
    }
    return res;
    }
};


