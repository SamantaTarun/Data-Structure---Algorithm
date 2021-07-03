#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
		    for(int k=n;k>n-i+1;k--)
		      cout<<" ";
		    for(int j=i;j<=n;j++)
		       cout<<"* ";
		    for(int k=n;k>n-i+1;k--)
		      cout<<" ";
		    cout<<endl;
		    
		}
		
	}
	return 0;
}
