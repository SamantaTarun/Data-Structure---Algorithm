//Matrix in Snake Pattern
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int row,col;
	cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"Snake pattern "<<endl;
	//if current row is even the we print it from left to rigt 
	//if current row is odd then we print it from right to left
	for(int i=0;i<row;i++)
	{
		if(i%2==0)
		{
		  for(int j=0;j<col;j++)
		  {
		  	cout<<arr[i][j]<<" ";
		  }
		}
		else
		{
			for(int j=col-1;j>=0;j--)
			{
				cout<<arr[i][j]<<" ";
			}
		}
	//	cout<<endl;
		
	}
	
	return 0;
}
