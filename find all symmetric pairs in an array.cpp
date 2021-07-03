#include<bits/stdc++.h>
using namespace std;

void find_symmetric_pairs(int arr[][2], int row)
{
	map<int,int>hashMap;
	
	for(int i=0;i<row;i++)
	{
		int first=arr[i][0];
		int second=arr[i][1];
		
		if(hashMap.find(second)!=hashMap.end() && hashMap[second]==first)
		   cout<<second<<" "<<first<<endl;
		else
		   hashMap[first]=second;
	}
}
int main()
{
	int arr[5][2];
	arr[0][0] = 1; arr[0][1] = 2;
	arr[1][0] = 3; arr[1][1] = 4;
	arr[2][0] = 5; arr[2][1] = 6;
	arr[3][0] = 2; arr[3][1] = 1;
	arr[4][0] = 4; arr[4][1] = 3;
	cout <<"Symmetric pairs : "<<endl;
	find_symmetric_pairs(arr, 5);
	return 0;
}
