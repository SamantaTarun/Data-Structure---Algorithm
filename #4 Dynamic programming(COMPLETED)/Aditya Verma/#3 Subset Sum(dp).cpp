// SUBSET SUM ANALOGOUS TO KNAPSACK
#include<bits/stdc++.h>
using namespace std;
vector<int>vect;
bool Subset_Sum(int arr[],int W,int n)
{
	bool dp[n+1][W+1];
	
	//base case
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0&&j==0)
			{
				dp[i][j]=true;
			}
			else if(i==0&&j!=0)
			{
				dp[i][j]=false;
			}
			else if(i!=0&&j==0)
			{
				dp[i][j]=true;
			}
		}
	}
	
	//recursive case
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
				if(arr[i-1]<=j)
  				{
					dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
					
				}
				else if(arr[i-1]>j)
				{
					dp[i][j]=dp[i-1][j];
				}	
			
		}
	}
	
   return(dp[n][W]);
}
int main()
{
	int n,W;
	cout<<"Enter the Number of values: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the sum: ";
	cin>>W;
	cout<<"\nEnter the value of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	cout<<endl<<Subset_Sum(arr,W,n);
	cout<<endl;
	for(auto i:vect)
	{
		cout<<i<<" ";
	}
	return(0);
}
