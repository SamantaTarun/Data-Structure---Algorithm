//Matrix Boundary Taversal
#include<bits/stdc++.h>
using namespace std;
const int R=3,C=3;
void bTraversal(int arr[R][C])
{
	//If Only One Row
	if(R==1)
	{
		for(int i=0;i<C;i++)
		  cout<<arr[0][i]<<" ";	
	}
	//If Only One Column
	else if(C==1)
	{
		for(int i=0;i<R;i++)
		  cout<<arr[i][0]<<" ";
	}
	else
	{
		for(int i=0;i<C;i++)
		  cout<<arr[0][i]<<" ";
		for(int i=1;i<R;i++)
		  cout<<arr[i][C-1]<<" ";
		for(int i=C-2;i>=0;i--)
		  cout<<arr[R-1][i]<<" ";
		for(int i=R-2;i>=1;i--)
		  cout<<arr[i][0]<<" ";
	}
}
int main()
{

    int arr[R][C];
    for(int i=0;i<R;i++)
    {
    	for(int j=0;j<C;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	cout<<endl;
	bTraversal(arr);
	
	return 0;
}
