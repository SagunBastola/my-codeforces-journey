#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        unordered_set<int> s;
        for(int& x : vec)
        {
            cin>>x;
            s.insert(x);
        }
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(vec[i] > 2*10e5)
            {
                continue;
            }
            if(vec[i] > (i))
            {
                continue;
            }
            for(int j=i-1;j>=0;j--)
            {
                if(vec[i]*vec[j] == i-j)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}