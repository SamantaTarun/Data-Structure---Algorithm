#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    /*
	    if(a>b&&a>c)
	       cout<<a<<" is Greatest"<<endl;
	    else if(b>a&&b>c)
	       cout<<b<<" is Greatest"<<endl;
	    else
	       cout<<c<<" is Greatest"<<endl;
		*/
		
		int res=max(max(a,b),c);
		cout<<res<<endl; 	
	}
	return 0;
}
