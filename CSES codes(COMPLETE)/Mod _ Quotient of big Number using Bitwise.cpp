// CPP to find remainder and quotient 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std; 

// function to print remainder and quotient 
void divide(ll n,ll m) 
{ 
	// print Remainder by 
	// n AND (m-1) 
	cout <<"Remainder = " << ((n) &(m-1)); 
	
	// print quotient by 
	// right shifting n by (log2(m)) times 
	cout <<"\nQuotient = " <<(n >> (ll)(log2(m))); 

} 

// driver program 
int main() 
{ 
	ll n = 1000000000000000000, m = 2; 
	divide(n, m); 
	return 0; 
} 

