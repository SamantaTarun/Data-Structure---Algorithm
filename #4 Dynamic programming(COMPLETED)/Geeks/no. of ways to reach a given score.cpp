#include<bits/stdc++.h>
using namespace std;
//A player can score either 3 or 5 or 10 in each m0ve
int No_of_ways(int n)
{
	int Dp[n+1];
	memset(Dp,0,sizeof(Dp));
	Dp[0]=1;
	
	for(int i=3;i<=n;i++)
	{
		Dp[i]+=Dp[i-3];
	}
	for(int i=5;i<=n;i++)
	{
		Dp[i]+=Dp[i-5];
	}
	for(int i=10;i<=n;i++)
	{
		Dp[i]+=Dp[i-10];
	}
	return Dp[n];
}
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"\n"<<No_of_ways(n);
	return(0);
}
