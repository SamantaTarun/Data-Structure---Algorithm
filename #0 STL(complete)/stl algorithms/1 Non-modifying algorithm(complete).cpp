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
// Non Modifying algorithm
//count,min,max,min_max,linear_seach,attribute

int32_t main()
{
	//s_t_s();
 	//FIO;
	
	vector<int>vect={9,60,90,8,45,87,90,69,69,55,7};
	
	vector<int>vect2={9,60,70,8,45,87};
	vector<int>::iterator itr,itr2;
	
	pair<vector<int>::iterator, vector<int>::iterator> pair_of_itr;
	
	
	//1. counting
	
	int n=count(vect.begin(),vect.end(),69);  //2
	int m=count_if(vect.begin(),vect.end(),[](int x){return x<10;}); //3
	
	cout<<"count: "<<n<<" "<<m<<endl;
	//2.Min and Max
	
	itr=max_element(vect.begin()+2,vect.end()); //90
	
	cout<<"max: "<<*itr<<endl;
	
	//It returns first max velue
	
	itr=max_element(vect.begin(),vect.end(),[](int x,int y) {return(x%10)<(y%10);}); //9
	
	cout<<"max: "<<*itr<<endl;
	//It returns minimum elements
	
	itr=min_element(vect.begin(),vect.end()); //7
	
	cout<<"Min: "<<*itr<<endl;
	pair_of_itr=minmax_element(vect.begin(),vect.end());
	
	cout<<"minmax: "<<*pair_of_itr.first<<" "<<*pair_of_itr.second<<endl;
	
	
	//3. Linear Seraching (if data is not sorted)
	
	// returns the first match
	
	itr=find(vect.begin(),vect.end(),55);
	
	cout<<"Linear search find: "<<*itr<<endl;
	
	itr=find_if(vect.begin(),vect.end(), [](int x){return x>80;});
	
	cout<<"Linear Search find_if: "<<*itr<<endl;
	
	itr=find_if_not(vect.begin(),vect.end(), [](int x) {return x>80;}); //find the first item that not bigger than 80
	
	cout<<"Linear Search find_if_not: "<<*itr<<endl;

	itr=search_n(vect.begin(),vect.end(),2,69); //consecutive 2 times of 69;
	
	cout<<"search_n: "<<*itr<<endl;
	
	
	//search subrange
	vector<int> sub={45,87,90};
	
	//if subrange matches with te data pattern
	
	//search first subrange
	itr=search(vect.begin(),vect.end(), sub.begin(),sub.end());
	
	cout<<"search subrange: "<<*itr<<endl;
	//search last subrange
	itr=find_end(vect.begin(),vect.end(),sub.begin(),sub.end());
	cout<<"find_end subrange: "<<*itr<<endl;
	
	//search any_of
	
	vector<int>items={87,69};
	
	itr=find_first_of(vect.begin(),vect.end(), items.begin(),items.end());
	
	cout<<"any_of: "<<*itr<<endl;
	
	
	//search Adjacent
	
	itr=adjacent_find(vect.begin(),vect.end());  //Find two adjacent items that are same
	
	cout<<"search_adjacent: "<<*itr<<endl;
	
	//4 Comparing ranges
	
	if(equal(vect.begin(),vect.end(),vect2.begin()))
	{
		cout<<"vect and vect2 are same.\n";
	}
	
	// is vect2 is a permutation of vect i.e vect2 is present on vect
	
	if(is_permutation(vect.begin(),vect.end(),vect2.begin()))
	{
		cout<<"vect and vect2 have same items, but in different order.\n";
	}
	
	
	pair_of_itr=mismatch(vect.begin(),vect.end(),vect2.begin());
	//find first difference
	//pair of itr.first is an iterator of vect
	//pair of itr.second is an iterator of vect2
	cout<<"mismatch: ";
	cout<<*pair_of_itr.first<<" "<<*pair_of_itr.second<<endl;
	
	//Lexographical comparison: One-by-one comparison with "less-than"
	// Here it return 1 because vect2 is lexographically lesser than vect
	bool k=lexicographical_compare(vect2.begin(),vect2.end(),vect.begin(),vect.end());
	// {1,2,3,5} < {1,2,4,5}
	//{1,2}  < {1,2,3}

	cout<<"is vect2 lexicographicallay lesser: "<<k<<endl;
	
	//5. Cheack Attribute
	
	bool s=is_sorted(vect.begin(),vect.end()); //check if vector is sorted
	(s)?cout<<"vect is sorted\n":cout<<"vect is not sorted\n";
	
	itr=is_sorted_until(vect.begin(),vect.end());
	
	//itr points to first place to where elements are no longer sorted
	
	itr=is_sorted_until(vect.begin(),vect.end());
	
	
	is_partitioned(vect.begin(),vect.end(), [](int x){return x>80;} );
	//check if vector is partioned accordding to the condition of (x>80)
	
	bool h=is_heap(vect.begin(), vect.end()); //check if vect is a max heap
	
	(h)?cout<<"vect is heap\n":cout<<"vect is not heap\n";
	
	itr=is_heap_until(vect.begin(),vect.end()); // Find the first place where it is no longer heap
	
	
	 //All,any,none
	 
	 bool tf=all_of(vect.begin(),vect.end(),[](int x){return x>80;});
	 // if all of vec is bigger than 80
	 (tf)?cout<<"all_of:yes \n":cout<<"all_of:No\n";
	 
	 bool af=any_of(vect.begin(),vect.end(),[](int x){return x>80;});
	 // if any of vec is bigger than 80
	 (af)?cout<<"any_of:yes \n":cout<<"all_of:No\n";
	 
	 bool nf=none_of(vect.begin(),vect.end(),[](int x){return x>80;});
	 // if none of vec is bigger than 80
	 
	 (nf)?cout<<"none_of:yes \n":cout<<"none_of:No\n";
	 
	 
	return 0;
}
