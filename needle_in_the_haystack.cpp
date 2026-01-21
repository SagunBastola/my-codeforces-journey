#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    string tofind,to_arrange;
    cin>>tofind;
    cin>>to_arrange;
    map<int,int> m;
    map<int,int> remove;
    for(int i=0;i<to_arrange.size();i++)
    {
        m[to_arrange[i]-'a']++;
    }
    for(int i=0;i<tofind.size();i++)
    {
        remove[tofind[i]-'a']++;
        if(m[tofind[i]-'a']>0)
        {
            m[tofind[i]-'a']--;
        }else
        {
            cout<<"Impossible"<<endl;
            return;
        }
    }
    string sot="";

    sort(to_arrange.begin(),to_arrange.end());
    for(int i=0;i<to_arrange.size();i++)
    {
        if(remove[to_arrange[i]-'a']>0)
        {
            remove[to_arrange[i]-'a']=remove[to_arrange[i]-'a']-1;
        }
        else{
            sot+=to_arrange[i];
        }
    }
    string result = "";
    bool t = false;
    for(int i=0; i<sot.size(); i++) {
        if(!t && (tofind + sot[i] < sot[i] + tofind)) {
            result += tofind;
            t = true;
        }
        result += sot[i];
    }
    if(!t) {
        result += tofind;
    }

    cout << result << endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}