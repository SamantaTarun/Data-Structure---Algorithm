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
	   int cnt=0;
	   while(temp!=0)
	   {
	   	cnt++;
	   	temp/=10;
	   	
	   }
	   temp=n;
	   int res=0;
	   while(n!=0)
	   {
	      int rem=n%10;
		  res+=pow(rem,cnt);
		  n/=10;	  
	   } 	
	   
	   if(res==temp)
	     cout<<temp<<" is an amstrong number"<<endl;
	   else
	     cout<<temp<<" is not an amstring number"<<endl;
	    
	     
	}
	return 0;
}
