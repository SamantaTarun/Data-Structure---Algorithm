#include<bits/stdc++.h>
using namespace std;


//seive of erosthes

vector<long long>Prime_list;
void Prime_Seive(long long n)
{
	bool isPrime[n+1];
	
	for(long long i=0;i<=n;i++)
	{
		isPrime[i]=true;
	}
	
	isPrime[0]=false;
	isPrime[1]=false;
	
	for(long long i=2;i*i<=n;i++)
	{
		if(isPrime[i]==true)
		{
			for(long long j=i*i;j<=n;j+=i)
			{
				isPrime[j]=false;
			}
		}
	}
	
	for(long long i=0;i<=n;i++)
	{
		if(isPrime[i]==true)
		{
			Prime_list.push_back(i);
		}
	}
}
int main()
{
	long long n;
	
	cin>>n;
	
	Prime_Seive(n);
	
	for(auto i:Prime_list)
	{
		cout<<i<<" ";
	}
	
	return 0;
}
