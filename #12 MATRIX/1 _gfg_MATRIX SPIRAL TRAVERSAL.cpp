//Matrix Spiral order traversal
#include<bits/stdc++.h>
const int R=4;
const int C=5;
using namespace std;


int main()
{
	int row=R,col=C;
    //cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"Spiral Travesal :"<<endl;
	
	
	// spiral process begins here
	int top=0,left=0,bottom=R-1,right=C-1;
	
	while(top<=bottom && left<=right)
	{
		//Top row
		for(int i=left;i<=right;i++)
		   cout<<arr[top][i]<<" ";
		top++;
		
		//Right Column
		for(int i=top;i<=bottom;i++)
		   cout<<arr[i][right]<<" ";
		right--;
		
		//Bottom Row(reverse Order)
		if(top<=bottom)
		{
			for(int i=right;i>=left;i--)
			  cout<<arr[bottom][i]<<" ";
			bottom--;
		}
		
		//Left Column(reverse Order)
		if(left<=right)
		{
			for(int i=bottom;i>=top;i--)
			   cout<<arr[i][left]<<" ";
			left++;
		}
	}
	
	
		
	
	
	return 0;
}
