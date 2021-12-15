//Diameter of a Tree or length of the longest path

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
#define vii 			vector<pii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define INF				1000000000
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
vector<int>vect2;
/*
void compute(priority_queue<int,vector<int>>qp)
{
	int k=qp.size();
	int product=1;
	if(k>=3)
	{
       for(int i=0;i<3;i++)
	   {
		 product*=qp.top();
		 qp.pop();
	   }	
	}
	else
	{
		product=-1;
	}
	
	vect2.pb(product);
}
*/
vector<int>vect,vect1;

int isSorted()
{
    int flag=1;
    for(int i=0;i<vect.size()-1;i++)
	{

	      if(vect[i]==vect[i+1])
	      {
	      	if(vect[i]>0&&vect[i+1]>0)
	      	{
	      	  flag=0;
	          break;
			}
	         
	      }
	 }
   // cout<<flag<<endl;
   return flag;
}
void compute()
{
        int i=0;
		int j=1;
	    int n=vect.size();
		while(i<n-1&&j<n)
		{
			if(vect[i]==vect[j]&&vect[i]>0&&vect[j]>0)
			{
				vect[i]*=2;
				vect[j]=0;
				i=j;
				j++;
			}
			else if(vect[j]==0&&vect[i]!=0)
			{
				j++;
			}
			else
			{
				i++;
				j++;
			}
		}
	  
}

int32_t main()
{
	//s_t_s();
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);   
	
	w(t)
	{
		int n;
		cin>>n;
		vect.clear();
		for(int i=0;i<n;i++)
		{
			int m;
			cin>>m;
			vect.pb(m);
		}
		
	  compute();
	  
	  
	  int cnt=0;
	  
	  for(int i=0;i<n;i++)
	  {
		   if(vect[i]!=0)
		   {
		     vect1.pb(vect[i]);
		   	 cnt++;
		   }
		   
	   }
		for(int i=0;i<n-cnt;i++)
		{
			vect1.pb(0);
		}
		vect.clear();
		vect=vect1;
		vect1.clear();
		while(isSorted()==0)
	    {
	      compute();
	    }
		
		int cnt1=0;
	//	cout<<vect.size()<<" "<<cnt<<endl;
		for(int i=0;i<n;i++)
	    {
		   if(vect[i]!=0)
		   {
		     cout<<vect[i]<<" ";
		   	 cnt1++;
		   }
		   
	    }
		for(int i=0;i<n-cnt1;i++)
		{
			cout<<0<<" ";
		}
		cout<<endl;
	    
	}
	
	//cout<<endl;
	
	return 0;
}

