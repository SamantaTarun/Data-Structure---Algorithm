 //  0/1 knapsack recursive
#include<bits/stdc++.h>
using namespace std;

int Counter_Subset_Sum(int wt[],int W,int n)
{
	int DP[n+1][W+1];
	
	
	//Initialize the array for Base Case
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0&&j==0)
			  DP[i][j]=1;
			  
			else if(i==0&&j!=0)
			 DP[i][j]=0;
			
			else if(i!=0&&j==0)
			  DP[i][j]=1;
		}
	}
	
	
	//Recursive case
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(wt[i-1]<=W)
			{
				DP[i][j]=DP[i-1][j-wt[i-1]] + DP[i-1][j];
				
			}
			else if(wt[i-1]>W)
			{
				DP[i][j]=DP[i-1][j];
			}
		}
	}
	
  return DP[n][W];
}
int main()
{
	int n,W,diff;
	cout<<"Enter the Number of items: ";
	cin>>n;
	cout<<"Enter the diff: ";
	cin>>diff;
	int sum=0;
	int val[n],wt[n];
	cout<<"\nEnter the value of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
		sum+=wt[i];
	}
	
	W=(diff+sum)/2;
	
	cout<<endl<<Counter_Subset_Sum(wt,W,n);
	return(0);
}
