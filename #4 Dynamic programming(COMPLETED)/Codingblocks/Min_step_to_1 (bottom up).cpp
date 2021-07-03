#include<bits/stdc++.h>
#define MAX 100000
typedef long long ll;
using namespace std;
//DP bottom up approach(Memoization)
ll Min_coin_change(int N,int coins[],int T)
{
	ll dp[MAX]={0};
	
	//Iterate over all states 1......N
	for(int n=1;n<=N;n++)
	{
	   dp[n]=INT_MAX;
	   for(int i=0;i<T;i++)
	   {
	   	  if(coins[i]<=N)
	   	  {
	   	  	 int subprob=dp[n-coins[i]];
	   	  	 dp[n]=min(dp[n],subprob+1);
		  }
	   }
	}
	return(dp[n]);
}
int main()
{
	int N;
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
