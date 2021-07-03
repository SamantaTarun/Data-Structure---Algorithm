#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Sorted Data Algorithms
	// Binary_search, merge, set_operations


	vector<int> vec={8,9,9,9,45,87,90};
	
	
	// 1. Binary Search
	//Search Elements
	
	bool found=binary_seqrch(vec.begin(),vec.end(),9); // check if 9 is in vec ot not
	
	
	vector<int> s={9,45,66};
	bool found=includes(vec.begin(), vec.end(), // Ramge 1
						s.begin(),s.end());  //Range 2
						
    // Return true if all elements of s is included in vec
    // Both vec and s must be sorted
    
    
    //Search position
    
    itr=lower_bound(vec.begin(),vec.end(),9);  //vec[1]
    
    itr=upper_bound(vec.begin(),vec.end(),9);  //vec[4]
    
    
    pair_of_itr=equal_range(vec.begin(),vec.end(),9);
    
    //returns boyh first and last position
    
    // 2. Merge 
    vector<int>vec={8,9,9,10};
    vector<int>vec2={7,9,10};
    merge(vec.begin(),vec.end(),  //input range #1
		  vec2.begin(),vec2.end(), //input range #2
		  vec_out.begin());     //output
		  
		  
		  
    // Both vec and vec2 must be sorted
    // Nothing is dropped, all duplicates are kept.
    
    // vec_out: {7,8,9,9,10,10}
    
    vector<int> vec={1,2,3,4,1,2,3,4,5}; // Both part of vec are already sorted
    inplace_merge(vec.begin(),vec.begin()+4,vec.end());
    
    //vec: {1,1,2,2,3,3,4,4,5} -One step of merge sort
    
    
    
    // 3. Set Operations
    
    // Both vec and vec3 should be sorted
    // The resultant data is also sorted
    
    vector<int> vec={8,9,9,10};
    vector<int> vec2={7,9,10};
    vector<int> vec_out(5);
    
    //set_union
    set_union(vec.begin(),vec.end(), // input #1
			  vec2.begin(),vec2.end(),  //input #2
			  vec_out.begin());       //output
			  
			  
	//set_intersection
	
	set_intersection(vec.begin(),vec.end(),
					vec2.begin(),vec2.end(),  //Same as above
					vec_out.begin());
					
	// set difference 
	
	set_difference(vec.begin(), vec.end(),
					vec2.begin(),vec2.end(), // same as above
					vec_out.begin());
					
	// symmetric difference
	
	set_symmetric_difference(vec.begin(), vec.end(),
					vec2.begin(),vec2.end(), // same as above
					vec_out.begin());
					
					
					
	// 5. numeric algorithms
	// accumulate,inner product,partial sum,adjacent difference
	
	//1. Accumulate
	int x=accumulate(vec.begin(),vec.end(),10);
	
	//10 + vec[0] + vec[1] + vec[2] +.....
	
	int x=accumulate(vec.begin(),vec.end(),10,multiplies<int>());
	
    //10 * vec[0] * vec[1] * vec[2] * ..............
    
    
    //inner product
    
    vector<int>vec={9,60,70,8,45,87,90};
    
    int x= inner_product(vec.begin(), vec.begin()+3,  //Range 1
						vec.end()-3,  //Range 2
						10);  //Init value
						
	// 10 + vec[0]*vec[4] + vec[1]*vec[5] +vec[2]*vec[6]
	
	
	int x=inner_product(vec.begin(), vec.begin()+3,  // Range #1
						vec.end()-3,				// Range #2
						10,							// init value
						multiplies<int>(),
						plus<int>());
	
	// 10 + (vec[0]*vec[4] + vec[1]*vec[5] +vec[2]*vec[6])
	
	
	//partial_sum
	
	partial_sum=(vec.begin(),vec.end(),vec2.begin());  // store result in vec2
	
	//vec2[0]=vec[0]
	//vec2[1]=vec[0]+vec[1];
	//vec2[2]=vec[0]+vec[1]+vec[2];
	//.........
	
	partial_sum(vec.begin(),vec.end(),vec2.begin(), multiplies<int>());
	
	
	// Adjacent differenece
	adjacent_difference(vec.begin(),vec.end(),vec2.begin());  // store result in vec2
	//vec2[0]=vec[0]
	//vec2[1]=vec[1]-vec[0];
	//vec2[2]=vec[2]-vec[1];
	//vec2[3]=vec[3]-vec[2];
	//.........
			
			
		
	 return 0;
	
		
}
