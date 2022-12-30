#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		
		if(a>0 && b>0)
		   cout<<"1st quadrant"<<endl;
		else if(a<0 && b>0)
		   cout<<"2nd quadrant"<<endl;
		else if(a<0 && b<0)
		   cout<<"3rd quadrant"<<endl;
		else if(a>0 && b<0)
		   cout<<"4th quadrant"<<endl;
		else
		   cout<<"Origin"<<endl;
	}
	return 0;
}
