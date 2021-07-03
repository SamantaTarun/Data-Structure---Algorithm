#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll>vect1,vect2;
vector<ll>vect3={1,2};
vector<ll>v4={3};

void partition_sum(ll n)
{
	if(n%2==0)
	{
	    for(ll i=1,j=2;i<=n;i+=2,j+=2)
	    {
	    	vect1.push_back(i);
	    	vect2.push_back(j);
	    	if(i==(n/2)-1)
	    	{
	    		 i++;
			} 
			if(j==n/2)
	    	{
	    		j--;
			}		
			
		}
		/*
		for(ll j=2;j<=n;j+=2)
		{
			vect2.push_back(j);
			if(j==n/2)
	    	{
	    		j--;
			}
			
		}
		*/
		printf("YES\n");
	   cout<<vect1.size()<<endl;
	  for(ll i=0;i<vect1.size();i++)
	  {
		cout<<vect1[i]<<" ";
	  }
	  cout<<endl;
	  cout<<vect2.size()<<endl;
	  for(ll i=0;i<vect2.size();i++)
	 {
		cout<<vect2[i]<<" ";
     }
	}
	else if(n%2!=0&&n>3)
	{
		for(ll i=1;i<=n;i++)
		{
			v4.push_back(i);
		}
		for(ll i=4;i<=n-1;i+=3)
		{
			vect3.push_back(i);
			if(i%2!=0)
			{
				i++;
				vect3.push_back(i);
			}
		}
		cout<<"YES"<<endl;
		vect3.push_back(n);
		cout<<vect3.size()<<endl;
		for(ll i=0;i<vect3.size();i++)
		{
			cout<<vect3[i]<<" ";
		}
		cout<<endl;
		cout<<n-vect3.size()<<endl;
		vector<ll>diff;
	
		set_difference(v4.begin()+3, v4.end(), vect3.begin(), vect3.end(), std::inserter(diff, diff.begin()));
		for (auto i : diff) std::cout << i << ' ';
	}
	else
	{
		cout<<"YES"<<endl;
		cout<<vect3.size()<<endl;
		for(auto i:vect3)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<v4.size()<<endl;
		for(auto i:v4)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
}
int main()
{
	ll n,sum=0;
	cin>>n;
	sum=(n*(n+1))/2;
	if(n<3)
	{
		printf("NO");
	}
	else if(sum%2!=0)
	{
		printf("NO");
	}
	else
	{
		partition_sum(n);
	}
	return 0;
}
