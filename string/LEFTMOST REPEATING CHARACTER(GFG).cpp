#include<bits/stdc++.h>
using namespace std;
int firstRepeating(string str)
{
   int res=INT_MAX;
   int FI[256];
   memset(FI,-1,sizeof(FI));

   for(int i=0;i<str.length();i++)
   {
       if(FI[str[i]]==-1)
           FI[str[i]]=i;
        else
            res=min(res,FI[str[i]]);

   }
   return(res==INT_MAX)?-1:res;

}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        cout<<"Left most character that is not repeating: "<<s[firstRepeating(s)]<<endl;
    }
    return 0;
}
