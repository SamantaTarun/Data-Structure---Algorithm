#include<bits/stdc++.h>
using namespace std;
// Formula: nC2
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		
		int res=(n*(n-1))/2;
		cout<<res<<endl;
	}
	return 0;
}
