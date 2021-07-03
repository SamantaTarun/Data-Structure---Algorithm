#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int s,w1,w2,w3;
	while(T--)
	{
		cin>>s>>w1>>w2>>w3;
	  if(s>(w1+w2+w3))
	  {
		cout<<"1";
	  }
	  else if(w1==w2&&w2==w3&&w1==w3)
	  {
		if(w1+w2+w3<=s)
		{
			cout<<"1";
		}
		else
		{
		  cout<<(w1+w2+w3+1)-s;
		}
	  }
	 else
	 {
		cout<<(w1+w2+w3)-s;
	 }
	}
	
	return 0;
}
