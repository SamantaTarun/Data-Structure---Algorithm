#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	while(x--)
	{
	    int a,b;
		
		cin>>a>>b;
		
		int m=a&b;
		cout<<m<<endl;
		
		int n=a|b;
		cout<<n<<endl;
		
		int l=m^n;
		cout<<l<<endl;
	}
	
	return 0;
	
}
