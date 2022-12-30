#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char ch;
		cin>>ch;
		if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		   cout<<"VOWEL"<<endl;
		else
		  cout<<"Consonent"<<endl;
	}
	return 0;
}
