#include<bits/stdc++.h>
using namespace std;
vector<string>vect;

void permute(string str,int l,int r);
int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		string str;
		
		cin>>str;
		
		vect.clear();
		int l=0;
		int r=str.length();
		
		//if you want permutations in lexicographic order the sort the string;
		
		permute(str,l,r-1);
		
		cout<<endl;
		/*
	    for(auto i:vect)
	    {
	    	cout<<i<<" ";
		}
		*/
		
		for(int i=0;i<vect.size();i++)
		{
			if(str==vect[i])
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}

void permute(string str,int l,int r)
{
	if(l==r)
	{
		vect.push_back(str);
		return;
	}
	
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(str[l],str[i]);
			
			
			sort(str.begin()+l+1,str.end());
			
			permute(str,l+1,r);
			
			swap(str[l],str[i]);
		}
	}
}

