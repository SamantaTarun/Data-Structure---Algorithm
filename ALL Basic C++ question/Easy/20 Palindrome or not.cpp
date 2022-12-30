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
	   int rev=0;
	   
	   while(n!=0)
	   {
	   	  int rem=n%10;
	   	  rev=rev*10+rem;
	   	  n/=10;
	   }
	   
	   if(rev==temp)
	     cout<<"Palindrome Number"<<endl;
	   else
	     cout<<"Not a Palindrome number"<<endl;
		   	
	}
	return 0;
}
