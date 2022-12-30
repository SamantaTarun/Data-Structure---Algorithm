#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int l,r;
	   cin>>l>>r;
	   int sum=0;
	   for(int i=l;i<=r;i++)
	     sum+=i;
	   cout<<sum<<endl;
		   	
	}
	return 0;
}
