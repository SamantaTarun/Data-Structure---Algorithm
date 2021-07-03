// C++ code to replace a substring in a string

#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int maximumProduct_Subarray(int nums[],int n)
{
	int max_overall=nums[0];
	int max_ending_here=nums[0],min_ending_here=nums[0];
	
	for(int i=1;i<n;i++)
	{
		int temp=max_ending_here;
		max_ending_here=max(nums[i],max(nums[i]*max_ending_here,nums[i]*min_ending_here);
		min_ending_here=min(nums[i],min(nums[i]*temp,nums[i]*min_ending_here));
        max_overall=max(max_overall,max_ending_here);
	}
	return max_overall;
	
	
}
int main()
{
   int n;
   cout<<"Enter the no. of elements: ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
   
   cout<<maximumProduct_Subarray(arr,n)<<endl;
   return 0;
}

