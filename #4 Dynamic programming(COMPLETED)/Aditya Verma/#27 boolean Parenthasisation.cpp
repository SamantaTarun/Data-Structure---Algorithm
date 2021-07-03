//SUBLIME TEXT// Printing all subsets of a set
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define ll     		    long long
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
#define zrobits(x)		__builtin_ctzll(x)
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
int solve(string s,int i,int j,bool isTrue)
{
	int ans=0;
	if(i>j)
	   return false;
	else if(i==j)
	{
		if(isTrue)
		   return s[i]=true;
		else
		   return s[i]=false;
	}
	for(int k=i+1;k<j;k+=2)
	{
		int lT=solve(s,i,k-1,true);
		int lF=solve(s,i,k-1,false);
		int rT=solve(s,k+1,j,true);
		int rF=solve(s,k+1,j,false);
		
		if(s[k]=='&')
		{
			if(isTrue==true)
			  ans=lT*rT;
			else
			  ans+=lF*rT+lT*rF+lF*rF;
		}
		else if(s[k]=='|')
		{
			if(isTrue==true)
			  ans+=lT*rT+lF*rT+lT*rF;
			else
			  ans+=lF*rF;
		}
		else if(s[k]=='^')
		{
			if(isTrue==true)
			  ans+=lF*rT+lT*rF;
			else
			  ans+=lF*rF+lT*rT;
		}
	}
	return ans;
}
int main()
{
    w(t)
    {
    	string s;
    	cin>>s;
        cout<<solve(s,0,s.length()-1,true);
    	
	}
	return 0;
}
