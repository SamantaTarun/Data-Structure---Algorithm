#include<bits/stdc++.h>
using namespace std;

void SEL_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int imin=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[imin])
			  imin=j;
		}
		swap(arr[i],arr[imin]);
	}
}

void Display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
		   cin>>arr[i];
		}
		SEL_sort(arr,n);
		Display(arr,n);
		cout<<endl;
	}
	return 0;
}
