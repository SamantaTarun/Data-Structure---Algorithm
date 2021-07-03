#include<bits/stdc++.h>
//Binomial Coefficien or nCr    Dynamic Programming Approach
typedef long long ll;
#define NIL -1
#define MAX 10000
using namespace std;

//Given Two Strings str1 and str2 and below operations that can be performed on str1. Find the minimum number of edits required to convert str1 into str2.

//1. Insert
//2. Remove
//3. Replace
int EditDist(string str1,string str2,int m,int n)
{
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			
			//if first string is empty, the only option is to insert all characters of second string into first
			if(i==0)
			{
				dp[i][j]=j;
			}
			
			//if second string is empty, the only option is to remove all characters of first string
			else if(j==0)
			{
				dp[i][j]=i;
			}
			
			//if the last characters of two strings are same,nothing much to do. Ignore the last character and get count for the remaining strings
			else if(str1[i-1]==str2[j-1])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			//If the last characters are not same , consider minimum of all the three operation
			else
			{
				dp[i][j]=1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
			}
		}
	}
	return(dp[m][n]);
}
int main()
{
	string s1="145";
	string s2="1045";
	cout<<EditDist(s1,s2,s1.length(),s2.length());
	return(0);
}
