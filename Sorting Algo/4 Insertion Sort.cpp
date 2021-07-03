#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[],int n)
{
	
    for(int i=1;i<n;i++)
    {
    	int key=arr[i];
    	int j=i-1;
    	while(j>=0&&arr[j]>key)
    	{
    		arr[j+1]=arr[i];
    		j--;
		}
		arr[j+1]=key;
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
    Insertion_Sort(arr,n);
    Display(arr,n);
    return 0;
}
