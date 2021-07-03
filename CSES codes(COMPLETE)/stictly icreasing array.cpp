
// CPP program to find min elements to 
// change so array is strictly increasing 
#include <bits/stdc++.h> 
using namespace std; 
  
// To find min elements to remove from array 
// to make it strictly increasing 
int minRemove(int arr[], int n) 
{ 
    int LIS[n], len = 0; 
  
    // Mark all elements of LIS as 1 
    for (int i = 0; i < n; i++) 
        LIS[i] = 1; 
  
    // Find LIS of array 
    for (int i = 1; i < n; i++) { 
        for (int j = 0; j < i; j++) { 
            if (arr[i] > arr[j] && (i-j)<=(arr[i]-arr[j])){ 
                LIS[i] = max(LIS[i], LIS[j] + 1); 
            } 
        } 
        len = max(len, LIS[i]); 
    } 
  
    // Return min changes for array 
    // to strictly increasing 
    return n - len; 
} 
  
// Driver program to test minRemove() 
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	scanf("%d", &arr[i]);
	}
    
    //int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << minRemove(arr, n); 
  
    return 0; 
} 

