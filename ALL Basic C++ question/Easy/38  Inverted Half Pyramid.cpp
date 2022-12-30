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
	   int k;
	   for(int i=1;i<=n;i++)
	   {
	   	 for(k=1;k<=n-1;k++)
	   	   cout<<" ";
	   	 for(int j=1;j<=i;j++)
	   	   cout<<"* ";
	   	 cout<<endl;
	   }
	}
	return 0;
}
