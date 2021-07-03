#include <bits/stdc++.h>

using namespace std;
vector<int>arr[100];
int visited[100];
int dist[100];
void BFS(int src)
{
	queue<int> q;
	q.push(src);
	visited[src]=1;
	dist[src]=0;

	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child: arr[curr])
		if(visited[child]==0)
		{
			q.push(child);
			dist[child]=dist[curr]+1;
			visited[child]=1;
		}
	}
}

int calculateMinimumSession(int n, int m, vector<vector<int>> banker, vector<vector<int>> participant) {
    // Participant's code will go here
    int in[n+m+1];
    int out[n+m+1];
    memset(in,0,sizeof(in));
    vector<int>b[n+1];
    vector<int>p[m+1];
    b[0].push_back(0);
    p[0].push_back(0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<banker[i].size();j++)
            b[i+1].push_back(banker[i][j]+n);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<participant[i].size();j++)
            p[i+1].push_back(participant[i][j]);
    }
    /*
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"->";
      for(auto j:b[i])
        cout<<j<<" ";
      cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        cout<<i<<"->";
      for(auto j:p[i])
        cout<<j<<" ";
      cout<<endl;
    }


    cout<<endl;
    */
     set<pair<int,int>>s;
     set<pair<int,int>>::iterator itr;
     s.insert(make_pair(0,0));
    //Reversing the second vector element
    for(int i=1;i<=n;i++)
    {
        for(auto j:b[i])
        {
            //arr[i].push_back(j);
            //in[i]++;
            //in[j]++;
            s.insert(make_pair(i,j));


        }
    }
    for(int j=1;j<=m;j++)
    {
        for(auto k:p[j])
        {
            //arr[j+n].push_back(k);
            //in[j+n]++;
            //in[k]++;
            //mp[k]=j+n;
            s.insert(make_pair(k,j+n));
        }
    }
    for(itr=s.begin();itr!=s.end();itr++)
    {
        in[itr->first]++;
        in[itr->second]++;
    }
     /*
    for(int i=1;i<=n+m;i++)
    {
        cout<<in[i]<<" ";
    }
    */
    cout<<endl;
    int MAX=INT_MIN;
    for(int i=1;i<=n+m;i++)
    {
        if(in[i]>MAX)
            MAX=in[i];
    }


    /*
    cout<<endl;
    for(int i=1;i<=m+n;i++)
    {
        cout<<i<<"->";
        for(auto j:arr[i])
            cout<<j<<",";
        cout<<endl;
    }

   /*
   memset(visited,0,sizeof(visited));
   for(int i=0;i<=n+m;i++)
   {
       dist[i]=0;
   }
   BFS(1);

   int MAX=INT_MIN;
   for(int i=1;i<=n+m;i++)
   {
       if(dist[i]>MAX)
        MAX=dist[i];
   }
   //cout<<MAX<<endl;
  */

    return MAX;

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
    int numOfBankers, numOfParticipants;
    vector<vector<int>> bankersPreferences, participantsPreferences;

    cin >> numOfBankers;

    string bankersPreferencesStr;
    cin >> bankersPreferencesStr;
    vector<string> bankersPreferencesVecByComma = split(bankersPreferencesStr, ',');

    for (vector<string>::const_iterator i = bankersPreferencesVecByComma.begin(); i != bankersPreferencesVecByComma.end(); ++i) {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, '&');
        bankersPreferences.push_back(bankerPreferenceVecByAnd);
    }

    string participantsPreferencesStr;
    cin >> numOfParticipants;
    cin >> participantsPreferencesStr;
    vector<string> participantsPreferencesVecByComma = split(participantsPreferencesStr, ',');

    for (vector<string>::const_iterator i = participantsPreferencesVecByComma.begin(); i != participantsPreferencesVecByComma.end(); ++i) {
        vector<int> participantPreferenceVecByAnd = splitStringToInt(*i, '&');
        participantsPreferences.push_back(participantPreferenceVecByAnd);
    }

    int result = calculateMinimumSession(numOfBankers, numOfParticipants, bankersPreferences, participantsPreferences);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
