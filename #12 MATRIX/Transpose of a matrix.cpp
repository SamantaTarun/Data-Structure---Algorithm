//Matrix in Snake Pattern
#include<bits/stdc++.h>
#define row 3
#define col 3
using namespace std;


void transpose(int arr[][col])
{
	for(int i=0;i<row;i++)
    {
    	for(int j=i+1;j<col;j++)
    	  swap(arr[i][j],arr[j][i]);
	}
}

void Display(int arr[row][col])
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		  cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	//int row,col;
//	cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"Transpose Matrix :"<<endl;
	
	transpose(arr);
    
    Display(arr);
		
	
	
	return 0;
}
