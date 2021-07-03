#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Sorting algorithm requires random access iterators;
	
	//vector, deque, container array , native array
	
	vector<int> vec={9,1,10,2,45,3,90,4,9,5,8};
	
	sort(vec.begin(),vec.end());
     // vec: 1 2 3 4 5 8 9 9 10 45 90
	 
	 bool lsb_less(int x,int y)
	 {
	     return (x%10)<(y%10);	
	 }	
	 
	 
	 
	 sort(vec.begin(),vec.end(),lsb_less);
	 //vec: 10 90 1 2 3 4 45 5 8 9 9
	 
	 
	 // Sometimes we don't need complete sortting.
	 
	 //problem #1: Finding top 5 students according to their test scores.
	 
	 // - partial sort
	 
	 vector<int> vec={9,60,70,8,45,87,90,69,69,55,7};
	 
	 partial_sort(vec.begin(),vec.begin()+5,vec.end(), greater<int>());
	 
	 //vec  : 90 87 70 69 69 8 9 45 60 55 7
	 
	 return 0;
	
		
}
