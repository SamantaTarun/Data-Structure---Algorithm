#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int row,col,min,max;
		cin>>row>>col;
		int matrix[row][col],pos[2][2];
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			  cin>>matrix[i][j];
		}
	
		//Saddle Point
		int j;
		for(int i=0;i<col;i++)
		{
			min=matrix[i][0];
			for(j=0;j<row;j++)
			{
				if(min>=matrix[i][j])
				{
					min=matrix[i][j];
					pos[0][0]=i;
					pos[0][1]=j;
				}
			}
			j=pos[0][1];
			max=matrix[0][j];
			
			for(int k=0;k<row;k++)
			{
				if(max<=matrix[k][j])
				{
					max=matrix[i][j];
					pos[1][0]=k;
					pos[1][1]=j;
				}
			}
		}
		
		//Printinng Saddle point
		if(min==max)
		{
			if(pos[0][0]==pos[1][0] && pos[0][1]==pos[1][1])
			{
				cout<<"Saddle point :"<<pos[0][0]<<","<<pos[0][1]<<" and "<<max<<endl;
			}
		}
	    
	    
	    
    }
	return 0;
}
