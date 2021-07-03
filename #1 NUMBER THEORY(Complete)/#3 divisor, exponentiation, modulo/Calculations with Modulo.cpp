#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int d, x, y;

//Question 
/*

  find the answer of ((A^B)/C)%M
  here 1<=A,B,C,M<=10^9
  GCD(C,M)=1

*/
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int modInverse(int A, int M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}
ll Power(ll a,ll n,ll M)   //a^n
{
	ll res=1;
	while(n)
	{
		if(n%2)
		{
			res=(res*a)%M;
			n--;
		}
		else
		{
			a=(a*a)%M;
			n/=2;
		}
	}
	return(res);
}

ll compute(ll A,ll B,ll C,ll M)
{
	long long k=modInverse(C,M);

	ll ans=(Power(A,B,M)%M*k%M)%M;

	return ans;
}

int main( ) {     
	
ll A,B,C,M;
cin>>A>>B>>C>>M;

cout<<compute(A,B,C,M)<<endl;


return 0;   
}
