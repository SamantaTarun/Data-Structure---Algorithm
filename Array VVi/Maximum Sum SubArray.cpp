#include <iostream>
using namespace std;
int MaxSub_Subarray(int arr[],int n)
{
	int res=arr[0];
	int MaxEnding=arr[0];
	
	for(int i=1;i<n;i++)
	{
		MaxEnding=max(MaxEnding+arr[i],arr[i]);
		res=max(res,MaxEnding);
	}
	return res;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		
		cout<<MaxSub_Subarray(arr,n)<<endl;
	
	}
	//return 0;
	return 0;
}
