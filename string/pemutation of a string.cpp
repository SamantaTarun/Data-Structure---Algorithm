#include<bits/stdc++.h>

using namespace std;


void Permute(string a,int l,int r)
{
	//Base Case
	if(l==r)
	   cout<<a<<endl;
	   
	else
	{
		for(int i=1;i<=r;i++)
		{
			swap(a[l],a[i]);
			
			Permute(a,l+1,r);
			
			swap(a[l],a[i]);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
	
		cin>>s;
		
		Permute(s,0,s.length()-1);
	}
	
	
	return 0;
	
	//return 0;
}
