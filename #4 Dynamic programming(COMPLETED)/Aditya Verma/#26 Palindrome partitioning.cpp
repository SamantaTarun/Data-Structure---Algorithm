#include<bits/stdc++.h>
using namespace std;
int static t[1001][1001];
bool isPalindrome(string s,int i,int j)
{
	if(i==j)
	   return true;
	if(i>j)
	   return true;
	while(i<j)
	{
		if(s[i]!=s[j])
		  return false;
		i++;
		j--;
	}
	return true;
}
int solve(string s,int i,int j)
{
	if(i>=j)
	  return 0;
	else if(isPalindrome(s,i,j)==1)
	   return 0;
	else if(t[i][j]!=-1)
	   return t[i][j];
	int min=INT_MAX;
	for(int k=i;k<j;k++)
	{
		int temp_ans=1+solve(s,i,k)+solve(s,k+1,j);
		if(temp_ans<min)
		  min=temp_ans;
	}
	return t[i][j]=min;
}
int main()
{
	string s;
	cin>>s;
	memset(t,-1,sizeof(t));
	cout<<solve(s,0,s.length()-1);
	//cout<<t[0][s.length()-2];
	return(0);
	
}
