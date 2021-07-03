#include<bits/stdc++.h>
using namespace std;
vector<int>vect;
int main()
{
	int T;
	cin>>T;
	int N,K;
	int m;
	while(T--)
	{
	  cin>>N>>K;
	  int loss=0;
	  int ini_rev=0;
	  for(int i=0;i<N;i++)
	  {
	  	 cin>>m;

	  	 vect.push_back(m);
	  }
	  int flag=0;
	  for(int i=0;i<N;i++)
	  {
        //ini_rev+=vect[i];
	  	if(vect[i]>K)
	  	{
	  		//vect[i]=K;
	  		loss+=vect[i]-K;
	  		flag=1;
		}
	  }
	  if(flag==1)
	  {
		cout<<loss;
	  }
	  else
	  {
	  	cout<<"0";
	  }
	  vect.clear();
	}

	return 0;
}
