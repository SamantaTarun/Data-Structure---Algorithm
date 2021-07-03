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
		int Max=INT_MIN;
		int matrix[row][col];
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			    cin>>matrix[i][j];
		}
		
		int table[row+1][col+1];
		
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i==0||j==0)
				   table[i][j]=matrix[i][j];
				else if(matrix[i][j]==0)
				    table[i][j]=0;
				else
				   table[i][j]=min(table[i-1][j-1],min(table[i-1][j],table[i][j-1]))+1;			
			}
		}
		
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(Max<table[i][j])
				  Max=table[i][j];
			}
		}
		
		cout<<Max<<endl;
	}
	return 0;
}
