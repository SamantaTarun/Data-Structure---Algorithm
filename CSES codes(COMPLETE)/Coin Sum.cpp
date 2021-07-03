#include<bits/stdc++.h>
using namespace std;
bool ready[1000];
int value[1000];
int Coins[]={1,3,4};
int Min(int a,int b)
{
	if(a<b)
	  return a;
	else
	  return b;
}
int Solve(int x)
{
	if(x<0) return -1;
	if(x==0)return 0;
	if(ready[x]) return value[x];
	int best=0;
	for(auto c:Coins)
	{
		best=Min(best,Solve(x-c)+1);
	}
	ready[x]=true;
	value[x]=best;
	return(best);
}

int main()
{
    cout<<Solve(10);
	return(0);
}
