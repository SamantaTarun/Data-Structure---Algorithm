#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    vector<ll>vect;
    
    cin>>n;
    vect.push_back(n);
    while(true)
    {
    	
		if(n%2==0)
		{
			n=n/2;
			vect.push_back(n);
		}
		if(n%2!=0)
		{
		   if(n==1)
		   {
		     //cout<<n;
		     break;
		   }   
		   n=(3*n)+1;
		   vect.push_back(n);
		}		  
	}
	for(ll i=0;i<(ll)vect.size();i++)
	{
		cout<<vect[i]<<" ";
	}
	return(0);
    
}
