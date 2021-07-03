//fINDING sECOND lARGEST fROM AN aRRAY 
//nAIVE aPPROACH

#include<bits/stdc++.h>
using namespace std;
int First_largest(int arr[],int n)
{
	int largest=0;
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest])
		  largest=i;
	}
	return largest;// return s the index of largest element
}

int Second_largest(int arr[],int n)
{
	int largest=First_largest(arr,n);
	
	int res=-1;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[largest])
		{
			if(res==-1)
			  res=i;
			else if(arr[i]>arr[res])
			  res=i;
		}
	}
	return res;//index of second largest elemnt if not exist the return -1
	
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
		  cin>>arr[i];
		
		cout<<Second_largest(arr,n);
	}
	return 0;
}
