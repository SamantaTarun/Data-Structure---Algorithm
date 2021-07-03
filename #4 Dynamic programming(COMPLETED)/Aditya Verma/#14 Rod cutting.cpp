// Rod Cutting Dp
#include<bits/stdc++.h>
using namespace std;

int KnapSack(int price[],int length[],int len,int n)
{
	int dp[len+1][n+1];
	
	//base case
	for(int i=0;i<=len;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				dp[i][j]=0;
			}
		}
	}
	
	//recursive case
	for(int i=1;i<=len;i++)
	{
		for(int j=1;j<=n;j++)
		{
				if(length[i-1]<=j)
  				{
					dp[i][j]=max(price[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
				}
				else if(length[i-1]>j)
				{
					dp[i][j]=dp[i-1][j];
				}	
			
		}
	}
	
   return(dp[len][n]);
}
int main()
{
	int n;
	cout<<"Enter the length of the Rod: ";
	cin>>n;
	int length[n],len=0;
	for(int i=1;i<=n;i++)
	{
		length[i-1]=i;
		len++;
	}
	int price[n];
	cout<<"\nEnter the price of pieces: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&price[i]);
	}
	cout<<endl<<KnapSack(price,length,len,n);
	return(0);
}
