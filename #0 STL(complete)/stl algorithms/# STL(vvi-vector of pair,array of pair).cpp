#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	//pair
	pair<int,int>p={1,3};
	
	cout<<p.first<<" "<<p.second;
	cout<<"\n";
	
	pair<int,pair<int,int>>p1={1,{3,4}};
	cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first;
	cout<<"\n";
	
	pair<int,int>arr[]={{1,2},{2,5},{5,1}};
	
	for(int i=0;i<3;i++)
	{
		cout<<arr[i].second<<" ";
	}
	cout<<endl;
	
	
	//vector
	vector<int>v;
	v.push_back(1);
	v.emplace_back(2);
	
	for(auto i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	vector<pair<int,int>>vect;
	vect.push_back({1,2});
	vect.emplace_back(3,5);
	
	for(auto i:vect)
	{
		cout<<i.first<<"  "<<i.second;
	}
	cout<<endl;
	
	vector<int>v1(5,100);// {100,100,100,100,100}
	vector<int>v2(5);//{0,0,0,0,0}
	vector<int>v3(v1);//{100,100,100,100,100}
	
	
	vector<int>::iterator it;
	for(auto it=v2.begin();it!=v2.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	cout<<v3.back();
	
	cout<<endl;
	v2.erase(v2.begin());
	for(auto i:v2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	vector<int>v4(2,100); //{100,100}
	v4.insert(v4.begin(),300); //{300,100,100}
	v4.insert(v4.begin()+1,3,10);//{300,10,10,10,100,100}
	
	for(auto i:v4)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<v4.size()<<" "<<v4.capacity();
	cout<<endl;
	
    v4.pop_back();
    cout<<v4.size()<<endl;
    v4.swap(v1);
    for(auto i:v1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	v4.clear();
	cout<<v4.empty();
	cout<<endl;
	
	
	
	
	//list
	
	list<int>ls;
	ls.push_back(2);//2
	ls.emplace_back(10);//2,10
	ls.push_front(6);//6,2,10
	ls.emplace_front(15);//15,6,2,10
	
	for(auto i:ls)
	{
		cout<<i<<" ";
	}
	//rest Functions are same as vector
	cout<<endl;
	return(0);
	
	
	
}
