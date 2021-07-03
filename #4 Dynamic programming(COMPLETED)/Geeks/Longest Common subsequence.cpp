#include<bits/stdc++.h>
//longest common subsequence Dynamic Programming Approach
typedef long long ll;
#define NIL -1
#define MAX 10000
using namespace std;
int lcs(char *X,char *Y,int m,int n)
{
	int L[m+1][n+1];
	int i,j;
	
	//actul steps
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			  L[i][j]=0;
			  
			else if(X[i-1]==Y[j-1])
			   L[i][j]=L[i-1][j-1]+1;
			else
			   L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	return L[m][n];
}
int main()
{
	int s1,s2;
	cout<<"Enter the size of the first sequence: \n";
	cin>>s1;
	cout<<"Enter the size of the second sequence: \n";
	cin>>s2;
	char *p,*q;
	p=(char *)malloc(s1*sizeof(char));
	cout<<"Enter the First String: "<<endl;
	for(int i=0;i<s1;i++)
	{
		scanf("%c",&p[i]);
	}
	q=(char *)malloc(s2*sizeof(char));
	cout<<"Enter the Second String: "<<endl;
	for(int i=0;i<s1;i++)
	{
		scanf("%c",&q[i]);
	}
	cout<<"\nLength of Longest Common subsequenxe: "<<lcs(p,q,s1,s2);
	return 0;
}

