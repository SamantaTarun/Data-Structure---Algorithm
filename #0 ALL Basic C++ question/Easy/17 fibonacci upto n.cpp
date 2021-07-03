#include<bits/stdc++.h>
using namespace std;


void PrintFiboNacci(int n)
{
	long long int first=0,last=1;
	
	if(n<1)
	  return;
	cout<<first<<" ";
	for(int i=1;i<n;i++)
	{
		cout<<last<<" ";
		long long int next=first+last;
		first=last;
		last=next;
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	   int n;
	   cin>>n;
	   
	   //Print fibonacci nos upto n
	   /*
	   long long int fib[n/2];
	   memset(fib,0,sizeof(fib));
	   fib[0]=0;
	   fib[1]=1;
	   cout<<"0"<<" ";
	   for(long long int i=2;i<=n;i++)
	   {
	   	 cout<<fib[i-1]<<" ";
	   	 fib[i]=fib[i-1]+fib[i-2];
	   	 if(fib[i]>n)
	   	   break;
	   	 
	   }
	   */
	   PrintFiboNacci(n);
	   cout<<endl;
		   	
	}
	return 0;
}
