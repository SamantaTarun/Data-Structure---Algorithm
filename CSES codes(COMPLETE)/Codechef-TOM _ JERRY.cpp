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
	  ll TS;
	  cin>>TS;
	  ll count=0;
	  for(ll JS=1;JS<TS;JS++)
	  {
	  	if(TS==1&&JS==1)
	  	{

		}
	  	else if(TS%2==0&&JS%2==0)
	  	{
	  	   	TS/=2;
	  	   	JS/=2;
		}
		else if(TS%2!=0&&JS%2==0)
		{
			count++;
		}
	  }
	  cout<<count<<"\n";
	  
    }
	return 0;
}
