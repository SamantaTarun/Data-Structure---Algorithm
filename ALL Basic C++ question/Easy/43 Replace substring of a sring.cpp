// C++ code to replace a substring in a string

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
string str="hi hello";
string str2="hi";
string str3="hey";
int str2len = str2.length();
str.replace(str.find(str2),str2.size(),str3);
cout<<str;
return 0;
}

