#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int row,col;
		cin>>row>>col;
		int arr1[row][col],arr2[row][col],arr3[row][col];
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			  cin>>arr1[i][j];
		}
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			  cin>>arr2[i][j];
		}
		
		
		//1. Addition 
		for(int i=0;i<row;i++)
        {
		for(int j=0;j<col;j++){
		   arr3[i][j]=arr1[i][j]+arr2[i][j];
	     }
	    }
	    
	    
	    
    }
	return 0;
}
