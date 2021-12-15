#include<bits/stdc++.h>
using namespace std;
vector<int>vect;
int isSorted()
{
    int flag=1;
    for(int i=0;i<vect.size()-1;i++)
	{

	      if(vect[i]==vect[i+1])
	      {
	      	if(vect[i]!=0&&vect[i+1]!=0)
	      	{
	      	  flag=0;
	          break;
			}
	         
	      }
	 }
    return flag;
}
int main()
{
	vect={1, 5, 3, 12, 16, 8, 0, 0, 0, 0, 0, 0};
	cout<<isSorted();
	return 0;
}
