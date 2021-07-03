#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	string s;
	vector<int>vect;
	vector<int>::iterator it;
	getline(cin,s);
	vect.push_back(1);
	ll count=1;
	for(ll i=0;i<(ll)s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
		}
		vect.push_back(count);
		if(s[i]!=s[i+1])
		{
			
			count=1;
		}
	}
	/*for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<" ";
	}
	cout<<endl;
	*/
	it=max_element(vect.begin(),vect.end());
	cout<<*it;
	//cout<<count;
	return(0);
}
	
	
