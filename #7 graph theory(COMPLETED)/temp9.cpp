#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
string organizingContainers(vector< vector<int> > M) {
// Complete the organizingContainers function .
    string str;
    long long int matrix[M.size()][M.size()],sum=0,cnt=0;
    memset(matrix,0,sizeof(matrix));
    for(long long int i=0;i<(long long)M.size();i++)
    {
        for(long long int j=0;j<(long long)M[i].size();j++)
        {
            matrix[i][i]+=M[j][i];
        }
    }
    /*
    for(int i=0;i<M.size();i++)
    {
        for(int j=0;j<M.size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    long long int j=0;
    for(long long int i=0;i<(long long)M.size();i++)
    {
        sum=0;
        for(j=0;j<(long long)M[i].size();j++)
        {
            sum+=M[i][j];

        }
        sum==matrix[i][i];
        if(abs(sum-matrix[i][i])<1e-9)
        {
            //cout<<1<<endl;
            cnt++;
        }
    }
    if((int)cnt==M.size())
    {
        str+="Possible";

    }
    else
    {
        str+="Impossible";

    }
    //str.pop_back();
    //cout<<str<<endl;
    return str;


}

int main(){
    int q;
    cin >> q;
    string answer ="";
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
           }
        }

		string result=organizingContainers(M);
        if (answer =="")
            answer = result;
        else
            answer = answer + "," + result;
    }

    // Do not remove below line
    cout << answer << endl;
    // Do not print anything after this line

    return 0;
}
