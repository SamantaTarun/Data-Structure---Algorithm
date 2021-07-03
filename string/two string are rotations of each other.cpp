#include<bits/stdc++.h>
using namespace std;


bool isRotation(string str1,string str2)
{
    if(str1.length()!=str2.length())
        return false;
    str1=str1+str1;

    return(str1.find(str2)!=string::npos);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str1,str2;
        cin>>str1>>str2;

         cout<<isRotation(str1,str2)<<endl;
    }
    return 0;
}
