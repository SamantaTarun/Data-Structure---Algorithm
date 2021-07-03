#include<bits/stdc++.h>
using namespace std;


//Nth term of a Fibonacci series
int main()
{
	int n;
    cin>>n;
    
    float a=pow(((float)(1.0+sqrt(5))/2.0),(float)n);
    float b=pow(((float)(1.0-sqrt(5))/2.0),(float)n);
    //double fn=(exp(((double)(1+sqrt(5))/2.0),n)-exp((((double)(1+sqrt(5))/2.0),n))/sqrt(5);
    float ans=(a-b)/(float)sqrt(5);
    
    cout<<ans<<endl;
    
    
	
	return 0;
}
