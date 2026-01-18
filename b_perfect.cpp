#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int,int>> vec;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    vector<pair<int,int>> v=vec;
    sort(vec.begin(),vec.end());
    unordered_set<int> answer;
    for(int i=0;i<k;i++)
    {
        int j=i;
        int count=0;
        while(j<k && vec[i].first == vec[j].first)
        {
            count++;
            j++;
        }
        if(count == m)
        {  
            answer.insert(vec[i].first);
        }
        i=j;
    }
    unordered_set<int> s;
    for(int i=k-1;i>=0;i--)
    {
        if(answer.find(vec[i].first) != answer.end() && s.find(vec[i].first) == s.end())
        {
            cout<<vec[i].first<<" ";
            s.insert(vec[i].first);
        }
    }
    cout<<endl;
}