 #include<bits/stdc++.h>
 using namespace std;




 bool isValid(string s) {
        stack<char>st;

        if(s.length()==1)
            return false;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')'&&st.top()=='('&&st.empty()==false)
                st.pop();
            else if(s[i]=='}'&&st.top()=='{'&&st.empty()==false)
                st.pop();
            else if(s[i]==']'&&st.top()=='['&&st.empty()==false)
                st.pop();
            else
                return false;

        }
        return st.empty();
}

int main()
{
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
    return 0;
}
