//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
//User function template for C++

class Solution{
public:
    int Rbinarysearch(int arr[], int low,int high, int k){
      if(low>high) return -1;
      int mid=(low+high)/2;
      if(arr[mid]==k)
         return mid;
      else if(arr[mid]<k)
         return Rbinarysearch(arr,mid+1,high,k);
      else
         return Rbinarysearch(arr,low,mid-1,k);

      return -1;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.Rbinarysearch(arr,0,N-1,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends
