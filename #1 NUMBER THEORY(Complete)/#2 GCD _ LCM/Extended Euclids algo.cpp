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

int main( ) {     //  Ax+By=gcd(A,B),  find the value of gcd and coefficients x and y
	
int A,B;
cin>>A>>B;
extendedEuclid(A,B);
cout << "The GCD  is " << d << endl;
cout << "Coefficients x and y are "<< x <<  " and  " << y << endl;
return 0;   
}
