//kNAPSACK top down
#include<bits/stdc++.h>

using namespace std;

int D_Knapsack(int W,int n,int wt[],int val[])
{
	int DP[n+1][W+1];
	
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0||j==0)
			{
				DP[i][j]=0;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(wt[i-1]<=j)
        	{
		      DP[i][j]=max(val[i-1]+DP[i-1][j-wt[i-1]],DP[i-1][j]);
	        }
	        else if(wt[i-1]>j)
        	{
		      DP[i][j]=DP[i-1][j];
        	}
		}
	}
	
	return DP[n][W];
}
int main()
{
	int W,n;
	//memset(DP,-1,sizeof(DP));
	int val[10001],wt[10001];
	cout<<"Enter the number of items: ";
	
	cin>>n;
	
	cout<<"Enter the Capacity of the KnapSack: ";
	
	cin>>W;
	
	cout<<"Enter the Weights of the items: ";
	
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	
	cout<<"Enter the value or price of the items: ";
	
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	
	cout<<D_Knapsack(W,n,wt,val);
	
	return 0;
}
