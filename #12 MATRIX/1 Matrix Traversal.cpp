#include<bits/stdc++.h>
using namespace std;

int main()
{
	int R,C;
	cin>>R>>C;

    int arr[R][C];
    for(int i=0;i<R;i++)
    {
    	for(int j=0;j<C;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	cout<<endl;
	int temp[R][C];
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			temp[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		   arr[i][j]=temp[i][j];
	}
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		   cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}
