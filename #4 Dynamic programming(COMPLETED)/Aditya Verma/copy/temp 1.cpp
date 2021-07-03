// LCS DP(bottom Up-memoization)
#include<bits/stdc++.h>
using namespace std;
//int dp[10000][10000];
int LCS_DP(string s1,string s2,int m,int n)
{
	int dp[m+1][n+1];
	//base case- Initalization
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			   dp[i][j]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s1[i-1]==s2[j-1])
	          dp[i][j]=1+dp[i-1][j-1];
	       else
	          dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[m][n];
	
}
int main()
{
	string s1,s2;
	cout<<"Enter first string: ";
	cin>>s1;
	cout<<"\nEnter second string: ";
	for(int i=s1.length()-1;i>=0;i--)
	{
	    s2.push_back(s1[i]);
	}
	//memset(dp,-1,sizeof(dp));
	cout<<LCS_DP(s1,s2,s1.length(),s2.length());
	return(0);
}
