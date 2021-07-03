// LCS recursive
#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int m,int n)
{
	//int dp[n+1][W+1];
	if(m==0||n==0)
	  return(0);
	else if(s1[n-1]==s2[n-1])
	  return 1+LCS(s1,s2,m-1,n-1);
	else
	  return max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
}
int main()
{
	string s1,s2;
	cout<<"Enter first string: ";
	cin>>s1;
	cout<<"\nEnter second string: ";
	cin>>s2;
	cout<<"\n"<<LCS(s1,s2,s1.length(),s2.length());
	return(0);
}
