 //  0/1 knapsack recursive
#include<bits/stdc++.h>
using namespace std;

bool Subset_Sum(int wt[],int W,int n)
{
	bool DP[n+1][W+1];
	
	
	//Initialize the array for Base Case
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0&&j==0)
			  DP[i][j]=true;
			  
			else if(i==0&&j!=0)
			 DP[i][j]=false;
			
			else if(i!=0&&j==0)
			  DP[i][j]=true;
		}
	}
	
	
	//Recursive case
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(wt[i-1]<=W)
			{
				DP[i][j]=DP[i-1][j-wt[i-1]] || DP[i-1][j];
				
			}
			else if(wt[i-1]>W)
			{
				DP[i][j]=DP[i-1][j];
			}
		}
	}
	
  return DP[n][W];
}
bool isPartitioned(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	if(sum%2!=0)
	  return false;
	else
	  Subset_Sum(arr,sum/2,n);
}
int main()
{
	int n;
	cout<<"Enter the Number of items: ";
	cin>>n;
	
	int arr[n];
	cout<<"\nEnter the value of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	cout<<endl<<isPartitioned(arr,n);
	return(0);
}
