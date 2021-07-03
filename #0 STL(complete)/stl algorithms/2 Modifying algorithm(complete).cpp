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
/* Modifying algorithm
* value-change algorithm- Changes the element values

*copy,move,transform,swap,fill,replace,remove
*/


int32_t main()
{
	//s_t_s();
 	//FIO;
	vector<int>vect={9,60,70,8,45,87,90}; // 7 elements;
	
	vector<int>vect2={0,0,0,0,0,0,0,0,0,0,0};// 11 elements
	
	vector<int>::iterator itr,itr2;
	
	pair<vector<int>::iterator, vector<int>::iterator> pair_of_itr;
	
	 //1. copy
	 copy(vect.begin(),vect.end(),  //Source
	      vect2.begin());  //Destination
	      
	      
	 copy_if(vect.begin(),vect.end(),//source
	        vect2.begin(),   //Destination
			[](int x){return x>80;}); //Condition
	//vect2: {87,90,0,0,0,0,0,0,0,0,0}
	
	 copy_n(vect.begin(),4,vect2.begin()); /// copy 4 items
	 
	 //vect2: {9,60,70,8,0,0,0,0,0,0,0}
	 
	 copy_backward(vect.begin(),vect.end(), //source // for back to the front
	               vect2.end());  //Destination
	 //vect2:{0,0,0,0,9,60,70,8,45,87,90}
	 
	 //2. Move: Move items from one place to another
	 
	 vector<string>vect3={"apple","orange","pear","grape"}; //4 items
	 vector<string>vect4={"","","","","",""}; //6 items
	 
	 move(vect3.begin(),vect3.end(),vect4.begin());
	 //vect3:{"","","",""} //Undefined
	 //vect4: {"apple","orange","pear","grape","",""};
	 
	 //if move semantics are defined for the elemnts type, elements are moved over,
	 //otherwise they are copied over with copy constructor, just like copy().
	 
	 move_backward(vect3.begin(),vect3.end(),vect4.begin());
	 
	 //vect4: {"","","apple","orange","pear","grape"};
	 
	 //3. Transform : performs operations on source data and saves the result into destination
	 
	 
	vector<int>vect={9,60,70,8,45,87,90}; // 7 elements;
	vector<int>vect2={9,60,70,8,45,87,90}; 
	vector<int>vect3={0,0,0,0,0,0,0,0,0,0,0};// 11 elements;
	
	 transform(vect.begin(),vect.end(),  //Source
	            vect3.begin(),  //Destination
				[] (int x) {return x-1;}); //operation
				
	  transform(vect.begin(),vect.end(),  //Source #1
	            vect2.begin(),  //Source #2
	            vect3.begin(),  //Destination
				[] (int x,int y) {return x+y;}); //operation
				
				//vect3[0]=vect[0]+vect2[0]
				//vect3[1]=vect[1]+vect2[1]
				//......
				
	//4. Swap- two way copying
	
	swap_ranges(vect.begin(),vect.end(),vect2.begin()) ;
	
	//5. Fill
	vector<int>vec={0,0,0,0,0};
	
	fill(vec.begin(),vec.end(),9); //vec: {9,9,9,9,9}
	fill_n(vec.begin(),3,9);  //vect: {9,9,9,0,0}
	
	
	generate(vec.begin(),vec.end(),rand); //random values
	
	generate_n(ve.begin(), 3, rand);   
	
	//6. Replace 
	
	// replace all 6 with 9
	
	replace(vec.begin(),vec.end(),  //Data Range
	        6,                      //Old value 
			9);                      //new vaue
	
	replace_if(vec.begin(),vec.end(),  //Data Range
	            [](int x){return x>80;}, //old value
				9);                     //new value 
	 
	
	//does both replace and copyiing
	replace_copy(vec.begin(),vec.end(),  //Source
	vec2.begin(),  //Destination
	6,             //Old value 
	9);            //new value
	  
	  
	//7. Remove 
	remove(vec.begin(),vec.end(), 3);  //Remove all 3's
	
	remove_if(vec.begin(),vec.end(), [](int x){return x>80;}); 
	//remove items bigger than 80
	
	
	remove_copy(vec.begin(),vec.end,   //source
	vect2.begin(),            //Destination 
	6);                        //condition 
	
	//Remove all 6's , and copy the remain items to vect2
	
	//VECTOR MUST BE SORTED
	unique(vec.begin(),vec.end()); //Remove consecutive equal elements
	
	unique(vec.begin(),vec.end(), less<int>()); 
	//Remove elemets whose previous element is less than itself
	
	unique_copy(vec.begin(),vec.end(),vec2.begin());
	//Remove consecutive equal elements , then copy the uniquified items to vector  

	
	
	
	

	return 0;
}
