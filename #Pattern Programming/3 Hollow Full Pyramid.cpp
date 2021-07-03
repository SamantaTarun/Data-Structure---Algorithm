#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
		    for(int j=i;j<n;j++)
		       cout<<" ";
		    
		    //Printing Hollow Pyramid
		    for(int j=1;j<=(2*i-1);j++)
		    {
		    	if(i==n||j==1||j==(2*i-1))
		    	   cout<<"*";
		    	else
		    	   cout<<" ";
			}
			
			cout<<endl;
	    }
		
	}
	return 0;
}
