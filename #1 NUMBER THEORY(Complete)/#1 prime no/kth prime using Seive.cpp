//SUBLIME TEXT// Printing all subsets of a set
#include<bits/stdc++.h>
using namespace std;
#define maxN  10000000
vector<bool>vi(maxN);
vector<int>vect;
void seive()
{
	// By default bool array is false that implies prime
	// mark all number as prime;
	vi[0]=vi[1]=true;  // mark 0 and 1 as not prime
	for(int i=2;i*i<=maxN;i++)
	{
		if(vi[i]==false)
		{
			for(int j=i*i;j<=maxN;j+=i)
			{
			   vi[j]=true;
			}
		}
	}
	for(int i=2;i<=maxN;i++)
	{
		if(vi[i]==false)
		{
			vect.emplace_back(i);
		}
	}		
}
int main()
{
   	    int n;
		cin>>n;
		seive();
		cout<<"kth prime is: "<<vect[n-1];
	    return 0;
}
