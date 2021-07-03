#include<bits/stdc++.h>
using namespace std;

void Sorted_Merge(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
            cout<<arr1[i++]<<" ";
        else
            cout<<arr2[j++]<<" ";
    }
    while(i<n)  cout<<arr1[i++]<<" ";
    while(j<m)  cout<<arr2[j++]<<" ";
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
            cin>>arr1[i];
        for(int i=0;i<m;i++)
            cin>>arr2[i];
        Sorted_ Merge(arr1,arr2,n,m);
        cout<<endl;
    }
    return 0;
}
