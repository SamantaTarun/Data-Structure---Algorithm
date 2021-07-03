#include <iostream>
using namespace std;
void WaveArray(int arr[],int n)
{
    for(int i=0;i<=n-2;i+=2)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		
		WaveArray(arr,n);
		for(int i=0;i<n;i++)
		  cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
	return 0;
}
