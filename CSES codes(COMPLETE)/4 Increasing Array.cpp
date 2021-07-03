#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,k=0;
	cin>>n;
	vector<int>vect,vect2;
	int num;
	for(ll i=0;i<n;i++)
	{
		cin>>num;
		vect.push_back(num);
	}
	for(ll i=0;i<(ll)vect.size()-1;i++)
	{
	  if(vect[i]<vect[i+1])
	  {
	  	 int k=vect[i+1]-vect[i];
	  	 vect2.push_back(k);
	  }	
	  k=0;
	}
	vector<int>::iterator it;
	it=max_element(vect2.begin(),vect2.end());
	cout<<*it-1;
	return(0);
	
}
