#include<bits/stdc++.h>
using namespace std;
bool isValid(string x)
{
    stack<int> s;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='(' || x[i]=='{' || x[i]=='[')
        s.push(x[i]);
        else if(s.empty())
        return false;
        else if(x[i]==')' && s.top()=='(')
        s.pop();
        else if(x[i]=='}' && s.top()=='{')
        s.pop();
        else if(x[i]==']' && s.top()=='[')
        s.pop();
        else
        return false;
    }
    if(s.empty())
    return true;
    return false;
}

int main()
{
	string s;
	cin>>s;
	isValid(s)?cout<<"Balanced\n":cout<<"Not Balanced\n";
	return 0;
}
