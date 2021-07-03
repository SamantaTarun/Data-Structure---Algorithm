//SUBLIME TEXT// Printing all subsets of a set
#include<bits/stdc++.h>
//#define<windows.h>
#include<bits/stdc++.h>
using namespace std;
//seive of Erothastest
int isprime[100000];
int arr[100000];
bool isPrime(int n)
{
	if(n==1||n==0)  {
		return false;
	}
    for(int i=2;i*i<=n;i++)
    {
    	if(n%i==0)  
		{
		   return false;	
		}
	}
	return true;
}
void seive()
{
	int maxN=100000;
	// mark all number as prime;
	for(int i=1;i<=maxN;i++)
	{
		isprime[i]=1;  //mark all number as prime
	}
	isprime[0]=isprime[1]=0;  // mark 0 and 1 as not prime
	for(int i=2;i*i<=maxN;i++)
	{
		if(isprime[i])
		{
			for(int j=i*i;j<=maxN;j+=i)
			{
				isprime[j]=0;
			}
		}
	}
	for(int i=0,k=0;i<=maxN;i++)
	{
		if(isprime[i]==1)
		{
			arr[k++]=i;
		}
	}
	
}
int main()
{
	    
		int n,sum=0,count=0;
		seive();
		cin>>n;
		for(int i=0;i<=n;i++)
		{
			   sum+=arr[i];
			   
			   if(sum!=2&&isPrime(sum)&&sum<=n)
			   {
				  count++;
				  cout<<sum<<" ";
			   }	   		 
		}
		/*
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		*/
		cout<<count<<endl;
	    return 0;
}
