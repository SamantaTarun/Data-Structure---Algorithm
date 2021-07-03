//SUBLIME TEXT
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define int     		long long
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
#define	FIO				ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
 	//FIO;
	
	
	//Empty Map container
	map<int,int> gquiz1;
	
	//insert element in random order
	
	gquiz1.insert(pair<int,int>(1,40));
	gquiz1.insert(pair<int,int>(2,30));
	gquiz1.insert(pair<int,int>(3,60));
	gquiz1.insert(pair<int,int>(4,20));
	gquiz1.insert(pair<int,int>(5,50));
	gquiz1.insert(pair<int,int>(7,10));
	
	
	//Printing the map gquiz1
	map<int,int>::iterator itr;
	cout<<"\nThe map Gquiz1 is: \n";
	cout<<"\tKEY\tElement\n";
	for(itr=gquiz1.begin();itr!=gquiz1.end();itr++)
	{
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<'\n';
	}
	
	cout<<endl;
	
	
	//Assigning the elements from gquiz1 to gquiz2
	map<int,int> gquiz2(gquiz1.begin(),gquiz1.end());
	
	//print all elements of gquiz2
	
	map<int,int>::iterator itr1;
	cout<<"\nThe map Gquiz1 is: \n";
	cout<<"\tKEY\tElement\n";
	for(itr1=gquiz2.begin();itr1!=gquiz2.end();itr1++)
	{
		cout<<"\t"<<itr1->first<<"\t"<<itr1->second<<'\n';
	}
	
	cout<<endl;
	
	//Remove all elements upto elements with key=3 in gquiz2
	
	cout<<"map after deleting the elements: \n";
	
	gquiz2.erase(gquiz2.begin(),gquiz2.find(3));
	cout<<"\tKEY\tElement\n";
	for(itr1=gquiz2.begin();itr1!=gquiz2.end();itr1++)
	{
		cout<<"\t"<<itr1->first<<"\t"<<itr1->second<<'\n';
	}
	
	
	
	return 0;
}
