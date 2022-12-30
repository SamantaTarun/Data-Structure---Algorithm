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
	   vector<int>vect;
	   for(int i=1;i*i<=n;i++)
	   {
	   	 if(n%i==0)
	   	 {
	   	    vect.push_back(i);
			if(i*i!=n&&n/i!=n)
			  vect.push_back(n/i);	
		 }
	   }
	   
	   int res=accumulate(vect.begin(),vect.end(),0);
	   //cout<<res<<endl;
	   if(res==n)
	     cout<<"Perfect Number"<<endl;
	   else
	     cout<<"Not Perfect Number"<<endl;
		   	
	}
	return 0;
}
