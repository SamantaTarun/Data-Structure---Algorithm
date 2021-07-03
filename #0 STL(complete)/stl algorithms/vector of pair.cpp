#include<bits/stdc++.h>
using namespace std;
// vector of pair

int main()
{
	vector<pair<int,string> >v;
	
	int n;
	cin>>n;
	int a;
	string b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	
	//displaying
	cout<<endl<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
}
