#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    long i=1;
    while(i<n)
    {
        i*=2;
    }

   if(i==n)
      cout<<true;
   else
      cout<<false;
    return 0;
}
