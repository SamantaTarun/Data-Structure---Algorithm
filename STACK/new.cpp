#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr1,arr2,arr3;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;i++)
    {

        int k;
        cin>>k;
        arr1.push_back(k);
    }
    for(int i=0;i<n2;i++)
      {

           int k;
        cin>>k;
        arr2.push_back(k);
      }
    for(int i=0;i<n3;i++)
        {
             int k;
        cin>>k;
        arr3.push_back(k);
        }

    int n=min(n1,min(n2,n3));
    int flag=0;
    int res=-1;
    for(int i=0;i<n;i++)
    {

        if(arr1[i]==arr2[i]==arr3[i])
        {
            flag=1;
            res=arr1[i];
            break;
        }
    }
    if(flag==0)
        cout<<res<<endl;
    else
        cout<<res;

    return 0;

}
