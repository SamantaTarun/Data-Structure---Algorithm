#include <bits/stdc++.h>
using namespace std;
vector<int>vect;
int main() 
{
   // Try out your code here
    int T;
   cin>>T;
  while(T--)
  {
    string s;
    string s1;
    //s.c_str();    
    getline(cin,s);
    //s.c_str();
    //vect.clear();
    
    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
         if(s[i]==' ')
         {
              continue;
          }
         if((int)s[i]>=48&&(int)s[i]<57)
         {
            cout<<s[i]<<" ";
         }
         cout<<s1<<endl;
         vect.push_back(stoi(s1));
         s1.clear() ;
      
    }
    if(vect.size()>0)
    {
       // cout<<*max_element(vect.begin(),vect.end())<<endl;
     }
    else
    {
      //cout<<"-1"<<endl;
    }
  }
    return 0;
}
