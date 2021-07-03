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
//Derangment

int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int N;
     
     cin>>N;
     
     int T;
     cin>>T;
     
     int steps[N][T];
     vector<int>Winner_list(N);
     Winner_list.clear();
     for(int i=0;i<N;i++)
     {
     	Winner_list.pb(0);
	 }
     
     
     int Sum_list[N];
     memset(Sum_list,0,sizeof(Sum_list));
     
     for(int k=0;k<N;k++)
     {
     	for(int j=0;j<T+1;j++)
     	{
     	   cin>>steps[k][j];	
		}
	 
     }
     
     for(int second=2;second<=T;second++)
	 {
	   for(int pn=0;pn<N;pn++)
	   { 
		  Sum_list[pn]+=(steps[pn][second-2]+steps[pn][second-1])*steps[pn][T];
	   }
	   
	   int Max=INT_MIN;
	   
	   for(int i=0;i<N;i++)
	   {
	   	  if(Max<=Sum_list[i])
	   	     Max=Sum_list[i];
	   }
	   int count=0;
	   
	   for(int i=0;i<N;i++)
	   {
	   	  if(Sum_list[i]==Max)
	   	    count++;
	   }
	   
	   int idx;
	   for(idx=0;idx<N;idx++)
	   {
	   	  if(Sum_list[idx]==Max)
	   	     break;
		}
		
		
	   if(count>1)
	   {
	   	  for(int x=0;x<N;x++)
	   	  {
	   	     if(Sum_list[x]==Max)
				Winner_list[x]+=1;	
		  }
		}
		else
		{
		  Winner_list[idx]+=1;	
		}	
	  }
	  for(int i=0;i<N;i++)
	  {
	  	cout<<Winner_list[i]<<" ";
	  }
	  cout<<endl;
	  int max=INT_MIN;
	  for(int i=0;i<N;i++)
	  {
	  	if(max<Winner_list[i])
	  	    max=Winner_list[i];
	  } 
	  cout<<lower_bound(Winner_list.begin(),Winner_list.end(),max)-Winner_list.begin()+1;
     
     
  return 0;
}
