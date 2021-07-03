//SUBLIME TEXT
#include<bits/stdc++.h>
#include<cmath>
//#define<windows.h>
//prime fctorization  
//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define int      		long long
#define pb    			push_back
#define					REP(i,n) for (int i=1;i<=n;i++)
#define mp    			make_pair
#define pii   			pair<int,int>
#define vi	  			vector<int>
#define vii 			vector<ii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x) //trailing zerobits

#define mod             1000000007
#define inf				1e18
#define ps(x,y)			fixed<<setprecision(y)<<x
#define mk(arr,n,type)	type *arr=new type[n];
#define w(x)			int x; cin>>x; while(x--)
const double PI=3.141592653589793238460;
typedef std::complex<double> Complex;
//mt19937					rng(chrono::steady_clock::now().time_since_epoch().count)


/*void s_t_s()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif
}
*/
vector<char>arr(36);
string printRoman(int number)
{
	
	int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
	string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	string s;
	s.clear();
	int i=12;
	
	while(number>0)
	{
		int div=number/num[i];
		
		number=number%num[i];
		
		while(div--)
		{
			s.append(sym[i]);
		}
		i--;
	}
	//cout<<s;
	return s;
}
int roman_to_int(string str)
{
	
	int k=str.length();
	char max=str[0];
	for(int i=1;i<k;i++)
	{
		if(max<str[i])
		{
			max=str[i];
		}
	}
	char i;
	int sum=0;
	int base=lower_bound(arr.begin(),arr.end(),max)-arr.begin()+1;
	//cout<<base;
	//str.c_str();
	for(int i=0;i<str.length();i++)
	{
		int t=lower_bound(arr.begin(),arr.end(),str[i])-arr.begin();
		//cout<<t<<endl;
		int p=pow((double)base,(double)k-1);
		//cout<<p<<endl;
		sum+=t*p;
		k--;
	}
	//cout<<sum<<endl;
	return sum;
  
}


int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 

	int n;
	cin>>n;
	int m=0;
    for(int i=48;i<=57;i++)
    {
    	arr[m++]=i;
	}
	int j=10;
	for(int i=65;i<=90;i++)
	{
		arr[j++]=i;
	}

	while(n>=1 && n<=3999)
	{
		string str=printRoman(n);
		n=roman_to_int(str);
	}
	cout<<n<<endl;
    
	
 
return 0;
}
