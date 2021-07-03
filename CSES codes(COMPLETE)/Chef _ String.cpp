#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int T;
	cin>>T;
	string str;
	while(T--)
	{
	  
	  cin>>str;
	  //cout<<str;
	  ll count=0;
	  for(ll i=0;i<(ll)str.size()-1;)
	  {
	  	if((str[i]=='x'&&str[i+1]=='y')||(str[i]=='y'&&str[i+1]=='x'))
	  	{
	  		i+=2;
	  		count++;
		}
		else
		{
			i++;
		}
	  }
	  cout<<count<<"\n";
	}

	return 0;
}
