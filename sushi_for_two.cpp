#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n; 
    int tuna=0;
    int eel=0;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector<int> ans;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(vec[i] == vec[i-1])
        {
            cnt++;
        }
        else 
        {
            ans.push_back(cnt);
            cnt=1;
        }
    }
    ans.push_back(cnt);
    int result=0;
    for(int i=1;i<ans.size();i++)
    {
        result=max(result,min(ans[i],ans[i-1]));
    }
    cout<<result*2;
    
}