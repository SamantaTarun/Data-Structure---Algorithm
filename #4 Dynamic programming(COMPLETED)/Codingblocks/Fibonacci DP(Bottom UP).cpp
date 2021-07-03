#include<bits/stdc++.h>
#define MAX 100000
typedef long long ll;
using namespace std;
//DP Bottom up approach(Memoization)
ll DP_Fib(int n)
{
	ll dp[MAX]={0};
	dp[1]=1;
	for(ll i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return(dp[n]);
}
int main()
{
	int n;
	cin>>n;
	
	cout<<DP_Fib(n);
	return(0);
} 
