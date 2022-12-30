#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int n;
	   cin>>n;
	   int cnt=0;
	   while(n!=0)
	   {
	   	 cnt++;
	   	 n/=10;
	   	 
	   }
	   cout<<cnt<<endl;
		   	
	}
	return 0;
}
