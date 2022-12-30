#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int T;
	cin>>T;
	while(T--)
	{
		int rows;
		cin>>rows;
		for(int i=1;i<=rows;i++)
		{
			for(int j=rows-i;j>=1;j--)
			{
				cout<<" ";
			}
			
			if(i==1 || i==rows)
			{
				for(int j=1;j<=rows;j++)
				  cout<<"*";
				cout<<endl;
			}
			else
			{
				for(int j=1;j<=rows;j++)
				{
					if(j==1 || j==rows)
					  cout<<"*";
					else
					  cout<<" ";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
