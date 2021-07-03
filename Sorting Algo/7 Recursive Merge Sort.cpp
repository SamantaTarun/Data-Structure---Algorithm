#include<bits/stdc++.h>
using namespace std;

//inplace Merge  
//Abdul Bari
void Merge(int arr[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l;
	int B[100];
	
	while(i<=mid && j<=h)
	{
		if(arr[i]<arr[j])
		  B[k++]=arr[i++];
		else
		  B[k++]=arr[j++];
	}
	
	for(;i<=mid;i++)
	  B[k++]=arr[i];
	for(;j<=h;j++)
	  B[k++]=arr[j];
	  
	for(int i=l;i<=h;i++)
	  arr[i]=B[i];
}

void Recursive_Merge_Sort(int arr[],int l,int h)
{
   if(l<h)
   {
   	 int mid=(l+h)/2;
   	 Recursive_Merge_Sort(arr,l,mid);
   	 Recursive_Merge_Sort(arr,mid+1,h);
   	 Merge(arr,l,mid,h);
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
    int arr[]={10,1,50,2,9,3,20,-1,90,458,1,36,2,892,896289,369};
    int n=sizeof(arr)/sizeof(arr[0]);
    Recursive_Merge_Sort(arr,0,n-1);
    Display(arr,n);
    return 0;
}
