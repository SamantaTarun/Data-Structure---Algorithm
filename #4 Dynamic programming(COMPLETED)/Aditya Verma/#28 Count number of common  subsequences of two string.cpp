#include<bits/stdc++.h>
using namespace std;
int CommonSubsequencesCount(string s1,string s2)
{
	int n1=s1.length();
	int n2=s2.length();
	
	int dp[n1+1][n2+1];
	
	for(int i=0;i<=n1;i++)
	{
		for(int j=0;j<=n2;j++)
		{
			dp[i][j]=0;
		}
	}
	
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s1[i-1]==s2[j-1])
			  dp[i][j]=1+dp[i][j-1]+dp[i-1][j];
			else
			  dp[i][j]=dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
		}
	}
	return dp[n1][n2];
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<CommonSubsequencesCount(s1,s2)<<endl;
	return 0;
}
