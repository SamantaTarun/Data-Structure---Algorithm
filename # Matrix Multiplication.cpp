#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int arr1[10][10],arr2[10][10],arr3[10][10];

		int m,n,p,q,c=0,d=0,k,sum=0;
	    cout<<"Enter the number of rows ans column of the first matrix :";
	    cin>>m>>n;
	    cout<<"Enter the number of row s and columns of second matrix: ";
	    
	    cin>>p>>q;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			  cin>>arr1[i][j];
		}
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			  cin>>arr2[i][j];
		}
		
		if(n!=p)
		   cout<<"Multiplication is not possible"<<endl;
	    else
	    {
	    for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
				arr3[i][j]=0;
				for(k=0;k<p;k++)
				{
					sum+=(arr1[i][k]*arr2[k][j]);
				}
				arr3[i][j]=sum;
			    sum=0;
			}
			
			
		}
	    }
		for(int i=0;i<m;i++)
        {
		for(int j=0;j<q;j++){
		  cout<<arr3[i][j]<<" ";
	     }
	     cout<<endl;
	    }
	    
		

	
    }
	return 0;
}
