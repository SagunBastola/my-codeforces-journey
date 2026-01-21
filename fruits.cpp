#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> vec(n);
    for(int& x : vec)
    {
        cin>>x;
    }
    vector<string> fruit(m);
    for(string& a : fruit)
    {
        cin>>a;
    }
    sort(fruit.begin(),fruit.end());
    vector<int> f;
    for(int i=0;i<m;i++)
    {
        int cnt=0;
        int j=i;
        while(fruit[i] == fruit[j])
        {
            cnt++;
            j++;
        }
        f.push_back(cnt);
        i=j-1;
    }
    sort(f.rbegin(),f.rend());
    sort(vec.begin(),vec.end());
    int mil_cost=0;
    int stidx=0;
    int max_cost=0;
    for(int i=0;i<f.size();i++)
    {
        mil_cost=f[i]*vec[stidx]+mil_cost;
        stidx++;
    }
    stidx=n-1;
    for(int i=0;i<f.size();i++)
    {
        max_cost=f[i]*vec[stidx]+max_cost;
        stidx--;
    }
    cout<<mil_cost<<" "<<max_cost<<endl;
}