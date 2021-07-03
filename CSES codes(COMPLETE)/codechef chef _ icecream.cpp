#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	int T;
	cin>>T;
	//string str
	
	while(T--)
	{
	   int n,m,count5=0,count10=0,count=0;
	   cin>>n;
	   vector<ll>vect;
	   for(ll i=0;i<n;i++)
	   {
	   	 cin>>m;
	   	 vect.push_back(m);
	   }
	   for(ll i=0;i<n;i++)
	   {
	   	 if(vect[i]==5)
	   	 {
	   	     
	   	 	count++;
	   	 	count5++;
		 }
		 else if(vect[i]==10)
		 {
		 	int temp=0;
		 	if(count5>=1)
		 	{
		 	  count10++;
			  count5--;	
		 	  count++;
		 	  temp=1;
			}
			if(temp==0)
			{
			    count10++;
			}
		 }
		 else if(vect[i]==15)
		 {
		    int flag=0;
			if(count10>=1)
			{
				count10--;
				count++;
				flag=1;
			}
		    if(flag==0)
			{
			   if(count5>=2)
		 	   {
		 		count5=(count5)-2;
		 		count++;
			   }
			}
		 	
			
		 }
		 
	   }
	   if(count==n) cout<<"YES"<<"\n";
	   else cout<<"NO"<<"\n";
	  
	}

	return 0;
}
