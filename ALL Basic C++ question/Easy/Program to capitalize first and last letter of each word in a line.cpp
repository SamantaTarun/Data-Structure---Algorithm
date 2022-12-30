#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	   
	
		
		
		string str;
		getline(cin,str);
		
		str[0]=toupper(str[0]);
		for(int i=1;i<str.length()-1;i++)
		{
			if(str[i]==' ')
			{
				str[i-1]=toupper(str[i-1]);
				str[i+1]=toupper(str[i+1]);
			}
		}
		str[str.length()-1]=toupper(str[str.length()-1]);
		cout<<str<<endl;
		str.clear();

	
	return 0;
}
