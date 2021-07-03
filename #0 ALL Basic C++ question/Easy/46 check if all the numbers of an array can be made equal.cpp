// C++ code to replace a substring in a string

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

bool make_Equal(int arr[],int n)
{
	for(int i=0;i<n;++i)
	{
		while(arr[i]%2==0)
		  arr[i]/=2;
		while(arr[i]%3==0)
		  arr[i]/=3;
	}
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[0])
		  return false;
	}
	return true;
}
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
   	  int n;
   	  cin>>n;
   	  int arr[n];
   	  for(int i=0;i<n;i++)
   	    cin>>arr[i];
   	  cout<<make_Equal(arr,n)<<endl;
   }
   return 0;
}

