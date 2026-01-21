#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string n;
    string sol;
    cin>>n>>sol;
    vector<int> v;
    int temp=0;
    sort(n.begin(),n.end());
    if(n[0] == '0')
    {
        for(int j=1;j<n.size();j++)
        {
            if(n[j] == '0')
            {
                continue;
            }
            swap(n[0],n[j]);
            break;
        }
    }
    
    if(n == sol)
    {
        cout<<"OK"<<endl;
    }
    else{
        cout<<"WRONG_ANSWER"<<endl;
    }
}