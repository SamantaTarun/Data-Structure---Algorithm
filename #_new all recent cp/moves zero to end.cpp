#include<bits/stdc++.h>
using namespace std;
void MoveZerotoEnd(int arr[],int n)
{
	int j=0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
}
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int arr[n];
		
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		  
		MoveZerotoEnd(arr,n);
		display(arr,n);
		cout<<endl;
	}
}
