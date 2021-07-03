//  0/1 knapsack recursive
#include<bits/stdc++.h>
using namespace std;

int KnapSack(int val[],int wt[],int W,int n)
{
	if(n==0||W==0)
	{
		return 0;
	}
	else if(wt[n-1]<=W)
	{
		return max(val[n-1]+KnapSack(val,wt,W-wt[n-1],n-1),KnapSack(val,wt,W,n-1));
	}
	else if(wt[n-1]>W)
	{
		return KnapSack(val,wt,W,n-1);
	}
}
int main()
{
	int n,W;
	cout<<"Enter the Number of items: ";
	cin>>n;
	cout<<"\nEnter the total weight of the Knapsack: ";
	cin>>W;
	int val[n],wt[n];
	cout<<"\nEnter the value of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	cout<<"\nEnter the Weight of items: ";
	for(int i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
	}
	cout<<endl<<KnapSack(val,wt,W,n);
	return(0);
}
