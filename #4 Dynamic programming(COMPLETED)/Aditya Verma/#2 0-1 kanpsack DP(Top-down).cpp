//  0/1 knapsack recursive
#include<bits/stdc++.h>
using namespace std;

int KnapSack(int val[],int wt[],int W,int n)
{
	int dp[n+1][W+1];
	
	//base case
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0||j==0)
			{
				dp[i][j]=0;
			}
		}
	}
	
	//recursive case
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
				if(wt[i-1]<=j)
  				{
					dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
				}
				else if(wt[i-1]>j)
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
	cout<<"Enter the Number of items: ";
	cin>>n;
	cout<<"\nEnter the capacity of the Knapsack: ";
	cin>>W;
	int val[n],wt[n];
	cout<<"\nEnter the value of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	cout<<"\nEnter the Weight of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
	}
	cout<<endl<<KnapSack(val,wt,W,n);
	return(0);
}
