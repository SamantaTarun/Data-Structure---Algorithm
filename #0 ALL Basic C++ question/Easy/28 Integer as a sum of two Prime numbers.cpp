#include<bits/stdc++.h>
#define max_size 1000000
using namespace std;
bool S_Prime[max_size+1];
using namespace std;
void Prime()
{
	
	for(int i=0;i<=max_size;i++)
	   S_Prime[i]=true;
	S_Prime[0]=S_Prime[1]=false;
	
	for(int i=2;i*i<=max_size;i++)
	{
		if(S_Prime[i])
		{
			for(int j=i*i;j<=max_size;j+=i)
			  S_Prime[j]=false;
		}
	}
	
}

int main()
{
	Prime();
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int flag=0;
		for(int i=2;i<=n/2;i++)
		{
			if(S_Prime[i])
			{
				if(S_Prime[n-i])
				{
					flag=1;
					break;
				}
				  
			}
		}
		if(flag==1)
		  cout<<"Can be"<<endl;
		else
		  cout<<"Can not be"<<endl;
	}
	return 0;
}
