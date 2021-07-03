#include<bits/stdc++.h>
using namespace std;

int main()
{
	/* Order-changing algorithms:
	*reverse,rotate,permute,shuffle
	
	*/
	
	vector<int> vect={9,60,70,8,45,87,90};// 7 items
	vector<int> vect2={0,0,0,0,0,0,0};
	
	//1. Reverse
	reverse(vect.begin()+1,vect.end()-1);
	// vec: {9,87,45,8,70,60,90};
	
	reverse_copy(vect.begin()+1, vect.end()-1,vect2.begin());
	// vec2: {87,45,8,70,60,0,0};
	
	
	//2.Rotate
	
	rotate(vect.begin(),vect.begin()+3,vect.end());
	
	//vect:{8,45,87,90,9,60,70};
	
	rotate_copy(vevt.begin(),vect.begin()+3,vect.end(),  //Source
	vect2.begin());  //Destination
	
	//Copy vect to vect2 in rotated order
	//vect is unchanged
	
	//3. Permute
	next_permutation(vect.begin(),vect.end());
	//Lexicographically next greater permutation
	
	prev_permuttaion(vect.begin(),vect.end());
	
	//Lexicographically next smaller permutations
	
	//{1,2,3,5} < {1,2,4,4}
	//{1,2}  < {1,2,3}
	
	//Sorted in ascending order: {8,9,45,70,87,90}
	//	
	//						- Lexicographically smallest
	
	
	//Sorted in decending order: {90,87,70,60,45,9,8}
	//	
	//						- Lexicographically greatest
	
	
	
	//4.Shuffle
	
	//- Rearranges the elements randomly
	
	//swap each elements with a randomly selected element
	
	random_shuffle(vect.begin(),vect.end());
	random_shuffle(vect.begin(), vect.end(),rand);
	
	
	//C++ 11
	
	shuffle(vec.begin(), vec.end(),default_random_engine());
	
	//Better random number generator
	
    return 0;
		
}
