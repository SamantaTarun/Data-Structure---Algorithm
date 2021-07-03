//stings and algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//non memeber functions
	
	cout<<s1<<endl;
	cin>>s1;
	
	getline(cin,s1);   //default delimeter of '\n'
	
	
	getline(cin,s1,';'); // delimeter is ';'
	
	
	//covert a number into string
	s1=to_string(8);
	
	s1=to_string(2.3e7); // s1:23000000000.000000
	
	s1=to_string(034); //s1: 28
	
	//convert a string into number
	
	s1="190";
	int i=stoi(s1); //i: 190  pos==3
	
	//stol,stod,stof, etc
	
	
	return 0;
}
