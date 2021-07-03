#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int n;
	   cin>>n;
	   string s1=to_string(n);
	   int res=n*n;
	   string s2=to_string(res);
	   //cout<<s1<<" "<<s2<<endl;
	   int k=s1.length();
	   string temp="";
	   int p=s2.length()-1;
	   while(k>0)
       {
           temp+=s2[p--];
           k--;

       }
       reverse(temp.begin(),temp.end());
	   if(s1==temp)
         cout<<"Automorphic number"<<endl;
       else
         cout<<"Not a Automorphic Number"<<endl;


	}
	return 0;
}
