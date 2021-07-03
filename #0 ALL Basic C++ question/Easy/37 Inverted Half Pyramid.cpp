#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int row;
	   cin>>row;
	   for(int i=1;i<=row;i++)
	   {
	      for(int k=1;k<i;k++)
	        cout<<" ";
	      for(int j=i;j<=row;j++)
	        cout<<"*";;
	      cout<<endl;
	   }
	}
	return 0;
}
