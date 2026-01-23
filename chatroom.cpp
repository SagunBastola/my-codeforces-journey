#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s;
    cin >> s;
    int idx=0;
    string t="hello";
    for(auto ch : s)
    {
        if(ch == t[idx])
        {
            idx++;
        }
        if(idx == 5)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}