// C++ code to replace a substring in a string

#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void Pythagorus_triplets(int arr[],int n)
{

	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]*arr[i];
	}
	sort(arr,arr+n);


	for(int i=0;i<n-1;i++)
    {
        int low=i+1;
        int high=n-1;
        while(low<high)
        {
            if(arr[i]==(arr[low]+arr[high]))
                cout<<"Triplets: "<<sqrt(arr[low])<<" "<<sqrt(arr[high])<<endl;
            else if((arr[low]+arr[high])<arr[i])
                low++;
            else
                high--;
        }
    }

}
int main()
{
   int n,sum;
   cout<<"Enter the no. of elements: ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
   cout<<"Enter the sum value: ";
   cin>>sum;

   cout<<"Pthagorus triplets are: "<<endl;
   Pythagorus_triplets(arr,n);
   return 0;
}

