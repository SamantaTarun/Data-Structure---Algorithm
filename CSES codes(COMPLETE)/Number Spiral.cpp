#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int factorial(int n) 
    { 
      // single line to find factorial 
      return (n==1 || n==0) ? 1: n * factorial(n - 1);  
    } 
int main()
{  
    int n;
    cin>>n;
    
    char a,b;
    cin>>a>>b;
    int p,q;
    cin>>p>>q;
    
    
    //int k=factorial(s.length());
    
    int icnt=0;
    for(int i=(int)a;i<=(int)b;i++)
    {
    	icnt++;
	}
	float res=(icnt*icnt)/2;
	
	int fres=(res*24);
	cout<<fres<<endl;
    
    
    
    
	return(0);
}

