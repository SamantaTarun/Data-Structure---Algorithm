#include<bits/stdc++.h>
#define max_size 1000000
using namespace std;
int main()
{
	
	int T;
	cin>>T;
	
	while(T--)
	{
	  int num1,num2,num,digit,sum;
	  
	  cin>>num1>>num2;
	  
	  cout<<"Amstrong Number between "<<num1<<" and "<<num2<<" are: "<<endl;
	  for(int i=num1;i<=num2;i++)
	  {
	  	sum=0;
	  	num=i;
	  	
	  	while(num>0)
	  	{
	  		digit=num%10;
	  		sum+=(digit*digit*digit);
	  		num/=10;
		}
		
		if(sum==i)
		  cout<<i<<" ";
	  }
	  cout<<endl;
		   	
	}
	
	return 0;
}
