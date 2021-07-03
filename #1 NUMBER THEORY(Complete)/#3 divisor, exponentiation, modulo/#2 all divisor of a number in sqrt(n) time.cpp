#include<bits/stdc++.h>
#define ll long long
using namespace std;
//finding all divisor of a number in sqrt(n) time
int main()
{
	ll n;
	cin>>n;
	vector<ll>div;
	
	for(ll i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			div.push_back(i);
			
			if(i*i!=n)
			{
				div.push_back(n/i);  //if i is a divisor of a number n, then  n/i is also a divisor of n
			}
		}
	}
	for(auto d:div)
	{
		cout<<d<<" ";
	}
	return 0;
}
