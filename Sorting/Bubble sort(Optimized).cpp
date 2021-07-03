#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[],int n)
{
    int swapped;
    for(int itr=0;itr<n-1;itr++)
    {
        swapped=false;
        for(int i=0;i<n-itr-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swapped=true;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(swapped==false)
            break;
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

    int arr[]={6,8,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    Bubble_Sort(arr,n);

    Display(arr,n);
    cout<<endl;
}
