#include<bits/stdc++.h>
using namespace std;


//resturns the index of the largest element
int Largest(int arr[],int n)
{

    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
}

//return the index of tyhen second largest element
int Second_Largest(int arr[],int n)
{

    int largest=Largest(arr,n);
    int res=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
                res=i;
            else if(arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<"Index of the second largest element is: "<<Second_Largest(arr,n)<<endl;

	return 0;
}
