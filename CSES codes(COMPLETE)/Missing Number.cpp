#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	vector<ll>vect;
	ll num;
	for(int i=0;i<n-1;i++)
	{
	   cin>>num;
	   vect.push_back(num);
	   	
	}
	sort(vect.begin(),vect.end());
	/*for(ll i=0;i<(ll)vect.size();i++)
	{
		cout<<vect[i]<<" ";
	}
	cout<<endl<<endl;
	*/
	for(ll i=0;i<(ll)vect.size()+1;i++)
	{
		if(i+1!=vect[i])
		{
			cout<<i+1;
			break;
		}
	}
	
	return(0);
}
