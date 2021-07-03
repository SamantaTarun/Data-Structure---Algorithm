//Matrix in Snake Pattern
#include<bits/stdc++.h>
#define row 4
#define col 4
using namespace std;


void Rotate_90(int arr[][col])
{
	//code for transpose
	for(int i=0;i<row;i++)
    {
    	for(int j=i+1;j<col;j++)
    	  swap(arr[i][j],arr[j][i]);
	}
	
	
	//code for reversing columns
	for(int i=0;i<row;i++)
	{
		int low=0,high=row-1;
		
		while(low<high)
		{
			swap(arr[low][i],arr[high][i]);
			low++;
			high--;
		}
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
	cout<<"Rotated Matrix(anti clockwise) :"<<endl;
	
	Rotate_90(arr);
    Display(arr);
		
	
	
	return 0;
}
