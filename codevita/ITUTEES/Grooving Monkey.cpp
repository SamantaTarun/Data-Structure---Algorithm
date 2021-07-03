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
   w(t)
   {
   	 int n;
   	 
   	 cin>>n;
   	 
   	 int arr[n+1];
   	 
   	 vector<char>monkey(n+1);
   	 
   	 monkey.clear();
   	 
   	 
   	 for(int i=1;i<=n;i++)
   	 {
   	 	cin>>arr[i];
	 }
	 int j=97;
	 for(int i=1;i<=n;i++)
   	 {
   	 	monkey[i]=(char)j;
   	 	j++;
	 }
	 
	 
	 vector<char>vect1(n+1);
	 vector<char>vect2(n+1);
	 vect2.clear();
	 vect2=monkey;
	 
	int cnt=0;
	
   while(1)
   {
   	vect1.clear();
	for(int i=1;i<=n;i++)
	{
	  vect1[arr[i]]=monkey[i];
	}
	//monkey.clear();
    for(int i=1;i<=n;i++)
    {
    	monkey[i]=vect1[i];
	}
	cnt++;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		
		if(vect2[i]==vect1[i])
		{
			count++;
		}
	}
	if(count==n)
	{
		break;
	}

   }
   	cout<<cnt<<endl; 

	 

   }
   return 0;
}
