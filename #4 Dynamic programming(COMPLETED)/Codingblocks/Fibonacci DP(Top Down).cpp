#include<bits/stdc++.h>
#define MAX 100000
typedef long long ll;
using namespace std;
//DP Top down approach( recursion + Memoization)
ll DP_Fib(int n,ll dp[])
{
	//Base case
	if(n==0 || n==1)
	  return n;
	//lookup
	if(dp[n]!=0)
       return(dp[n]);
    ll ans;
    ans=DP_Fib(n-1,dp)+DP_Fib(n-2,dp);
    return dp[n]=ans;
}
int main()
{
	int n;
	cin>>n;
	ll dp[MAX]={0};
	cout<<DP_Fib(n,dp);
	return(0);
} 
