#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>vect;
int main()
{
	ll n,k=0;
	ll count=0;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		vect.push_back(k);
	}
	
	ll diff=0;
	for(ll i=0;i<n-1;i++)
	{
	  if(vect[i+1]<vect[i])
	  {
	  	diff=abs(vect[i+1]-vect[i]);
	  	vect[i+1]+=diff;
	  	count+=diff;
	  }
	}	
	printf("%lld",count);
	return 0;
	
}
