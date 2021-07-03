#include<bits/stdc++.h>
using namespace std;

vector<int>res;

void factorize(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		{
			res.push_back(i);
			n/=i;
		}
	}
	
	if(n!=1)
	  res.push_back(n);
}
int main()
{
	int n;
	cin>>n;
	factorize(n);
	
	for(auto i:res)
	{
		cout<<i<<" ";
	}
	
	return 0;
	
	
}
