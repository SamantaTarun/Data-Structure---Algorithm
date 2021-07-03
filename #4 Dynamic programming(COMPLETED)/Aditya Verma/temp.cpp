#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
long long  facto(int n)
{
	long long int fact=1;
	if(n==0||n==1)
	  return 1;
	for(int i=1;i<=n;i++)
	{
		fact=(fact*i)%1000000007;
	}
	cout<<fact<<endl;
	return fact;
}
int main() {

	// Your code here
	int N,M;
	cin>>N>>M;
    cout<<facto(M)/facto(M-N)<<endl;
	return 0;
}
