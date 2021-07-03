//Bishu & his girlfriend

#include<bits/stdc++.h>
//#define<windows.h>
//prime fctorization  
//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second

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
#define inf				1000000000
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
vector<string>vect;

void NumbertoCharacter(int n) 
{ 
    if(n==100)
    {
    	vect.pb("hundred");
    	return;
	}
	else if(n==0)
	{
		vect.pb("zero");
		return;
	}
      
    int k=n;
       
    int rev = 0, r = 0; 
  
    // To calculate the reverse of the number 
    while (n > 0) { 
  
        // The remainder will give the last digit of the number 
        r = n % 10; 
        rev = rev * 10 + r; 
        n = n / 10; 
    } 
  
    while (rev > 0) { 
        // Extract the first digit of the reversed number 
        r = rev % 10; 
  
        // Match it with switch case 
        switch (r) { 
       
        case 1: 
            vect.pb("one "); 
            break; 
        case 2: 
            vect.pb("two ");
            break; 
        case 3: 
            vect.pb("three ");
            break; 
        case 4: 
            vect.pb("four ");
            break; 
        case 5: 
            vect.pb("five ");
            break; 
        case 6: 
            vect.pb("six ");
            break; 
        case 7: 
            vect.pb("seven "); 
            break; 
        case 8: 
            vect.pb("eight "); 
            break; 
        case 9: 
            vect.pb("nine "); 
            break;
        default:
        	vect.pb("greater 100");
        
        } 
  
        // Divide the number by 10 to get the next number 
        rev = rev / 10; 
    } 
    
    if(k%10==0&&k!=0&&k!=100)
    {
    	vect.pb("zero");
	}
    
} 

int vowel(string s)
{
	int len=s.length();
	int cnt=0;
	for(int j=0;j<len;j++)
	{
		if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
		{
			cnt++;
		}
	}
	return cnt;
}
int32_t main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    
    vect.clear();
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	NumbertoCharacter(arr[i]);
	}
	string str="";
	for(int i=0;i<int(vect.size());i++)
	{
		str+=vect[i];
	}
	cout<<str<<endl;
	int cnt=vowel(str);
	
	//cout<<cnt;
	//cout<<cnt;
	int v_cnt=0;
	int count = 0; // Initialize result 
  
    // Consider all possible pairs and check their sums 
    for (int i=0; i<n-1; i++) 
    {
    	for (int j=i; j<n; j++) 
    	{
    		if (arr[i]+arr[j]==cnt) 
                v_cnt++; 
		}
            
	}
	
	vect.clear();
	//cout<<v_cnt<<endl;
    NumbertoCharacter(v_cnt);
    
    
    if(v_cnt==0)
    {
    	cout<<"zero ";
	}
	else
	{
		for(auto i:vect)
		{
			cout<<i<<" ";
		}
	}

	
	return 0;
}

