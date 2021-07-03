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
    for(char i:str)
    {
        if(i=='('||i=='{'||i=='[')
            st.push(i);
        else
        {
            if(st.empty())
                return false;
            else if(match(st.top(),i)==false)
                return false;
            else
                st.pop();
        }
    }
    return (st.empty()==true);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }

    return 0;
}
