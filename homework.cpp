#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s;
    cin>>s;
    int a;
    cin>>a;
    unordered_map<char,int> map1;
    for(int i=0;i<s.size();i++)
    {
        map1[s[i]]++;
    }
    vector<pair<int,char>> vec;
    for(auto& k : map1)
    {
        vec.push_back({k.second,k.first});
    }
    sort(vec.begin(),vec.end());
    unordered_set<char> st;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i].first <= a)
        {
            st.insert(vec[i].second);
            a=a-vec[i].first;
        }
    }
    cout<<vec.size()-st.size()<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(st.find(s[i]) != st.end())
        {
            continue;
        }
        cout<<s[i];
    }
}