#include<bits/stdc++.h>
//Fibonacci Dynamic Programming Approach
typedef long long ll;
#define NIL -1
#define MAX 10000
using namespace std;

ll lookup[MAX];

void Initializer()
{
	for(ll i=0;i<MAX;i++)
	{
		lookup[i]=NIL;
	}
}
ll Fib(ll n)
{
	if(lookup[n]==NIL)
	{
		if(n<=1)
		   lookup[n]=n;
		else
		   lookup[n]=Fib(n-1)+Fib(n-2);

	}
	return lookup[n];
}
int main()
{
	ll n;
	Initializer();
	printf("Enter the term :\n");
	scanf("%lld", &n);
	cout<<Fib(n);
	return(0);
}
