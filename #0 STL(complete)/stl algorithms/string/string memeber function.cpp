//stings and algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Memeber function algorithms : copy,find,compare
	
	s1="abcdefg";
	
	char buf[20];
	
	size_t len=s1.copy(buf, 3); // buf: abc  len==3
	
	len=s1.copy(buf,4,2);  // buf: cdef  len==4
	
	s1="If a job is worth doing, it's worth doing well";
	size_t found=s1.find("doing"); //found==17
	
	s1.compare(s2);
	
	s1.compare(3,2,s2);
	
	string ss=s1+s2;
	
	
	
	return 0;
}
