#include<bits/stdc++.h>
using namespace std;
int static t[1001][1001];
int solve(int arr[],int i,int j)
{
	if(i>=j)
	  return 0;
	if(t[i][j]!=-1)
	   return t[i][j];
	int min=INT_MIN;
	for(int k=i;k<j;k++)
	{
		int temp_ans=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
		if(temp_ans>min)
		  min=temp_ans;
	}
	return t[i][j]=min;
}
int main()
{
	int arr[]={10,100,20,5,80};
	int n=sizeof(arr)/sizeof(arr[0]);
	memset(t,-1,sizeof(t));
	cout<<solve(arr,1,n-1);
	return(0);
	
}
