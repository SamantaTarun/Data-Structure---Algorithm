#include<bits/stdc++.h>
using namespace std;
bool isPal(string str,int l,int r)
{

    if(l==r) // if single character
        return true;

    if(l>r)
        return true;
    if(str[l]!=str[r])
        return false;

    return isPal(str,l+1,r-1);
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        string s;
        cin>>s;
        cout<<isPal(s,0,s.length()-1)<<endl;
    }

    return 0;
}
