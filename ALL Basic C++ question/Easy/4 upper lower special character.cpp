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
		if(isupper(ch))
		  cout<<"Upper Case Letter"<<endl;
		else if(islower(ch))
		  cout<<"Lower Case Letter"<<endl;
		else if(isdigit(ch))
		  cout<<"Is a number"<<endl;
		else
		  cout<<"is a symbol"<<endl;
		
		   	
	}
	return 0;
}
