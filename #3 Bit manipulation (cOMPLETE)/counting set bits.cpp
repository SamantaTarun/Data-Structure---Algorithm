#include<bits/stdc++.h>
using namespace std;


int Set_Bits(int n){
   int cnt=0;
   /*
   while(n>0)
   {
       if(n%2==1)
        cnt++;
       n/=2;
   }
   */
   while(n>0)
   {
       if(n&1==1)
        cnt++;
       n=n>>1;
   }
   return cnt;

}


int main()
{

    int T;
    cin>>T;
    while(T--)
    {

        long long int n;
        cin>>n;

        cout<<Set_Bits(n)<<endl;
    }
  return 0;
}
