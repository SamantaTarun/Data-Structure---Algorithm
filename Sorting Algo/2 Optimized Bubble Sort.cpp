#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[],int n)
{
	bool flag;
    for(int i=0;i<n-1;i++)
    {
    	flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            	flag=true;
            	swap(arr[j],arr[j+1]);
            	
			}
               
        }
        if(flag==false)
          break;
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
    int arr[]={2,10,20,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    Bubble_Sort(arr,n);
    Display(arr,n);
    return 0;
}
