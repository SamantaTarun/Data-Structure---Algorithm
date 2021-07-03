class Solution {
public:
    int maxArea(vector<int>& height) {

        int res=INT_MIN;

        int low=0;
        int high=height.size()-1;

        while(low<=high)
        {
            int ans=(high-low)*min(height[low],height[high]);
            res=max(res,ans);
            if(height[low]<height[high])
                low++;
            else
                high--;
        }
        return res;

    }
};
//leetcode
