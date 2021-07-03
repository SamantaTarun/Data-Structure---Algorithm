#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n)
{
    int res=0;

    for(int i=1;i<n-1;i++)
    {
        int lMax=arr[i];
        for(int j=0;j<i;j++)
            lMax=max(lMax,arr[j]);
        int rMax=arr[i];
        for(int j=i+1;j<n;j++)
            rMax=max(rMax,arr[j]);

        res+=min(lMax,rMax)-arr[i];
    }
    return res;
}
int main()
{

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<getWater(arr,n)<<endl;

    return 0;
}
