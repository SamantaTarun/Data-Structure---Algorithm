#include<bits/stdc++.h>
//longest incrasing subsequence Dynamic Programming Approach
typedef long long ll;
#define NIL -1
#define MAX 10000
using namespace std;
int lis(int arr[],int n)
{
	int *lis,i,j,max=0;
	lis=(int *)malloc(n*sizeof(int));
	
	//Initialize Lis value for all indexes
	
	
	for(int i=0;i<n;i++)
	{
		lis[i]=1;
	}
	// Compute optimized LIS value in bottom up manner
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j] && lis[i]<lis[j]+1)
			   lis[i]=lis[j]+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(max<lis[i])
		   max=lis[i];
	}
	free(lis);
	return(max);
}
int main()
{
	int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Array Elements: ";
    for(int i=0;i<n;i++)
    {
    	scanf("%d", &arr[i]);
	}
	cout<<"Length of Longest increasing Subsequence is: ";
    cout<<lis(arr,n);
	
	
	return 0;
}

