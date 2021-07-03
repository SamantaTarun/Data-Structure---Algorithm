#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
	if(n==0||n==1)
	  return false;
	for(int i=2;i*i<=n;++i)
	{
		if(n%i==0)
		  return false;
	}
	return true;
}
int main()
{
	int n;
	
	cin>>n;
	
	isPrime(n)?cout<<"it is a prime number"<<endl:cout<<"It is not a prime number"<<endl;
	
	return 0;
}
