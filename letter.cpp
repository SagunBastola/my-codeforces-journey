#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    string word;
    vector<int> v;

    for(int i=0;i<t.size();i++)
    {
        if(t[i] != ' ')
        {
            v.push_back(t[i] - 'a');
        }
    }
    unordered_map<int,int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]-'a']++;
    }
    for(int i=0;i<v.size();i++)
    {
        if(m[v[i]] <= 0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        m[v[i]]=m[v[i]]-1;
    }
    cout<<"YES"<<endl;
}