#include<bits/stdc++.h>
#define max_size 1000000
bool S_Prime[max_size+1];
using namespace std;

int main()
{
	
	int T;
	cin>>T;
	
	while(T--)
	{
	  int n;
	  int p=1;
	  int temp=n;
	  while(n!=0)
	  cin>>n;
	  {
	  	int rem=n%10;
	  	if(rem==0)
	  	  temp+=p;
	  	p=p*10;
	  	n/=10;
	  }
	  cout<<temp;
		   	
	}
	cout<<endl;
	return 0;
}
