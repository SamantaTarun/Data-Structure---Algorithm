#include<bits/stdc++.h>
using namespace std;

void printRoman(int number)
{
	
	int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
	string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	string s;
	//s.clear();
	int i=12;
	
	while(number>0)
	{
		int div=number/num[i];
		
		number=number%num[i];
		
		while(div--)
		{
			cout<<sym[i]<<" ";
		}
		i--;
	}
	//cout<<s<<endl;
	//return s;
}

int main()
{
	int n;
	
	cin>>n;
	printRoman(n);
	return 0;
}

