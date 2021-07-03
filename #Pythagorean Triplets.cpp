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


	for(int i=n-1;i>=2;i--)
    {
        int low=0;
        int high=i-1;
        while(low<high)
        {
            if(arr[i]==(arr[low]+arr[high]))
                {
                	cout<<"Triplets: "<<sqrt(arr[low])<<","<<sqrt(arr[high])<<","<<sqrt(arr[i])<<endl;
                	break;
				}
            else if((arr[low]+arr[high])<arr[i])
                low++;
            else
                high--;
        }
    }

}
int main()
{
   int n;
   cout<<"Enter the no. of elements: ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
   

   cout<<"Pthagorus triplets are: "<<endl;
   Pythagorus_triplets(arr,n);
   return 0;
}


