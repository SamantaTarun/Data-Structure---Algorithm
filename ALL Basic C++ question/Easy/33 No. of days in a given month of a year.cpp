#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
	  return true;
	return false;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	int month,year;
	
	cin>>month>>year;
	map<int,int>mp;
	mp[1]=31;
	mp[2]=28;
	mp[3]=31;
	mp[4]=30;
	mp[5]=31;
	mp[6]=30;
	mp[7]=31;
	mp[8]=31;
	mp[9]=30;
	mp[10]=31;
	mp[11]=30;
	mp[12]=31;
	
	if(month==2&&isLeapYear(year))
	   cout<<mp[month]+1<<endl;
	else
	   cout<<mp[month]<<endl;
	}
	return 0;
}
