// LCS DP(bottom Up-memoization)
#include<bits/stdc++.h>
using namespace std;
int dp[10000][10000];
int LCS_DP(string s1,string s2,int m,int n)
{
	//int dp[n+1][W+1];
	if(m==0||n==0)
	  return(0);
	else if(dp[m][n]!=-1)
	   return dp[m][n];
	else if(s1[n-1]==s2[n-1])
	  return dp[m][n]=1+LCS_DP(s1,s2,m-1,n-1);
	else
	  return dp[m][n]=max(LCS_DP(s1,s2,m-1,n),LCS_DP(s1,s2,m,n-1));
}
int main()
{
	string s1,s2;
	cout<<"Enter first string: ";
	cin>>s1;
	cout<<"\nEnter second string: ";
	cin>>s2;
	memset(dp,-1,sizeof(dp));
	cout<<LCS_DP(s1,s2,s1.length(),s2.length());
	return(0);
}
