#include<bits/stdc++.h>
using namespace std;
int Largest(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])	
		  res=i;
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Index of the largest element is: "<<Largest(arr,n)<<endl;
	
	return 0;
}
