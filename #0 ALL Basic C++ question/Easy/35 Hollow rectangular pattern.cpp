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
	   for(int i=1;i<=row;i++)
	   {
	   	  if(i==1||i==row)
	   	  {
	   	  	for(int j=0;j<col;j++)
	   	  	   cout<<"* ";
		  }
		  else
		  {
		  	 for(int j=1;j<=col;j++)
		  	   {
		  	   	 if(j==1||j==col)
		  	   	   cout<<"* ";
		  	   	 else
		  	   	   cout<<"  ";
				}
		  }
		  cout<<endl;
	   }
	   
	}
	return 0;
}
