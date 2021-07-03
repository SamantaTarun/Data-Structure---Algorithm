#include<bits/stdc++.h>
using namespace std;


bool isRotation(string s1,string s2)
{
	string s3=s1+s1;
	if(s1.length()!=s2.length())
	    return false;
	return (s3.find(s2)!=string::npos);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
	    cin>>s1>>s2;
	    
	    cout<<isRotation(s1,s2)<<endl;
	}
	return 0;

}
