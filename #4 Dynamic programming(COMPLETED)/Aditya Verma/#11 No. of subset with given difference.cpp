// SUBSET SUM ANALOGOUS TO KNAPSACK
#include<bits/stdc++.h>
using namespace std;

int Counter_Subset_Sum(int arr[],int W,int n)
{
	int dp[n+1][W+1];
	
	//base case
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0&&j==0)
			{
				dp[i][j]=1;
			}
			else if(i==0&&j!=0)
			{
				dp[i][j]=0;
			}
			else if(i!=0&&j==0)
			{
				dp[i][j]=1;
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
					dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];
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
	int n,diff,sum,SUM;
	cout<<"Enter the Number of values: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the difference: ";
	cin>>diff;
	cout<<"\nEnter the array value: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	SUM=(diff+sum)/2;
	cout<<endl<<Counter_Subset_Sum(arr,SUM,n);
	return(0);
}
