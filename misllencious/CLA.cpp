#include<bits/stdc++.h>
using namespace std;
int Decimal2all(int a)
{
	char res[1000];
	cout<<itoa(a,res,10)<<endl;
	cout<<itoa(a,res,2)<<endl;
	cout<<itoa(a,res,8)<<endl;
	cout<<itoa(a,res,16)<<endl;
	
}
int main(int argc,char *argv[])
{
	if(argc<2)
	  cout<<"Please Supply Arguments\n";
	else
	  Decimal2all(atoi(argv[1]));
	  
	return 0;
}
