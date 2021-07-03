//mAXIMUM sUBARRAY sUM
#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b)
{
	if(a<b)
	  return(b);
	else
	  return(a);
}
void MaxSubARRAYSUM(int A[],int n)
{
	int best=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
	    sum=Max(A[i],sum+A[i]);
		best=Max(sum,best);	
		
	}
	printf("%d\n", best);
}
int main()
{
	int A[]={-1,2,4,-3,5,2,-5,2};
	MaxSubARRAYSUM(A,8);
	return(0);
}
