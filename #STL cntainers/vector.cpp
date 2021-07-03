//Vectoe STL

#include<bits/stdc++.h>
#define max_size 100000001
using namespace std;

bool isPrime[max_size];

void Prime_Interval(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(isPrime[i])
		  cout<<i<<" ";
	}
}

void Prime_seive()
{
	for(int i=0;i<=max_size;i++)
	{
		isPrime[i]=true;
	}
	isPrime[0]=isPrime[1]=true;
	
	for(int i=2;i*i<=max_size;i++)
	{
		if(isPrime[i])
		{
			for(int j=i*i;j<=max_size;j+=i)
			  isPrime[j]=false;
		}
	}
}
int main()
{
	Prime_seive();
	int T;
	cin>>T;
	
	while(T--)
	{
		int a,b;
		
		cin>>a>>b;
		Prime_Interval(a,b);
		
		cout<<endl;
	}
	return 0;
}
