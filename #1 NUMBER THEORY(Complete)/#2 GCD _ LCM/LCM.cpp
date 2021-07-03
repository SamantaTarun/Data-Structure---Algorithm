#include<bits/stdc++.h>
using namespace std;


//Leap Year
int main()
{
	int a,b;
	cin>>a>>b;
	int lcm=0;
	int low=(a<b)?a:b;
	while(1)
	{
		if(low%a==0 && low%b==0)
		{
			lcm=low;
			break;
		}
		low++;
	}
	
	printf("LCM: %d\n",lcm);
	return 0;
}
