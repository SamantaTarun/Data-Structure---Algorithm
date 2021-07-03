#include<bits/stdc++.h>

using namespace std;


vector<pair<int,int>>arr;


set<int>suspecious;


string findSuspiciousUserId(int n, vector<vector<int>>vect) {
    // Participant's code will go here
    string str;
    suspecious.clear();
    for(int i=0;i<vect.size();i++)
    {
        for(int j=1;j<vect[i].size();j++)
        {
            arr.push_back(make_pair(vect[i][0],vect[i][j]));
        }
    }

    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(i!=j)
            {
                if((arr[i].first==arr[j].second)&&(arr[i].second==arr[j].first))
                {
                    suspecious.insert(arr[i].first);
                    suspecious.insert(arr[i].second);
                }
            }
        }
    }
    set<int>::iterator it;
    for(it=suspecious.begin();it!=suspecious.end();it++)
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
