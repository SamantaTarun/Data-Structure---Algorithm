#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll Fib(int n)
{
	if(n==0 || n==1)
	   return n;
	return(Fib(n-1)+Fib(n-2));
}
int main()
{
	int n;
	cin>>n;
	cout<<Fib(n);
	return(0);
} 
