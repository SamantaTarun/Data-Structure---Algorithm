//Quick Sort Using Lomuto Partition Method

#include<bits/stdc++.h>
using namespace std;


int Lomuto_partition(int arr[],int l,int h)
{
	// Here p is the Index of pivot element

	//Here We consider last element as pivot, 
	//But if we Want to consider any element as pivot then just swap that index with the last element
	
	int pivot=arr[h];
	int i=l-1;
	for(int j=l;j<=h-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return i+1;
	
}

void Quick_Sort(int arr[],int low,int high)
{
	
    if(low<high)
    {
    	int p=Lomuto_partition(arr,low,high);
    	
    	Quick_Sort(arr,low,p-1);
    	Quick_Sort(arr,p+1,high);
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
    int arr[]={150,400,300,20,-1,100,60,9,100,300};
    int n=sizeof(arr)/sizeof(arr[0]);
    Quick_Sort(arr,0,n-1);
    Display(arr,n);
    return 0;
}
