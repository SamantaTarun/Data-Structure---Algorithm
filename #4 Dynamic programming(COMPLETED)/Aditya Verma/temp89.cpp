#include <bits/stdc++.h>

using namespace std;
/*
int countNumberOfWays(int numOfUnits, int numOfCoinTypes, vector<int> coins) {
    // Participant's code will go here
    return -1;
}
*/
long long int countNumberOfWays(int W,int n,vector<int>coins)
{
	int dp[n+1][W+1];

	//base case
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0&&j==0)
			{
				dp[i][j]=1;
			}
			else if(j!=0)
			{
				dp[i][j]=0;
			}
			else if(i!=0)
			{
				dp[i][j]=1;
			}
		}
	}

	//recursive case
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
				if(coins[i-1]<=j)
  				{
					dp[i][j]=dp[i][j-coins[i-1]] + dp[i-1][j];
				}
				else if(coins[i-1]>j)
				{
					dp[i][j]=dp[i-1][j];
				}

		}
	}

   return(dp[n][W]);
}
vector<string> split(const string& str, char delim) {
    vector<string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }
    return strings;
}

vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}

void printVector(vector<int> vec) {
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

void printVector(vector<string> vec) {
    for (vector<string>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main() {
    string firstLine;
    getline(cin, firstLine);

    vector<int> firstLineVec = splitStringToInt(firstLine, ' ');
    int numOfUnits = firstLineVec[0];
    int numOfCoinTypes = firstLineVec[1];

    string coins;
    getline(cin, coins);

    vector<int> coinsVec = splitStringToInt(coins, ' ');

    long long result = countNumberOfWays(numOfUnits, numOfCoinTypes, coinsVec);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
