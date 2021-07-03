//SUBLIME TEXT
#include<bits/stdc++.h>
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
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define inf				10000000000007
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

int even[100001];
int odd[100001];
int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int n;
     memset(even,0,sizeof(even));
     memset(odd,0,sizeof(odd));
     cin>>n;
     vi vect(n);
     vi vect1(n);
     vect1.clear();
     for(int i=0;i<n;i++)
     {
     	int k;
     	cin>>k;
     	vect.clear();
     	int rem=0;
     	while(k>0)
     	{
     		rem=k%10;
     		k/=10;
     		vect.pb(rem);
     		
     		
		}
		
		int min=*min_element(vect.begin(),vect.end());
		int max=*max_element(vect.begin(),vect.end());
		
		vect.clear();
		int num=(max*11)+(min*7);
		//cout<<num<<" ";
		if(num>=100)
		{
			int rem1=num%10;
			num/=10;
			int rem2=num%10;
			
			vect1.pb(rem2*10+rem1);
			
		}
		else
		{
			vect1.pb(num);
		}
	}
	 vi vect2(n);

	 //storing the MSB of all numbers
	 vect2.clear();
	 for(int i=0;i<(int)vect1.size();i++)
	 {
	     vect2.pb(vect1[i]/10);
	 			 
	 }
	 //Even
	 for(int i=2;i<n;i+=2)
	 {
	    for(int j=i+2;j<=n;j+=2)
	    {
	    	if(vect2[i-1]==vect2[j-1])
	    	{
	    	   even[vect2[i-1]]++;	
			}
		}
     }
     
     //Odd
     
     for(int i=1;i<n;i+=2)
	 {
	    for(int j=i+2;j<=n;j+=2)
	    {
	    	if(vect2[i-1]==vect2[j-1])
	    	{
	    	   odd[vect2[i-1]]++;	
			}
		}
     }
     int cnt=0;
     
     for(int i=1;i<=n;i++)
     {
     	int k=max(even[i],odd[i]);
     	if(k>=2)
     	{
     	   cnt+=2;	
		}
		else if(k==1)
		{
		   cnt++;
		}
		
	 }
     cout<<cnt;
     
	return 0;
}
