#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
       int min_index=i;
       for(int j=i+1;j<n;j++)
          if(arr[j]<arr[min_index])
              min_index=j;
       swap(arr[i],arr[min_index]);
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

    Selection_Sort(arr,n);

    Display(arr,n);
    cout<<endl;
}
