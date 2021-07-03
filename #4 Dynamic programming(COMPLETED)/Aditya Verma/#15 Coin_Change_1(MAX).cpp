// Coin Chnage- I(maximum)
#include<bits/stdc++.h>
using namespace std;

int Coin_Change_Max(int coins[],int W,int n)
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
			else if(j!=0)
			{
				dp[i][j]=0;
			}
			else if(i!=0)
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
				if(coins[i-1]<=j)
  				{
					dp[i][j]=dp[i][j-coins[i-1]] + dp[i-1][j];
				}
				else if(coins[i-1]>j)
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
	cout<<endl<<Coin_Change_Max(coins,W,n);
	return(0);
}
