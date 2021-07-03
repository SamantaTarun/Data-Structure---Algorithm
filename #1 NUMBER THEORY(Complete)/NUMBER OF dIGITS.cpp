#include<bits/stdc++.h>
using namespace std;


int No_Of_Digits(long long int n){

   //int cnt=0;

   /*
   while(n!=0)
   {
       n/=10;
       cnt++;
   }

   return cnt;
   */

   if(n==0)
    return 0;
   return 1+No_Of_Digits(n/10);


}
int main()
{

    int T;
    cin>>T;
    while(T--)
    {

        long long int n;
        cin>>n;

        cout<<No_Of_Digits(n)<<endl;
    }
  return 0;
}
