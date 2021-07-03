//pair with given sum
#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int n,int sum)
{
	unordered_set<int>s;
	
	for(int i=0;i<n;i++)
	{
		if(s.find(sum-arr[i])!=s.end())
		  return true;
		s.insert(arr[i]);
	}
	return false;
}

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n>>sum;
		int arr[n];
		
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		cout<<isPair(arr,n,sum)<<endl;
	}
	return 0;
}
