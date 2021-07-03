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


int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double h;
    double l;
    
    cin>>h>>l;
    
    double total=(h/(double)360)*l;
    
    //cout<<total<<endl;
    string str=to_string(total);
    //cout<<str<<endl;
    for(int i=str.length()-1;i>=0;i--)
    {
    	if(str[i]=='0')
    	{
    		str.pop_back();
		}
		else if(str[i]!='0')
		{
			break;
		}
	}
	//cout<<str<<endl;
    int i;
    for(i=0;str[i]!='.';i++)
    {
    	
	}
	string s1=str.substr(0,i);
	double hour=stod(s1);
	
	//cout<<s1;
	double minute;
	string s2=str.substr(i+1,str.length());
	if(s2.length()>0)
	{
		minute=stod(s2);
	}
	else
	{
		minute=0;
	}
	/*
	cout<<s1<<endl;
	cout<<s2<<endl;
	*/
	
	cout<<hour<<"  "<<minute<<endl;
	
	
	double fhour=0.5*(hour*(double)60+(minute*6.00));
	double fminute=6.00*minute*6.00;
	
	//cout<<fhour<<"  "<<fminute<<endl;
	
	//cout<<fhour<<endl;
	
	double angle=abs(fhour-fminute);
	
	
	printf("%.2f",min(angle,360.00-angle));
	//cout<<<<endl;
   return 0;
}
