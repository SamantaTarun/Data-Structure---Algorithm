//Vectoe STL

#include<bits/stdc++.h>
using namespace std;

bool match(char a,char b)
{
	return (a=='('&&b==')')||
	(a=='{'&&b=='}')||
	(a=='['&&b==']');
}
bool isBalanced(string str)
{
	stack<char>st;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
		   st.push(str[i]);
		else
		{
			if(st.empty())
			  return false;
			else if(match(st.top(),str[i])==false)
			   return false;
			else
			   st.pop();
		}
	}
	return (st.empty()==true);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>s;
	   cout<<isBalanced(s)<<endl;
	}
	return 0;
}
