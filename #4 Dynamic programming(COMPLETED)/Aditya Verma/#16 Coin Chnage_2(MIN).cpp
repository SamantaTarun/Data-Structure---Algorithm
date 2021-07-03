// Coin Chnage- I(minimum)
#include<bits/stdc++.h>
using namespace std;

int Coin_Change_Min(int coins[],int sum,int n)
{
	int dp[n+1][sum+1];
	
	//base case initialization
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			if(i==0&&j==0)
			{
				dp[i][j]=INT_MAX-1;
			}
			else if(j!=0)
			{
				dp[i][j]=INT_MAX-1;
			}
			else if(i!=0)
			{
				dp[i][j]=0;
			}
		}
	}
	//initialize next one row
	for(int j=1,i=1;j<=sum;j++)
	{
		if(j%coins[0]==0)
		  dp[i][j]=j/coins[0];
		else
		  dp[i][j]=INT_MAX-1;
	}
	
	//recursive case as per kanpsack;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
				if(coins[i-1]<=j)
  				{
					dp[i][j]=min(1+dp[i][j-coins[i-1]] , dp[i-1][j]);
				}
				else if(coins[i-1]>j)
				{
					dp[i][j]=dp[i-1][j];
				}	
			
		}
	}
	
   return(dp[n][sum]);
}
int main()
{
	int n,W;
	cout<<"Enter the Number of coins: ";
	cin>>n;
	cout<<"\nEnter the SUM: ";
	cin>>W;
	int coins[n];
	cout<<"\nEnter the Values of coins: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&coins[i]);
	}
	cout<<endl<<Coin_Change_Min(coins,W,n);
	return(0);
}
