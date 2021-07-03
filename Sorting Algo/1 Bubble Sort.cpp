#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
               swap(arr[j],arr[j+1]);
        }
    }
}

void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={2,10,1,50,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    Bubble_Sort(arr,n);
    Display(arr,n);
    return 0;
}