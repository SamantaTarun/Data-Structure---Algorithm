#include<bits/stdc++.h>
using namespace std;
#define N 10005
//int vis[N],from[N],color[N],till;
//vector<int>v;
//vector<int>graph[N];
vector<pair<int,int>>arr;
vector<set<int>>g;
vector<int>vis;
stack<int>recursionStack;
vector<bool>rsFlag;


//set<int>suspecious;
bool dfs(int u)
{
    vis[u]=true;
    recursionStack.push(u);
    rsFlag[u]=true;
    for(auto v:g[u])
    {
        if(!vis[v])
            if(dfs(v))
              return true;
        if(rsFlag[v])
        {
            recursionStack.push(v);
            return true;
        }

    }
    recursionStack.pop();
    rsFlag[u]=false;
    return false;
}

void visit_all()
{
    for(int u=1;u<=N;++u)
    {
        if(!vis[u])
        {
            if(dfs(u))
                break;
        }
    }
}
string findSuspiciousUserId(int n, vector<vector<int>>vect) {
    // Participant's code will go here
    string str;
    //suspecious.clear();
    g.resize(N+1);
    vis.resize(N+1);
    rsFlag.resize(N+1);

    for(int i=0;i<vect.size();i++)
    {
        for(int j=1;j<vect[i].size();j++)
        {
            arr.push_back(make_pair(vect[i][0],vect[i][j]));
        }
    }

    for(int i=0;i<arr.size();i++)
    {
       int t=arr[i].first;
       int b=arr[i].second;
       g[t].insert(b);
    }
    visit_all();
    vector<int>ans;
    int temp=recursionStack.top();
    while(!recursionStack.empty())
    {
        ans.push_back(recursionStack.top());
        recursionStack.pop();
        if(ans.back()==temp&&ans.size()!=1)
            break;
    }
    vector<int>::iterator it;/*

    */
    int cnt=0;
    for(int i=0;i<vect.size();i++)
    {
        int p=vect[i][0];
        cnt=0;
        for(int j=1;j<vect[i].size();j++)
        {
            //arr.push_back(make_pair(vect[i][0],vect[i][j]));
            if(binary_search(ans.begin(),ans.end(),vect[i][j]))
            {
                cnt++;
                if(cnt==2)
                {
                    ans.push_back(p);
                    break;
                }
            }
        }
    }
    for(int i=vect.size()-1;i>=0;i--)
    {
        int p=vect[i][0];
        cnt=0;
        for(int j=1;j<vect[i].size();j++)
        {
            //arr.push_back(make_pair(vect[i][0],vect[i][j]));
            if(binary_search(ans.begin(),ans.end(),vect[i][j]))
            {
                cnt++;
                if(cnt==2)
                {
                    ans.push_back(p);
                    break;
                }
            }
        }
    }

    set<int>res;
    for(auto i:ans)
    {
        res.insert(i);
    }
    set<int>::iterator it1;
    for(it1=res.begin();it1!=res.end();it1++)
    {
        //cout<<*it<<" ";
        //cout<<1<<" ";
        str+=to_string(*it1);
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
