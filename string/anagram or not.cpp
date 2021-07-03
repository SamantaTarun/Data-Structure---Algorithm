#include<bits/stdc++.h>
using namespace std;
int freq[256];
bool isAnagram(string str1,string str2)
{

    if(str1.length()!=str2.length())
        return false;
    for(int i=0;i<str1.length();i++)
        freq[str1[i]]++;
     for(int i=0;i<str2.length();i++)
        freq[str2[i]]--;
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;

}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(freq,0,sizeof(freq));
        string s1,s2;
        cin>>s1>>s2;

        cout<<isAnagram(s1,s2)<<endl;
    }


    return 0;
}
