// C++ code to replace a substring in a string

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
   int T;
   cin>>T;
   while(T--)
   {
   	  int n;
   	  cin>>n;
   	  int sum=0;
   	  int arr1[n],arr2[n];
   	  
   	  for(int i=0;i<n;i++)
   	  {
   	    cin>>arr1[i];	
	  }
	  for(int i=0;i<n;i++)
	  {
	  	cin>>arr2[i];
	  }
	  sort(arr1,arr1+n);
	  sort(arr2,arr2+n,greater<int>());
	  
	  for(int i=0;i<n;i++)
	  {
	  	sum+=(arr1[i]*arr2[i]);
	  }
	  cout<<sum<<endl;
   }
   return 0;
}

