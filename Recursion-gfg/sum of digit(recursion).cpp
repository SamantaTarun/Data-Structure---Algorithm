#include<bits/stdc++.h>
using namespace std;

int RSumOfDigit(int n)
{
  if(n<10)
    return n;
  return RSumOfDigit(n/10)+(n%10);
}
int main()

{

    int T;
    cin>>T;
    while(T--)
    {

        int n;
        cin>>n;
        cout<<RSumOfDigit(n)<<endl;
    }
    return 0;
}
