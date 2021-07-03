//stings and algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//string algorithms
	
	s1="variety is the spice of life.";
	
	int num=count(s1.begin(),s1.end(), 'e'); //4
	
	num=count_if(s1.begin(), s1.end(), [](char ch) {return (c<='e' && c>='a');}); // 6
	
	
	
	s1="Goodness is better than beauty.";
	
	string::iterator itr=serach_n(s1.begin(),s1.begin()+20,2,'s'); // itr->first 's'
	s1.erase(itr,itr+5);
	
	s1.insert(itr,3,'x');
	
	s1.replace(itr,itr+3,3,'y');
	
	is_permutation(s1.begin(), s1.end(),s2.begin());
	
	replace(s1.begin(),s1.end(),'e',' ') //replace e with ' '
	
	transform(s1.begin(),s1.end(),s2.begin(),
			  [](char c{
			  if(c<'n')
			     return 'a';
			  else
			     return 'z';
				 }));
			// s2: azzazaaaazzazazaazaaazzz;
	
	s1='abcdefg';
	rotate(s1.begin(),s1.begin()+3,s1.end());  //s1: defgabc
	
	
	
	
	return 0;
}
