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
	   int temp=n;
	   long long fact=1;
	   int ans=0,res=1;
	   while(n>0)
	   {
	   	  int rem=n%10;
	   	  if(rem==0)
	   	    res=1;
	   	  else
	   	  {
	   	  	res=1;
	   	  	for(int i=1;i<=rem;i++)
	   	  	{
	   	  		res*=i;
			}
			ans+=res;
		  }
		  n/=10;
	   }
	   
	   if(ans==temp)
	     cout<<temp<<" is a Strong number"<<endl;
	   else
	     cout<<temp<<" is not Strong number"<<endl;
	   
		   	
	}
	return 0;
}
