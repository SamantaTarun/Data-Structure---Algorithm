#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   string str,substr;
	   cin>>str>>substr;
	   int i;
	   for(i=0;i<str.length();i++)
	   {
	   	  if(str.substr(i,substr.length())==substr)
	   	  {
	   	  	cout<<i<<endl;
	   	  	break;
			 }
	   	     
	   }
	   if(i==str.length())
	      cout<<"Not Foud"<<endl;
	   
	}
	return 0;
}
