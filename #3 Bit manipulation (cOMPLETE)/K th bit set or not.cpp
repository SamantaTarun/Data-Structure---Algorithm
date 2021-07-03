#include<bits/stdc++.h>
using namespace std;


bool Kthset(int n,int k){
   if(n&(1<<(k-1))!=0)
      return true;
   return false;

}


int main()
{

    int T;
    cin>>T;
    while(T--)
    {

        long long int n,k;
        cin>>n>>k;

        cout<<Kthset(n,k)<<endl;
    }
  return 0;
}
