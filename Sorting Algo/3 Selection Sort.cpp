#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       int min_index=i;
       for(int j=i+1;j<n;j++)
       {
       	 if(arr[j]<arr[min_index])
       	    min_index=j;
	   }
	   swap(arr[i],arr[min_index]);
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
    int arr[]={10,1,50,2,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    Selection_Sort(arr,n);
    Display(arr,n);
    return 0;
}
