#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{

    int arr[]={5,2,3,8,0,98,-1};
    //int arr[]={6,8,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    Bubble_Sort(arr,n);

    Display(arr,n);
    cout<<endl;
}
