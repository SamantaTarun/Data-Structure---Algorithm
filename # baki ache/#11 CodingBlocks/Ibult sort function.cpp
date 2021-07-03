#include<bits/stdc++.h>
using namespace std;
bool Comparator(int a,int b)
{
	return a<b;
}
int main()
{
	int n;
	cin>>n;
	int A[1000];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	sort(A,A+n,Comparator);
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	
    return 0;
}
