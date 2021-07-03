//stings and algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
	s1="Goodbye";
	
	s1.size(); s1.length(); // both returns 7
	
	s1.capacity(); // size of storage space currently allocated to s1
	
	s1.reserve(100); //100 characters
	
	s1.shrink_to_fit(); //shrink the capacity to hold the content
	
	s1.resize(9);
	
	
	//single  element access
	s1[2]; //'o';
	s1.at(2)='x';
	
	
	s1.front(); //"G"
	
	s1.back(); //'e'
	
	s1.push_back('z');
	s1.pop_back();
	s1.begin();
	s1.end();
	
	
	//Range access
	
	//assign,append,insert,replace
	
	string s2="Dragon Land";
	
	s1.assign(s2); // s1=s2
	s1.assign(s2,2,4); //s1: agon
	
	s1.assign("wisdom");  // s1: wisdom
	s1.assign("wisdom", 3); // s1: Wis
	
	s1.assign(3,'x');
	
	s1.assign({'a','b','c'});  //s1: abc
	
	s1.append(" def"); //s1: abc def
	
	s1.insert(2,"mountain",4);  //s1: abmounc def
	
	s1.replace(2,5,s2,3,3); //s1: abgon def
	
	
	s1.erase(1,4);  // s1: a def
	
	s2.substr(2,4);  //substring agon
	
	s1="abc";
	s1.c_str();  //"abc\0"
	s1.data(); //"abc"
	
	s1.swap(s2);
	
	
	return 0;
}
