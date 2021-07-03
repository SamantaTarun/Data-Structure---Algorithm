#include<bits/stdc++.h>
#define mod 10000007
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	long long res=((a%mod)*(b%mod))%mod;
	cout<<res<<endl;
	return 0;
}
