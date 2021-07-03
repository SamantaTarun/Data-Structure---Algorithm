#include <bits/stdc++.h>
using namespace std;
int d, x, y;


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

int main( ) {     
	
int A,M;
cin>>A>>M;


cout<<modInverse(A,M)<<endl;
return 0;   
}
