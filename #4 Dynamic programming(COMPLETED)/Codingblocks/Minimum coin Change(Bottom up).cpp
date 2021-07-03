#include<bits/stdc++.h>
#define MAX 100
typedef long long ll;
using namespace std;
//DP bottom up approach(Memoization)
int Min_coin_change(int N,int coins[],int T)
{
	int dp[MAX]={0};
	int n;
	//Iterate over all states 1......N
	for(n=1;n<=N;n++)
	{
	   dp[n]=INT_MAX;
	   for(int i=0;i<T;i++)
	   {
	   	  if(n-coins[i]>=0)
	   	  {
	   	  	 int subprob=dp[n-coins[i]];
	   	  	 dp[n]=min(dp[n],subprob+1);
		  }
	   }
	}
	return(dp[N]);
}
int main()
{
	int N,T;
	cout<<"Enter the change Amount: ";
	cin>>N;
	cout<<"\nHow many types of Coins: ";
	cin>>T;
	int coins[T];
	cout<<"\nEnter the Value of the coins: ";
	for(int i=0;i<T;i++)
	{
		scanf("%d", &coins[i]);
	}
	
	cout<<Min_coin_change(N,coins,T);
	return(0);
} 
