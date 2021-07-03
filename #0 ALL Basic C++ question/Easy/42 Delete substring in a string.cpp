#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   string str,substr;
	   cin>>str;
	   int l,r;
	   cin>>l>>r;
	   str.erase(str.begin()+l,str.begin()+l+r);
	   cout<<str<<endl;
	   
	}
	return 0;
}
