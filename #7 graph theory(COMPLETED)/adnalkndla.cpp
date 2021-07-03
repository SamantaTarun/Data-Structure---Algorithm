#include<bits/stdc++.h>
using namespace std;

#define eb emplace_back
#define mt make_tuple
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define pi pair <int,int>
#define vi vector <int>
#define vl vector <lli>
#define p(x) cout << #x << " is " << (x) << " on Line:" << __LINE__ << " \n";
#define pl(x) for(auto &y:x) cout << y << " "; cout << "\n";




set<int>suspeciou;


void dfs(int src, int parent, vector<int> &s, int vis[], vector <vi> &graph){
	vis[src] = 1;
	s.push_back(src);
	for(auto &x: graph[src]){
		if(vis[x] == 0){
			dfs(x,src,s,vis,graph);
		}
		else if(vis[x] == 1){
			if(x != parent){
				cout << "cycle \n";
				cout << x << " ";
				int pos = ((int)s.size())-1;
				while(pos >= 0 && s[pos] != x){
					cout << s[pos] << " ";
					--pos;
				}
				cout << "\n";
			}
		}
	}
	vis[src] = 2;
	s.pop_back();
}

string findSuspiciousUserId(int m, vector<vector<int>>vect) {
    // Participant's code will go here


    string str;
    vector<vi>graph(m,vi(0));
    for(int i=0;i<10001;i++)
        graph[i].clear();
    int k;
	for(int i=0;i<vect.size();i++)
    {
        k=vect[i][0];
        for(int j=1;j<vect[i].size();j++)
        {

             graph[k].push_back(vect[i][j]);
        }


    }
    int vis[10001];
    memset(vis,0,sizeof(vis));
    vector<int>s;
    for(int i=1;i<10001;i++)
    {
        if(graph[i].empty()==false)
        {
            if(vis[i]==0)
            {
                dfs(i,-1,s,vis,graph);
            }
        }
    }
    /*
    for(int i=1;i<=2;i++)
    {
        cout<<i<<"->";
        for(auto j:arr[i])
            cout<<j<<",";
    }
    */


    //cout<<suspecious.size()<<endl;


    set<int>::iterator it;

    //cout<<suspecious.size()<<endl;
    for(it=suspeciou.begin();it!=suspeciou.end();it++)
    {
        //cout<<*it<<" ";
        //cout<<1<<" ";
        str+=to_string(*it);
        str+=",";
    }
    str.pop_back();
    return str;
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

    int numOfQuestions = strtol(firstLine.c_str(), NULL, 10);;

    string questionAndAnswerStr;
    getline(cin, questionAndAnswerStr);

    vector<vector<int>> questionAndAnswerVecOfVec;
    vector<string> questionAndAnswerVecByComma = split(questionAndAnswerStr, ',');

    for (vector<string>::const_iterator i = questionAndAnswerVecByComma.begin(); i != questionAndAnswerVecByComma.end(); ++i) {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, ' ');
        questionAndAnswerVecOfVec.push_back(bankerPreferenceVecByAnd);
    }

    string result = findSuspiciousUserId(numOfQuestions, questionAndAnswerVecOfVec);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
