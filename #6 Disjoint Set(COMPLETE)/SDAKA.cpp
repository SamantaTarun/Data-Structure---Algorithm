#include<bits/stdc++.h>

using namespace std;

int par[10007];
int find(int a)
{
	if(par[a]==-1)
	{
		return a;
	}
	return par[a]=find(par[a]);
}

void merge(int a,int b)
{
	//a=find(a);
	//b=find(b);

	//if(a==b) return;
	par[a]=b;
	par[b]=a;
	//par[b]=a;
	//par[b]=a;


}

string findSuspiciousUserId(int n, vector<vector<int>>vect) {
    // Participant's code will go here
    memset(par,-1,sizeof(par));
    string str;
    int cnt=0;
    set<int>suspecious;
    vector<pair<int,int>>b;
    b.clear();
    vector<int>p[100005];
    int max_user=INT_MIN;
    //p.clear();

    for(int i=0;i<100005;i++)
    {

        p[i].clear();

    }

    int k=0;
    for(int i=0;i<vect.size();i++)
    {
        //cout<<i+1<<"->";

           // cout<<vect[i][j]<<" ";
           if(vect[i].size()==2)
           {
               //cout<<"1"<<" ";
               //b[k].push_back(make_pair(vect[i][0]),vect[i][1]);

               //b[k].first=vect[i][0];
               //b[k].second=vect[i][1];
               merge(vect[i][0],vect[i][1]);
               //b.push_back(make_pair(vect[i][0],vect[i][1]));
               //cout<<1<<" ";
               //k++;

           }
           else if(vect[i].size()>2)
           {
               //cout<<1<<endl;
               cnt=0;
               for(int j=1;j<vect[i].size();j++)
               {
                   //cout<<2<<" ";

                   // p[vect[i][0]].push_back(vect[i][j]);
                   if(par[vect[i][j]]!=-1)
                   {
                       //cout<<1<<endl;
                       cnt++;
                       if(cnt>=2)
                       {
                           //cout<<vect[i][0]<<" "<<vect[i][j]<<endl;
                           merge(vect[i][0],par[vect[i][j]]);
                           break;
                       }
                   }
               }
           }

        //cout<<endl;
    }
    for(int i=vect.size()-1;i>=0;i--)
    {
        //cout<<i+1<<"->";

           // cout<<vect[i][j]<<" ";
           if(vect[i].size()>2)
           {
               //cout<<1<<endl;
               cnt=0;
               for(int j=1;j<vect[i].size();j++)
               {
                   //cout<<2<<" ";

                   // p[vect[i][0]].push_back(vect[i][j]);
                   if(par[vect[i][j]]!=-1)
                   {
                       //cout<<1<<endl;
                       cnt++;
                       if(cnt>=2)
                       {
                           //cout<<vect[i][0]<<" "<<vect[i][j]<<endl;
                           merge(vect[i][0],par[vect[i][j]]);
                           break;
                       }
                   }
               }
           }

        //cout<<endl;
    }
    /*
    for(int i=1;i<=10;i++)
    {
        cout<<par[i]<<" ";
    }
    */

    /*
    sort(b.begin(),b.end());
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
           if(i!=j)
           { //
                if((b[i].first==b[j].second)&&(b[i].second==b[j].first))
               {
                //
                suspecious.insert(b[i].first);
                suspecious.insert(b[i].second);
                //cout<<3<<" ";

               }
           }
        }
    }

    //sort(suspecious.begin(),suspecious.end());
    int cnt=0;
    for(int i=1;i<=max_user;i++)
    {
        if(p[i].empty()==false)
        {
            cnt=0;
            for(auto j:p[i])
            {
                if(binary_search(suspecious.begin(),suspecious.end(),j))
                {
                    cnt++;
                    if(cnt==2)
                    {
                        suspecious.insert(i);
                        break;
                    }

                }
            }
        }
    }
    cnt=0;
    for(int i=max_user;i>=1;i--)
    {
        if(p[i].empty()==false)
        {
            cnt=0;
            for(auto j:p[i])
            {
                if(binary_search(suspecious.begin(),suspecious.end(),j))
                {
                    cnt++;
                    if(cnt==2)
                    {
                        suspecious.insert(i);
                        break;
                    }

                }
            }
        }
    }
    set<int>::iterator it;

    //cout<<suspecious.size()<<endl;
    */

    for(int i=1;i<=10001;i++)
    {
        //cout<<*it<<" ";
        if(par[i]!=-1)
        {
            str+=to_string(i);
            str+=",";
        }
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
