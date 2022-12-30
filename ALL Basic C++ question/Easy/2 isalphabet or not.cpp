#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char ch;
		cin>>ch;
		if(isalpha(ch))
		   cout<<ch<<" "<<"is an alphabet"<<endl;
		else
		   cout<<ch<<" "<<"is not an alphabet"<<endl;
		   	
	}
	return 0;
}
