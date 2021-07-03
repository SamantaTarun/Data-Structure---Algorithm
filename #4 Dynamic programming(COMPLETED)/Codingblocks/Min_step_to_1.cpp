#include<bits/stdc++.h>
#define MAX 100000
typedef long long ll;
using namespace std;
//DP top down approach(recursion + Memoization)
ll Min_step_to_1(int n,ll dp[])
{
	//Base Case
	if(n==1)
	  return 0;
	  //Recursive CasE
	// lOOKUP IF n is already completed
	if(dp[n]!=0)
	  return(dp[n]);
	//Compute if dp[n] is not computed(FIRST TIME)
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	if(n%3==0)
	   op1=Min_step_to_1(n/3,dp)+1;
	if(n%2==0)
	   op2=Min_step_to_1(n/2,dp)+1;

	op3=Min_step_to_1(n-1,dp)+1;
	int ans=min(min(op1,op2),op3);
	return dp[n]=ans;
}
int main()
{
	int n;
	cin>>n;
	ll dp[MAX];
	cout<<Min_step_to_1(n,dp);
	return(0);
} 
