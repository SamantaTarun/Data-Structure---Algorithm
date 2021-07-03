#include<bits/stdc++.h>
using namespace std;
int firstNonRepeating(string str)
{
   int res=INT_MAX;
   int FI[256];
   memset(FI,-1,sizeof(FI));

   for(int i=0;i<str.length();i++)
   {
       if(FI[str[i]]==-1)
           FI[str[i]]=i;
        else
           FI[str[i]]=-2;

   }
   for(int i=0;i<256;i++)
   {
       if(FI[i]>=0)
        res=min(res,FI[i]);
   }
   return (res==INT_MAX)?-1:res;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        cout<<"Left most character that is not repeating: "<<s[firstNonRepeating(s)]<<endl;
    }
    return 0;
}
