
// CPP code to find the lexicographically 
// smallest string 
#include <bits/stdc++.h> 
using namespace std; 
  
// Compares two strings by checking if  
// which of the two concatenations causes 
// lexicographically smaller string. 
bool compare(string a, string b) 
{ 
    return (a+b < b+a); 
} 
  
string lexSmallest(string a[], int n) 
{ 
    // Sort strings using above compare() 
    sort(a, a+n, compare); 
  
    // Concatenating sorted strings 
    string answer = ""; 
    for (int i = 0; i < n; i++) 
        answer += a[i]; 
  
    return answer; 
} 
  
// Driver code 
int main() 
{ 
  int t;
  cin>>t;
   while(t--)
   {
   	int N,M;
   	cin>>N>>M;
   	string a[N];
   	
   	for(int i=0;i<N;i++)
   	{
   	   cin>>a[i];	
	}
   	
    int n = sizeof(a)/sizeof(a[0]); 
    cout << lexSmallest(a, n); 
   
   }
    return 0; 
    
} 

