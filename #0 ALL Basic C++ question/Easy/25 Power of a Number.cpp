#include<bits/stdc++.h>
using namespace std;

double Pow(int base,int exp)
{
	if(exp<0)
	 return pow(base,exp+1)/base;
	else if(exp==0)
	 return 1;
	else
	  return base*pow(base,exp-1);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	  int base,exp;
	  cin>>base>>exp;/*
	  //Approach 1
	  int res=1;
	  while(exp!=0)
	  {
	  	res*=base;
	  	exp--;
	  }
	  cout<<res<<endl;
	  */
	  //Approach 2: Using Recursion
	  cout<<Pow(base,exp)<<endl;
		   	
	}
	return 0;
}
