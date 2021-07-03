#include<bits/stdc++.h>
using namespace std;
/*

Problem Statement:

Problem statement is very easy . On a positive integer, you can perform any one of the following 3 steps.

 1.)  Subtract 1 from it. ( n = n - 1 ) 

 2.)  If its divisible by 2, divide by 2. ( if n % 2 == 0 , then n = n / 2  )

 3.)  If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3  )

Given a positive integer  n and you task is find the minimum number of steps that takes n to one .

Input:

The input contains an integer T (1 =  T =  100) number of test cases. Second line input is N (0 < N = 2*107 ) that indicates the positive number.

*/

//Bottom up
int minSteps(int n)
{
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	
	for(int i=2;i<=n;i++)
	{
	   int op1,op2,op3;
	   op1=op2=op3=INT_MAX;
	   if(n%3==0)
	      op1=dp[i/3];
	   if(n%2==0)
	      op2=dp[i/2];
	   op3=dp[i-1];
	   
	   dp[i]=min(min(op1,op2),op3)+1;
		   	
	}
	return dp[n];
}
using namespace std;

int main()
{
	int t;
	cin>>t;
	int m=t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<"Case "<<(m-t)<<": "<<minSteps(n)<<endl;
	}
	return 0;
}
