#include<bits/stdc++.h>
#define max_size 1000000
using namespace std;
bool S_Prime[max_size+1];
using namespace std;
int Octal2Bin(int n){
  string s=to_string(n);
  int k=0,sum=0;
  for(int i=s.length()-1;i>=0;i--)
  {
    sum+=(s[i]-'0')*pow(8,k++);
  }
  return sum;
}

void Decimal2All(int n)
{
   char res[1001];

   //binary_function
   cout<<itoa(res,n,2)<<endl;

   cout<<itoa(res,n,8)<<endl;

   cout<<itoa(res,n,10)<<endl;

   cout<<itoa(res,n,16)<<endl;


}
int main()
{

	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;


		n=Octal2Bin(n);
		cout<<n<<endl;

		cout<<sum<<endl;
	}
	return 0;
}

