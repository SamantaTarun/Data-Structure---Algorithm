// C++ code to replace a substring in a string

#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void find_all_triplets(int arr[],int n,int sum)
{
	vector<vector<int> >vect;
    sort(arr,arr+n);
	for(int i=0;i<n-2;i++)
	{
		int start=i+1;
		int end=n-1;

		while(start<end)
		{

			if(arr[start]+arr[end]+arr[i]==sum)
			{
				vect.push_back({arr[start],arr[end],arr[i]});
				start++;
				end--;
			}
			else if(arr[start]+arr[end]+arr[i]<sum)
			 start++;
			else
			  end--;
		}
	}
	for(int i=0;i<vect.size();i++)
	{
		for(int j=0;j<vect[i].size();j++)
		  cout<<vect[i][j]<<" ";
		cout<<endl;
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

   cout<<"The triplets are: "<<endl;
   find_all_triplets(arr,n,sum);
   return 0;
}

