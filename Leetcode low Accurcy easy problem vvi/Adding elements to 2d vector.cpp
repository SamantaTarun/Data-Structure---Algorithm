Adding elements to a 2-D vector
To add elements at the end of a two-dimensional vector, we use 'push_back()' function.

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
 
    // Initializing the 2-D vector
    vector<vector<int>> v;
 
    v.push_back({1, 0, 1});
    v.push_back({0, 1});
    v.push_back({1, 0, 1});
 
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }                      
}
