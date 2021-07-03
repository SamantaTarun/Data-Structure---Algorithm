#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int Binary2Decimal(int a)
{
	//string s=to_string(a);
	int b=(int)a;
	string s;
	s=std::to_string(b);
	int len=s.length();
	reverse(s.begin(),s.end());
	int sum=0;
	for(int i=0;i<len;i++)
	{
		sum+=(s[i]-'0')*pow(2,i);
	}
	cout<<sum<<endl;
}
int main(int argc,char *argv[])
{
	if(argc<2)
	  cout<<"Please Supply Arguments\n";
	else
	  Binary2Decimal(atoi(argv[1]));
	  
	return 0;
}
